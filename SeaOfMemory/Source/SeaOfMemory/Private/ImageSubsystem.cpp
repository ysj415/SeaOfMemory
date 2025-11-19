// Fill out your copyright notice in the Description page of Project Settings.


#include "ImageSubsystem.h"
#include "Engine/GameViewportClient.h"
#include "Engine/Texture2D.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Runtime/Core/Public/Misc/FileHelper.h"
#include "Runtime/Core/Public/Misc/Paths.h"
#include "Runtime/RenderCore/Public/RenderingThread.h"
#include "Runtime/RenderCore/Public/RenderUtils.h"
#include "ConvexVolume.h"
#include "DrawDebugHelpers.h"
#include "CoordinateConversion.h"
#include "UGridSubsystem.h"
#include "IllustratedGuideSubsystem.h"
#include "CameraWidget.h"
#include "IImageWrapper.h"
#include "ImageUtils.h"
#include "IImageWrapperModule.h"
#include "Modules/ModuleManager.h"
#include "SkillSubsystem.h"

UImageSubsystem::UImageSubsystem()
{
    ViewProjectionMatrix = FMatrix::Identity;
}

void UImageSubsystem::InitializedSubsystem()
{

}

void UImageSubsystem::CaptureScreenshot(FString filename, bool b, bool b2)
{
    FileName = filename;
    FScreenshotRequest::RequestScreenshot(filename, b, b2);

    UPhotoData* NewPhoto = NewObject<UPhotoData>(this);
    // =========================== test=================================
    //TSharedPtr<UPhotoData> NewPhoto = MakeShared<UPhotoData>();
    // =========================== test=================================

    CaptureTextures.Add(NewPhoto);
    NewPhoto->FilePath = filename;
    NewPhoto->index = indexCount++;

    //CaptureTextures
    if (!NewPhoto->OnCaptured.IsBound())
    {
        NewPhoto->OnCaptured.AddDynamic(this, &UImageSubsystem::OnScreenshotCaptured);
    }

    if (!UGameViewportClient::OnScreenshotCaptured().IsBoundToObject(NewPhoto))
    {
        UGameViewportClient::OnScreenshotCaptured().AddUObject(NewPhoto, &UPhotoData::OnScreenshotCaptured);
    }

#if WITH_EDITOR
    UE_LOG(LogTemp, Warning, TEXT("Current Memory Usage: %d KB"), FPlatformMemory::GetStats().UsedPhysical / 1024);
    UE_LOG(LogTemp, Warning, TEXT("Total Allocated Memory: %d KB"), FPlatformMemory::GetStats().TotalPhysical / 1024);
#endif
}

void UPhotoData::OnScreenshotCaptured(int32 Width, int32 Height, const TArray<FColor>& Image)
{
    if (Width <= 0 || Height <= 0 || Image.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("Screenshot capture failed"));
        return;
    }

    TArray<uint8> data;
    //ConvertColorArrayToPNG(Width, Height, Image, data);

    UTexture2D* Texture = ConvertFColorArrayToTexture(Width, Height, Image);
    if (Texture)
    {
        texture = Texture;
    }

    OnCaptured.Broadcast(texture, this, index);
}

void UImageSubsystem::OnScreenshotCaptured(UTexture2D* texture, UPhotoData* Photoobject, int32 index)
{
    UGameViewportClient::OnScreenshotCaptured().RemoveAll(Photoobject);

    UIllustratedGuideSubsystem* GuideSubsystem = UGameInstance::GetSubsystem<UIllustratedGuideSubsystem>(GetWorld()->GetGameInstance());
    if (!GuideSubsystem)
    {
        UE_LOG(LogTemp, Warning, TEXT("IllustratedGuideSubsystem not found"));
        return;
    }

    if (!CaptureTextures.IsEmpty())
    {
        CameraWidget->UpdateLastPhoto(texture);
    }
    AnalyzeIntersectEntitys(GuideSubsystem, index);
}

