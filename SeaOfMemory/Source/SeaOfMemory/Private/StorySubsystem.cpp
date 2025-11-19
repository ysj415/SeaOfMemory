// Fill out your copyright notice in the Description page of Project Settings.


#include "StorySubsystem.h"
#include "MassageSubsystem.h"
#include "SOMGameDataBase.h"

UStorySubsystem::UStorySubsystem()
{
	CurrentLine = QuestLine::OpenPhone;
}

void UStorySubsystem::ClearCurrentQuest()
{
	/*
	OpenPhone 
	DrivingBoat
	GotoUnderWater
	Engine
	GotoBoat
	ShipPhone
	GotoShip 
	Item 
	CompletetoGetItem 
	Clear 
	*/
	switch (CurrentLine)
	{
	case QuestLine::OpenPhone:
		CurrentLine = QuestLine::DrivingBoat;
		break;
	case QuestLine::DrivingBoat:
		CurrentLine = QuestLine::GotoUnderWater;
		break;
	case QuestLine::GotoUnderWater:
		CurrentLine = QuestLine::Engine;
		break;
	case QuestLine::Engine:
		CurrentLine = QuestLine::GotoBoat;
		break;
	case QuestLine::GotoBoat:
		CurrentLine = QuestLine::ShipPhone;
		break;
	case QuestLine::ShipPhone:
		CurrentLine = QuestLine::GotoShip;
		break;
	case QuestLine::GotoShip:
		CurrentLine = QuestLine::Item;
		break;
	case QuestLine::Item:
		CurrentLine = QuestLine::CompletetoGetItem;
		break;
	case QuestLine::CompletetoGetItem:
		CurrentLine = QuestLine::Clear;
		break;
	}
#if  WITH_EDITOR
	UE_LOG(LogTemp,Warning, TEXT("%d"), CurrentLine)
#endif //  WITH_EDITOR

}

void UStorySubsystem::CollectorEvent()
{
	UMessageSubsystem* MessageSubsystem = UGameInstance::GetSubsystem<UMessageSubsystem>(GetWorld()->GetGameInstance());

	FString id = "Collector";

	FText Name =  NSLOCTEXT("SeaOfMemory", "Story", "수집가");

	FText Content = NSLOCTEXT("SeaOfMemory", "Story", "SNS에 올리신 사진, 잘 봤습니다.");
	MessageSubsystem->AddMessageForNewPersonReserve(id, Name, Content);

	FText Choice1 = NSLOCTEXT("SeaOfMemory", "Story", "누구세요?");
	MessageSubsystem->AddOneMyChoiceReserve(id, Choice1);

	Content = NSLOCTEXT("SeaOfMemory", "Story", "전 여러 사진을 모으는 수집가입니다.");
	MessageSubsystem->AddMessageForNewPersonReserve(id, Name, Content);

	Content = NSLOCTEXT("SeaOfMemory", "Story", "당신이 올린 사진이 맘에 들어 연락드렸습니다.");
	MessageSubsystem->AddMessageForNewPersonReserve(id, Name, Content);

	Content = NSLOCTEXT("SeaOfMemory", "Story", "혹시 괜찮으시다면 따로 부탁을 드려도 괜찮을까요?");
	MessageSubsystem->AddMessageForNewPersonReserve(id, Name, Content);

	Choice1 = NSLOCTEXT("SeaOfMemory", "Story", "부탁이요?");
	MessageSubsystem->AddOneMyChoiceReserve(id, Choice1);

	Content = NSLOCTEXT("SeaOfMemory", "Story", "네. 바다 속에는 파이어고비라는 종류의 물고기가 있다더군요.");
	MessageSubsystem->AddMessageForNewPersonReserve(id, Name, Content);

	Content = NSLOCTEXT("SeaOfMemory", "Story", "파이어고비의 사진을 주신다면 보상을 드리겠습니다.");
	MessageSubsystem->AddMessageForNewPersonReserve(id, Name, Content);

	Choice1 = NSLOCTEXT("SeaOfMemory", "Story", "좋아요 제가 찍어올게요");
	MessageSubsystem->AddOneMyChoiceReserve(id, Choice1);	

	MessageSubsystem->AddTextureChoiceReserve(id, ESpecies::Firefish);

	Content = NSLOCTEXT("SeaOfMemory", "Story", "정말 멋지군요!");
	MessageSubsystem->AddMessageForNewPersonReserve(id, Name, Content);

	Content = NSLOCTEXT("SeaOfMemory", "Story", "그럼 보상을 드리겠습니다.");
	MessageSubsystem->AddMessageForNewPersonReserve(id, Name, Content);

	Content = NSLOCTEXT("SeaOfMemory", "Story", "('수집가'님께서 300포인트를 보내셨습니다.)");
	MessageSubsystem->AddMessageForNewPersonReserve(id, Name, Content);

	MessageSubsystem->AddGiveMoneyReserve(id, 300);


	Content = NSLOCTEXT("SeaOfMemory", "Story", "그럼 다음에 또 부탁드립니다.");
	MessageSubsystem->AddMessageForNewPersonReserve(id, Name, Content);

	MessageSubsystem->StartTimer(id);
	// 사진 올리기 기능
}

