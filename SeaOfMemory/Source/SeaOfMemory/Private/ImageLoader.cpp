// Fill out your copyright notice in the Description page of Project Settings.


#include "ImageLoader.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "Misc/FileHelper.h"
#include "Modules/ModuleManager.h"

//TArray<UTexture2D*> UImageLoader::LoadAllPNGsFromFolder(const FString& FolderPath)
//{
//    TArray<UTexture2D*> LoadedTextures;
//
//    IFileManager& FileManager = IFileManager::Get();
//    TArray<FString> FileNames;
//    FileManager.FindFilesRecursive(FileNames, *FolderPath, TEXT("*.png"), true, false, false);
//
//    for (const FString& FileName : FileNames)
//    {
//        TArray<uint8> FileData;
//        if (FFileHelper::LoadFileToArray(FileData, *FileName))
//        {
//            IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
//            TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::PNG);
//
//            if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(FileData.GetData(), FileData.Num()))
//            {
//                const TArray<uint8>* UncompressedBGRA = NULL;
//                if (ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedBGRA))
//                {
//                    UTexture2D* Texture = UTexture2D::CreateTransient(
//                        ImageWrapper->GetWidth(),
//                        ImageWrapper->GetHeight(),
//                        PF_B8G8R8A8);
//
//                    void* TextureData = Texture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
//                    FMemory::Memcpy(TextureData, UncompressedBGRA->GetData(), UncompressedBGRA->Num());
//                    Texture->PlatformData->Mips[0].BulkData.Unlock();
//
//                    Texture->UpdateResource();
//
//                    LoadedTextures.Add(Texture);
//                }
//            }
//        }
//    }
//
//    return LoadedTextures;
//}