UTexture2D* UPhotoData::ConvertFColorArrayToTexture(int32 Width, int32 Height, const TArray<FColor>& Image)
{

    UTexture2D* CaptureTexture = UTexture2D::CreateTransient(Width, Height, PF_B8G8R8A8);
    if (nullptr == CaptureTexture)
    {
        return nullptr;
    }

    if (nullptr == CaptureTexture->GetPlatformData())
    {
        return nullptr;
    }

    if (false == CaptureTexture->GetPlatformData()->Mips.IsValidIndex(0))
    {
        return nullptr;
    }

    FTexture2DMipMap& Mip = CaptureTexture->GetPlatformData()->Mips[0];
    void* TextureData = Mip.BulkData.Lock(LOCK_READ_WRITE);
    FMemory::Memcpy(TextureData, Image.GetData(), Image.Num() * sizeof(FColor));
    Mip.BulkData.Unlock();

    CaptureTexture->UpdateResource();
    return CaptureTexture;
}

void UImageSubsystem::ResetSubsystemData()
{
    CaptureTextures.Empty();
	CameraWidget = nullptr;
    FileName = nullptr;
    indexCount = 0;
}

void UImageSubsystem::SetViewProjectionMatrix(FMatrix matrix)
{
    ViewProjectionMatrix = matrix;
}

void UImageSubsystem::InitializeConvexVolume()
{
    GetViewFrustumBounds(ViewFrustum, ViewProjectionMatrix, true,true);
}

void UImageSubsystem::UpdateConvexVolume(FMatrix matrix)
{
    ViewProjectionMatrix = matrix;
    InitializeConvexVolume();
}

void UImageSubsystem::UpdateConvexVolumeWithFarPlane(FMatrix matrix, FVector Location, FVector ForwardVector, float Distance)
{
    FPlane FarPlane = CalculateFarPlane(Location, ForwardVector, Distance);

    ViewProjectionMatrix = matrix;

    GetViewFrustumBounds(ViewFrustum, ViewProjectionMatrix, FarPlane, true, true);
}

FVector UImageSubsystem::CalculatePlaneIntersection(const FPlane& Plane1, const FPlane& Plane2, const FPlane& Plane3)
{
    FVector N1 = Plane1.GetNormal();
    FVector N2 = Plane2.GetNormal();
    FVector N3 = Plane3.GetNormal();

    // 법선 벡터의 외적
    FVector N1xN2 = FVector::CrossProduct(N1, N2);
    FVector N2xN3 = FVector::CrossProduct(N2, N3);
    FVector N3xN1 = FVector::CrossProduct(N3, N1);

    float D1 = Plane1.W;
    float D2 = Plane2.W;
    float D3 = Plane3.W;

    // 교차점 계산
    FVector Intersection = (
        (N1xN2 * D3) +
        (N2xN3 * D1) +
        (N3xN1 * D2)
        ) / FVector::DotProduct(N1, N2xN3);

    return Intersection;
}


void UImageSubsystem::DrawConvexVolumePlanes(UWorld* World)
{
    if (!World) return;

    int i = 0;
    for (const FPlane& Plane : ViewFrustum.Planes)
    {
        FVector PlaneNormal = FVector(Plane.X, Plane.Y, Plane.Z);
        FVector PlanePoint = PlaneNormal * Plane.W;

        FVector LineStart = PlanePoint;
        FVector LineEnd = PlanePoint + (PlaneNormal * 100.0f);
        //DrawDebugLine(World, LineStart, LineEnd, PlaneColor, false, 5.0f, 0, 2.0f);

        // 평면 그리기
        FVector normal = FVector(Plane.X, Plane.Y, Plane.Z);
        normal.Normalize();
        FVector PlaneOrigin = normal * Plane.W;  // Plane의 원점
        //PlaneOrigin += Location;

        float Size = 300.f;
        FVector Right = FVector::CrossProduct(Plane.GetNormal(), FVector(0, 0, 1)).GetSafeNormal() * Size;
        FVector Up = FVector::CrossProduct(Plane.GetNormal(), Right).GetSafeNormal() * Size;
        
        //FVector A = PlaneOrigin + Right + Up;
        //FVector B = PlaneOrigin + Right - Up;
        //FVector C = PlaneOrigin - Right - Up;
        //FVector D = PlaneOrigin - Right + Up;

        FVector A = CoordinateConversion::ConversionEngineToViewport(PlaneOrigin + Right + Up);
        FVector B = CoordinateConversion::ConversionEngineToViewport(PlaneOrigin + Right - Up);
        FVector C = CoordinateConversion::ConversionEngineToViewport(PlaneOrigin - Right - Up);
        FVector D = CoordinateConversion::ConversionEngineToViewport(PlaneOrigin - Right + Up);

        FColor color = FColor::Red;
        switch (i)
        {
        case 0: // near
            color = FColor::White;
            break;
        case 1: //left
            color = FColor::Green;
            break;
        case 2: //right
            color = FColor::Yellow;
            break;
        case 3: //top
            color = FColor::Blue;
            break;
        case 4: //bottom
            color = FColor::Red;
            break;
        case 5:
            color = FColor::Black;
            break;
        }


        // 평면 그리기: 4개의 점을 연결하여 사각형을 그립니다
        DrawDebugLine(World, A, B, color, false, 1.f, 0, 10);
        DrawDebugLine(World, B, C, color, false, 1.f, 0, 10);
        DrawDebugLine(World, C, D, color, false, 1.f, 0, 10);
        DrawDebugLine(World, D, A, color, false, 1.f, 0, 10);


        PlaneOrigin = CoordinateConversion::ConversionEngineToViewport(PlaneOrigin);
        normal = CoordinateConversion::ConversionEngineToViewport(normal);

        DrawDebugLine(World, PlaneOrigin, PlaneOrigin+ normal*50, color, false, 1.f, 0, 3);
        i++;
    }
}

