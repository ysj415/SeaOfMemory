// Fill out your copyright notice in the Description page of Project Settings.


#include "SkillSubsystem.h"
#include "../SOMBaseCharacter.h"

#define Max_SkillPoint 50000

USkillSubsystem::USkillSubsystem()
{
	SkillPoint = 10;

	//---------------------------스킬 데이터 초기화---------------------------
	SkillDataMap.Add(SkillName::AquaJet, 
		FSkillData(AQUAJET_SKILLNAME, AQUAJET_COST, AQUAJET_COOLTIME, AQUAJET_EXPLAIN));
	SkillDataMap.Add(SkillName::ActiveCamouflage, 
		FSkillData(ACTIVECAMOUFLAGE_SKILLNAME, ACTIVECAMOUFLAGE_COST, ACTIVECAMOUFLAGE_COOLTIME, ACTIVECAMOUFLAGE_EXPLAIN));
	SkillDataMap.Add(SkillName::ResidualBait,
		FSkillData(RESIDUALBAIT_SKILLNAME, RESIDUALBAIT_COST, RESIDUALBAIT_COOLTIME, RESIDUALBAIT_EXPLAIN));
	SkillDataMap.Add(SkillName::Repellent,
		FSkillData(REPELLENT_SKILLNAME, REPELLENT_COST, REPELLENT_COOLTIME, REPELLENT_EXPLAIN));

	SkillDataMap.Add(SkillName::Tank,
		FSkillData(A_SKILLNAME, A_COST, 0, A_EXPLAIN));
	SkillDataMap.Add(SkillName::Speed,
		FSkillData(B_SKILLNAME, B_COST, 0, B_EXPLAIN));
	SkillDataMap.Add(SkillName::Breath,
		FSkillData(C_SKILLNAME, C_COST, 0, C_EXPLAIN));
	//---------------------------스킬 슬롯 초기화---------------------------
	SkillSlot1 = SkillName::Null;
	SkillSlot2 = SkillName::Null;
}

void USkillSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	CoolTimeRemain_Skill1 = 0;
	CoolTimeRemain_Skill2 = 0;
}

bool USkillSubsystem::AddSkillPoint(int32 SkillPointNum)
{
	if (SkillPoint <= Max_SkillPoint)
	{
		SkillPoint += SkillPointNum;
		return true;
	}
	return false;
}

bool USkillSubsystem::UseSkillPoint(int32 SkillPointNum)
{
	if (SkillPoint >= SkillPointNum)
	{
		SkillPoint -= SkillPointNum;
		return true;
	}
	return false;
}

bool USkillSubsystem::UnlockSkill(SkillName skillname)
{
	if (skillname == SkillName::Null)
		return false;
	if (UseSkillPoint(SkillDataMap[skillname].cost))
	{
		SkillDataMap[skillname].IsSkillUnlock = true;

		if (skillname == SkillName::Tank)
		{
			Character->Max_Oxygentank = 450;
			Character->BuyTank();
		}
		if (skillname == SkillName::Speed)
		{
			Character->Basic_Speed = 400.f;
			Character->BuyFlippers();
		}
		if (skillname == SkillName::Breath)
		{
			Character->Max_Oxygen = 150;
		}
		return true;
	}


	return false;
}

bool USkillSubsystem::IsSkillUnlock(SkillName skillname)
{
	if (skillname == SkillName::Null)
		return false;
	return SkillDataMap[skillname].IsSkillUnlock;
}

bool USkillSubsystem::SkillSlotChange(int32 skillslotnum, SkillName skillname)
{
	if (!CheckSkillSlotCanChange(skillslotnum, skillname))
	{
		return false;
	}
	switch (skillslotnum)
	{
	case 1:
		SkillSlot1 = skillname;
		break;
	case 2:
		SkillSlot2 = skillname;
		break;
	}
	if (Character)
	{
		//UE_LOG(LogTemp, Warning, TEXT("SkillSlotChange"));
		Character->SetSkillSlotIcon();
		return true;
	}
	return false;
}

bool USkillSubsystem::IsActive_Skill(int32 skillslot)
{
	switch (skillslot)
	{
	case 1:
		if (CoolTimeRemain_Skill1 <= 0)
			return true;
		break;
	case 2:
		if (CoolTimeRemain_Skill2 <= 0)
			return true;
		break;
	}

	return false;
}

void USkillSubsystem::GetRandomSkillPoint(int min, int max, int count )
{
	SkillPoint += FMath::RandRange(min, max) * count;
}

void USkillSubsystem::SetCoolTime(int32 skillslot)
{
	switch(skillslot)
	{
	case 1:
		CoolTimeRemain_Skill1 = SkillDataMap[SkillSlot1].cooltime;
		break;
	case 2:
		CoolTimeRemain_Skill2 = SkillDataMap[SkillSlot2].cooltime;
		break;
	}
}

bool USkillSubsystem::MinusSKillCoolTime(int32 skillslot)
{
	switch (skillslot)
	{
	case 1:
		if (--CoolTimeRemain_Skill1 < 0)
		{
			return true;
		}
		break;
	case 2:
		if (--CoolTimeRemain_Skill2 < 0)
		{
			return true;
		}
		break;
	}
	return false;
}

int32 USkillSubsystem::GetCooltimeRemain(int32 skillslot)
{
	switch (skillslot)
	{
	case 1:
			return CoolTimeRemain_Skill1;
		break;
	case 2:
		return CoolTimeRemain_Skill2;
		break;
	}
	return 0;
}


bool USkillSubsystem::CheckSkillSlotCanChange(int32 skillslotnum, SkillName skillname)
{
	if (!IsActive_Skill(skillslotnum))
	{
		return false;
	}
	switch (skillslotnum)
	{
	case 1:
		if (SkillSlot2 == skillname)
		{
			UE_LOG(LogTemp, Warning, TEXT("SkillSlot2 == skillname"));
			SkillSlot2 = SkillSlot1;

			return true;
		}
		break;
	case 2:
		if (SkillSlot1 == skillname)
		{
			UE_LOG(LogTemp, Warning, TEXT("SkillSlot1 == skillname"));

			SkillSlot1 = SkillSlot2;

			return true;
		}
		break;
	}

	return true;
}

SkillName USkillSubsystem::GetSkillSlotSkill(int32 skillslotnum)
{
	switch (skillslotnum)
	{
	case 1:
		return SkillSlot1;
		break;
	case 2:
		return SkillSlot2;
		break;
	}
	return SkillName::Null;
}
void USkillSubsystem::ResetSubsystemData()
{
	SkillPoint = 10;
	SkillSlot1 = SkillName::Null;
	SkillSlot2 = SkillName::Null;
	CoolTimeRemain_Skill1 = 0;
	CoolTimeRemain_Skill2 = 0;
	for (auto& Elem : SkillDataMap)
	{
		Elem.Value.IsSkillUnlock = false;
	}
}