void UStorySubsystem::KidEvent()
{
	UMessageSubsystem* MessageSubsystem = UGameInstance::GetSubsystem<UMessageSubsystem>(GetWorld()->GetGameInstance());

	FString id = "Kid";

	FText Name = NSLOCTEXT("SeaOfMemory", "Story", "경윤");

	FText Content = NSLOCTEXT("SeaOfMemory", "Story", "안녕하세요.");
	MessageSubsystem->AddMessageForNewPersonReserve(id, Name, Content);

	Content = NSLOCTEXT("SeaOfMemory", "Story", "전 정왕초 2학년 경윤이에요.");
	MessageSubsystem->AddMessageForNewPersonReserve(id, Name, Content);

	FText Choice1 = NSLOCTEXT("SeaOfMemory", "Story", "무슨일이니?");
	MessageSubsystem->AddOneMyChoiceReserve(id, Choice1);

	Content = NSLOCTEXT("SeaOfMemory", "Story", "아저씨가 찍은 사진들 너무 멋있어요!");
	MessageSubsystem->AddMessageForNewPersonReserve(id, Name, Content);

	Content = NSLOCTEXT("SeaOfMemory", "Story", "보고싶은 물고기가 있는데 혹시 찍어주실수 있을까요?");
	MessageSubsystem->AddMessageForNewPersonReserve(id, Name, Content);

	Choice1 = NSLOCTEXT("SeaOfMemory", "Story", "어떤 물고기가 보고싶니?");
	MessageSubsystem->AddOneMyChoiceReserve(id, Choice1);

	Content = NSLOCTEXT("SeaOfMemory", "Story", "애니메이션에 나오는 니모가 보고싶어요!");
	MessageSubsystem->AddMessageForNewPersonReserve(id, Name, Content);

	Choice1 = NSLOCTEXT("SeaOfMemory", "Story", "니모..? 잠시만 기다리렴");
	MessageSubsystem->AddOneMyChoiceReserve(id, Choice1);

	MessageSubsystem->AddTextureChoiceReserve(id, ESpecies::Clownfish);

	Content = NSLOCTEXT("SeaOfMemory", "Story", "와! 진짜 니모다!!");
	MessageSubsystem->AddMessageForNewPersonReserve(id, Name, Content);

	Content = NSLOCTEXT("SeaOfMemory", "Story", "이건 선물이에요!");
	MessageSubsystem->AddMessageForNewPersonReserve(id, Name, Content);

	Content = NSLOCTEXT("SeaOfMemory", "Story", "('경윤'님께서 100포인트를 보내셨습니다.)");
	MessageSubsystem->AddMessageForNewPersonReserve(id, Name, Content);

	MessageSubsystem->AddGiveMoneyReserve(id, 100);

	Content = NSLOCTEXT("SeaOfMemory", "Story", "다음에 또 봐요");
	MessageSubsystem->AddMessageForNewPersonReserve(id, Name, Content);


	MessageSubsystem->StartTimer(id);
}

void UStorySubsystem::ResetSubsystemData()
{
	CurrentLine = QuestLine::OpenPhone;
}