void UImageSubsystem::DrawConvexVolume(UWorld* World, float LineLength, FColor color)
{
    if (!World) return;

    FConvexVolume::FPlaneArray Planes = ViewFrustum.Planes;

    FVector Near_LT = CalculatePlaneIntersection(Planes[0], Planes[1], Planes[3]);
    FVector Near_RT = CalculatePlaneIntersection(Planes[0], Planes[2], Planes[3]);

    FVector Near_RB = CalculatePlaneIntersection(Planes[0], Planes[2], Planes[4]);
    FVector Near_LB = CalculatePlaneIntersection(Planes[0], Planes[1], Planes[4]);

    FVector Far_LT = CalculatePlaneIntersection(Planes[5], Planes[1], Planes[3]);
    FVector Far_RT = CalculatePlaneIntersection(Planes[5], Planes[2], Planes[3]);

    FVector Far_RB = CalculatePlaneIntersection(Planes[5], Planes[2], Planes[4]);
    FVector Far_LB = CalculatePlaneIntersection(Planes[5], Planes[1], Planes[4]);

    Near_LT = CoordinateConversion::ConversionEngineToViewport(Near_LT);
    Near_RT = CoordinateConversion::ConversionEngineToViewport(Near_RT);
    Near_RB = CoordinateConversion::ConversionEngineToViewport(Near_RB);
    Near_LB = CoordinateConversion::ConversionEngineToViewport(Near_LB);
    Far_LT = CoordinateConversion::ConversionEngineToViewport(Far_LT);
    Far_RT = CoordinateConversion::ConversionEngineToViewport(Far_RT);
    Far_RB = CoordinateConversion::ConversionEngineToViewport(Far_RB);
    Far_LB = CoordinateConversion::ConversionEngineToViewport(Far_LB);

    DrawDebugLine(World, Near_LT, Near_RT, color, false, 1.f, 0, LineLength);
    DrawDebugLine(World, Near_RT, Near_RB, color, false, 1.f, 0, LineLength);
    DrawDebugLine(World, Near_RB, Near_LB, color, false, 1.f, 0, LineLength);
    DrawDebugLine(World, Near_LB, Near_LT, color, false, 1.f, 0, LineLength);

    DrawDebugLine(World, Far_LT, Far_RT, color, false, 1.f, 0, LineLength);
    DrawDebugLine(World, Far_RT, Far_RB, color, false, 1.f, 0, LineLength);
    DrawDebugLine(World, Far_RB, Far_LB, color, false, 1.f, 0, LineLength);
    DrawDebugLine(World, Far_LB, Far_LT, color, false, 1.f, 0, LineLength);

    DrawDebugLine(World, Near_LT, Far_LT, color, false, 1.f, 0, LineLength);
    DrawDebugLine(World, Near_RT, Far_RT, color, false, 1.f, 0, LineLength);
    DrawDebugLine(World, Near_RB, Far_RB, color, false, 1.f, 0, LineLength);
    DrawDebugLine(World, Near_LB, Far_LB, color, false, 1.f, 0, LineLength);
}

