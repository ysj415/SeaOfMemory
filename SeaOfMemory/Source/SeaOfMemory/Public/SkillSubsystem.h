// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SOMGameDataBase.h"
#include "SkillSubsystem.generated.h"
/**
 * 
 */

USTRUCT(BlueprintType)
struct FSkillData
{
	GENERATED_BODY()
public:
	FSkillData()
		: name(FString("")), cost(0), cooltime(0.f), explain(FString("")), IsSkillUnlock(false) {}
	FSkillData(FString name, int32 cost, float cooltime, FString explain)
		: name(name), cost(cost), cooltime(cooltime), explain(explain), IsSkillUnlock(false) {}

	FString name;
	int32 cost;
	float cooltime;
	FString explain;

	bool IsSkillUnlock;
};

UCLASS()
class SEAOFMEMORY_API USkillSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void ResetSubsystemData();

	USkillSubsystem();

	bool AddSkillPoint(int32 SkillPointNum);

	bool UseSkillPoint(int32 SkillPointNum);

	UFUNCTION(BlueprintCallable, Category = "CheckSkillUnlock")
	bool UnlockSkill(SkillName skillname);

	UFUNCTION(BlueprintCallable, Category = "CheckSkillUnlock")
	bool IsSkillUnlock(SkillName skillname);

	UFUNCTION(BlueprintCallable)
	bool SkillSlotChange(int32 skillslotnum, SkillName skillname);

	bool IsActive_Skill(int32 skillslot);

	UFUNCTION(BlueprintCallable)
	void GetRandomSkillPoint(int min, int max, int count);

public:
	// 스킬 정보 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkillUnlockMap")
	TMap<SkillName, FSkillData> SkillDataMap;

	// 스킬 포인트
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkillUnlockMap")
	int32 SkillPoint;

	// 스킬 스롯에 등록된 스킬
	SkillName SkillSlot1;
	SkillName SkillSlot2;

	// 스킬 아이콘
	UPROPERTY(EditAnywhere, Category = "Skill Icon")
	UTexture2D* NullSkillIcon;

	UPROPERTY(EditAnywhere, Category = "Skill Icon")
	UTexture2D* AquaJetIcon;

	UPROPERTY(EditAnywhere, Category = "Skill Icon")
	UTexture2D* ActiveCamouflageIcon;

	UPROPERTY(EditAnywhere, Category = "Skill Icon")
	UTexture2D* ResidualbaitIcon;

	UPROPERTY(EditAnywhere, Category = "Skill Icon")
	UTexture2D* RepellentIcon;
	UPROPERTY()
	class ASOMBaseCharacter* Character;

	void SetCoolTime(int32 skillslot);
	bool MinusSKillCoolTime(int32 skillslot);

	int32 GetCooltimeRemain(int32 skillslot);

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
private:
	int32 CoolTimeRemain_Skill1;
	int32 CoolTimeRemain_Skill2;

	bool CheckSkillSlotCanChange(int32 skillslotnum, SkillName skillname);
	SkillName GetSkillSlotSkill(int32 skillslotnum);
};