bool UImageSubsystem::TestConvexVolume(FVector vector)
{
    return ViewFrustum.IntersectPoint(vector);
}

bool UImageSubsystem::IntersectBox(const FVector& Origin, const FVector& Extent)
{
    FVector Origin_conv = CoordinateConversion::ConversionViewportToEngine(Origin);
    FVector Extent_conv = CoordinateConversion::ConversionViewportToEngine(Extent);

    //for (FPlane Plane : ViewFrustum.Planes)
    //{
    //    UE_LOG(LogTemp, Warning, TEXT("Planes : %s W=%f"), *Plane.ToString(), Plane.W);
    //}
    //UE_LOG(LogTemp, Warning, TEXT("========================"));


    return ViewFrustum.IntersectBox(Origin_conv, Extent_conv);
}

FPlane UImageSubsystem::CalculateFarPlane(FVector Location, FVector ForwardVector, float Distance)
{
    FPlane FarPlane;
    FVector NormalVector = ForwardVector;
    NormalVector.Normalize();

    FVector OriginPoint = Location + NormalVector * Distance;

    float W = (OriginPoint.X* NormalVector.X + OriginPoint.Y * NormalVector.Y+ OriginPoint.Z * NormalVector.Z);

    NormalVector = CoordinateConversion::ConversionViewportToEngine(NormalVector);

    FarPlane = FPlane(NormalVector, W);

    //UE_LOG(LogTemp, Warning, TEXT("[Location]: %s"), *Location.ToString());
    //UE_LOG(LogTemp, Warning, TEXT("[ForwardVector]: %s"), *ForwardVector.ToString());
    //UE_LOG(LogTemp, Warning, TEXT("[-ForwardVector]: %s"), *( - ForwardVector).ToString());
    //UE_LOG(LogTemp, Warning, TEXT("[OriginPoint]: %s"), *OriginPoint.ToString());
    //UE_LOG(LogTemp, Warning, TEXT("[W]: %f"), W);
    //UE_LOG(LogTemp, Warning, TEXT("[NormalVector]: %s"), *NormalVector.ToString());

    return FarPlane;
}

void UImageSubsystem::IntersectGrid(UGridSubsystem* GridSubsystem)
{
    const TMap<FIntVector, TArray<FGridEntityInfo>> GridMap = GridSubsystem->GetGridMap();


    IntersectKeys.Empty();

    TArray<FIntVector> Keys;
    GridMap.GetKeys(Keys);

    FVector Origin;
    float HalfSize = GridSubsystem->GetGridSize() / 2;
    FVector Extend = FVector(HalfSize, HalfSize, HalfSize);

    for (FIntVector Key : Keys)
    {
        Origin = GridSubsystem->GetGridCenter(Key);

        if (IntersectBox(Origin, Extend))
        {
             IntersectKeys.Add(Key);
        }
    }
}

void UImageSubsystem::IntersectEntity(UGridSubsystem* GridSubsystem)
{
    const TMap<FIntVector, TArray<FGridEntityInfo>> GridMap = GridSubsystem->GetGridMap();
    IntersectEntityInfos.Empty();
    if (!IntersectKeys.IsEmpty())
    {

        for (FIntVector Key : IntersectKeys)
        {
            TArray<FGridEntityInfo> EntityInfoArray = GridMap[Key];

            for (FGridEntityInfo Entity : EntityInfoArray)
            {

                FVector EntityLocation = Entity.Transform.GetLocation();
                EntityLocation = CoordinateConversion::ConversionViewportToEngine(EntityLocation);
                if (ViewFrustum.IntersectPoint(EntityLocation))
                {
                    if (Entity.Species == ESpecies::Null)
                        break;
                    if (Entity.Species == ESpecies::Bait)
                        break;
                    if (Entity.Species == ESpecies::Character)
                        break;
                    if (Entity.Species == ESpecies::Repellent)
                        break;
                    IntersectEntityInfos.Add(Entity);
                }

            }
        }
    }
}

TArray<FGridEntityInfo> UImageSubsystem::TestEntityIntersectFrustum(UGridSubsystem* GridSubsystem)
{

    IntersectGrid(GridSubsystem);
    IntersectEntity(GridSubsystem);

    return IntersectEntityInfos;
}

TArray<FGridEntityInfo> UImageSubsystem::UpdateVolumeAndTestIntersect(FMatrix matrix, FVector Location, FVector ForwardVector, UGridSubsystem* GridSubsystem)
{
    UpdateConvexVolumeWithFarPlane(matrix, Location, ForwardVector);
    TestEntityIntersectFrustum(GridSubsystem);

    return IntersectEntityInfos;
}

void UImageSubsystem::AnalyzeIntersectEntitys(UIllustratedGuideSubsystem* GuideSubsystem, int32 index)
{
    TMap<ESpecies, int> SpeciesMap;

    UPhotoData* CurrentPhoto = GetPhotoDataFromIndex(index);

    for (FGridEntityInfo EntityInfo : IntersectEntityInfos)
    {
        SpeciesMap.FindOrAdd(EntityInfo.Species)++;
    }

    TArray<ESpecies> Types;
    SpeciesMap.GetKeys(Types);

    int MaxCount = 0;
    int TotalCount = 0;
    ESpecies BestSpecies = ESpecies::Null;

    for (ESpecies type : Types)
    {
        TotalCount += SpeciesMap[type];
        if (SpeciesMap[type] > MaxCount)
        {
            MaxCount = SpeciesMap[type];
            BestSpecies = type;
        }
    }

    if (BestSpecies != ESpecies::Null && MaxCount > 0)
    {
        //=======================================================
        //const UEnum* EnumPtr = StaticEnum<ESpecies>();
        //FString EnumName = EnumPtr->GetNameStringByValue(static_cast<int64>(BestSpecies));
        //UE_LOG(LogTemp, Warning, TEXT("%s"), *EnumName)
        //=======================================================

        bool IsUnLock = GuideSubsystem->GetIsUnlock(BestSpecies);

        if (!CaptureTextures.IsEmpty())
        {
            if (!IsUnLock)
            {
                GuideSubsystem->UnlockCollection(BestSpecies);
                GuideSubsystem->SetFishSubImage(BestSpecies, CaptureTextures.Last()->texture);
                GuideSubsystem->SetFishMainImage(BestSpecies, CaptureTextures.Last()->texture);

                CameraWidget->NewCollectionRegistered(BestSpecies);

                USkillSubsystem* skillsubsystem = UGameInstance::GetSubsystem<USkillSubsystem>(GetWorld()->GetGameInstance());
                skillsubsystem->AddSkillPoint(100);
            }

                USkillSubsystem* skillsubsystem = UGameInstance::GetSubsystem<USkillSubsystem>(GetWorld()->GetGameInstance());
                skillsubsystem->GetRandomSkillPoint(1,2, TotalCount);

            CurrentPhoto->species = BestSpecies;
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("CaptureTextures is empty"))
        }
    }
}

UPhotoData* UImageSubsystem::GetPhotoDataFromIndex(int32 index)
{
    UPhotoData* result = NULL;

    for (UPhotoData* Texture: CaptureTextures)
    {
        if (Texture->index == index)
        {
            result = Texture;
        }
    }
    return result;
}

TArray<UTexture2D*> UImageSubsystem::GetTextureArray()
{
    TArray<UTexture2D*> Textures;
    for (UPhotoData* data : CaptureTextures)
    {
        Textures.Add(data->texture);
    }

    return Textures;
}

UTexture2D* UImageSubsystem::GetTexture(int num)
{
    if (CaptureTextures.IsValidIndex(num))
    {
        return CaptureTextures[num]->texture;
    }
    else
    {
        return nullptr;
    }
}

TArray<UPhotoData*> UImageSubsystem::GetPhotoArray()
{
    return CaptureTextures;
}

UPhotoData* UImageSubsystem::GetPhoto(int num)
{
    if (CaptureTextures.IsValidIndex(num))
    {
        return CaptureTextures[num];
    }
    else
    {
        return nullptr;
    }
}

void UImageSubsystem::UpdateTextures()
{

}

TSharedPtr<FJsonObject> UPhotoData::ConvertTexture2DToJson(UTexture2D* Texture)
{
    if (!Texture)
    {
        UE_LOG(LogTemp, Error, TEXT("Invalid texture"));
        return nullptr;
    }

    FTexture2DMipMap& Mip = Texture->GetPlatformData()->Mips[0];
    void* Data = Mip.BulkData.Lock(LOCK_READ_ONLY);

    int32 Width = Mip.SizeX;
    int32 Height = Mip.SizeY;
    TArray<uint8> PixelData;
    PixelData.SetNumUninitialized(Width * Height * 4);

    FMemory::Memcpy(PixelData.GetData(), Data, PixelData.Num());
    Mip.BulkData.Unlock();

    FString Base64Data = FBase64::Encode(PixelData);

    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetNumberField(TEXT("Width"), Width);
    JsonObject->SetNumberField(TEXT("Height"), Height);
    JsonObject->SetStringField(TEXT("PixelData"), Base64Data);

    return JsonObject;
}


void UImageSubsystem::SetCameraWidget(UCameraWidget* Widget)
{
    CameraWidget = Widget;
}

bool UImageSubsystem::DeleteTextureInArray(int32 index)
{
    if (CaptureTextures.IsValidIndex(index))
    {
        CaptureTextures[index]->ConditionalBeginDestroy();
        CaptureTextures[index]=nullptr;
        CaptureTextures.RemoveAt(index);
        return true;
    }
    else
    {
        UE_LOG(LogTemp,Warning, TEXT("[UImageSubsystem::DeleteTextureInArray]: Index is not valid"))
        return false;
    }
}

bool UPhotoData::ConvertTextureToPNG(UTexture2D* Texture, TArray<uint8>& OutByteArray, bool savefile)
{
    if (!Texture)
    {
        UE_LOG(LogTemp, Warning, TEXT("Invalid Texture"));
        return false;
    }
    //if (!Texture->PlatformData || !Texture->PlatformData->Mips.Num())
    //{
    //    UE_LOG(LogTemp, Error, TEXT("ConvertTextureToPNG: Texture PlatformData is invalid"));
    //    return false;
    //}

    Texture->UpdateResource();
    FTexture2DMipMap& Mip = Texture->GetPlatformData()->Mips[0];
    FByteBulkData* RawImageData = &Mip.BulkData;

    void* TextureData = RawImageData->Lock(LOCK_READ_ONLY);
    const int32 TextureWidth = Mip.SizeX;
    const int32 TextureHeight = Mip.SizeY;

    // 텍스쳐 데이터 -> color 배열
    TArray<FColor> Colors;
    Colors.SetNumUninitialized(TextureWidth * TextureHeight);

    FMemory::Memcpy(Colors.GetData(), TextureData, Colors.Num() * sizeof(FColor));
    RawImageData->Unlock();

    return ConvertColorArrayToPNG(TextureWidth, TextureHeight, Colors, OutByteArray, savefile);
}

bool UPhotoData::ConvertColorArrayToPNG(int32 Width, int32 Height, const TArray<FColor>& Texture, TArray<uint8>& OutByteArray, bool savefile)
{
    if (Texture.IsEmpty())
    {
        UE_LOG(LogTemp, Warning, TEXT("Invalid Texture!"));
        return false;
    }

    // 이미지 데이터를 PNG로 변환
    IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
    TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::PNG);

    if (ImageWrapper.IsValid() && ImageWrapper->SetRaw(
        Texture.GetData(),
        Texture.Num() * sizeof(FColor),
        Width,
        Height,
        ERGBFormat::BGRA,
        8))
    {
        // PNG 데이터 생성
        const TArray64<uint8>& PNGData = ImageWrapper->GetCompressed(100);
        OutByteArray = PNGData;
        UE_LOG(LogTemp, Log, TEXT("PNGData Complete"), *FilePath);

        if (savefile)
        {
            // 파일로 저장
            if (FFileHelper::SaveArrayToFile(PNGData, *FilePath))
            {
                UE_LOG(LogTemp, Log, TEXT("Saved texture as PNG: %s"), *FilePath);
                return true;
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("Failed to save PNG file: %s"), *FilePath);
                return false;
            }
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Failed to convert texture to PNG format"));
        return false;
    }
    return false;
}
