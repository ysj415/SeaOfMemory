// Fill out your copyright notice in the Description page of Project Settings.


#include "MassageSubsystem.h"
#include "MesageWidget.h"
#include "StorySubsystem.h"
#include "../SOMBaseCharacter.h"
#include "SkillSubsystem.h"

UMessageSubsystem::UMessageSubsystem()
{
}

bool UMessageSubsystem::AddNewPerson(FString Target, FText name)
{
	if (MessageDataMap.Contains(Target))
	{
		UE_LOG(LogTemp, Log, TEXT("UMessageSubsystem: Map already Contains applicable person"))
		return false;
	}
	UMessageData* NewData = NewObject<UMessageData>(this);
	NewData->Name = name;
	MessageDataMap.FindOrAdd(Target, NewData);
	return true;
}

bool UMessageSubsystem::AddNewMessage(FString Target, FText Message, bool isMyMessage, bool isChecked)
{
	if (!MessageDataMap.Contains(Target))
	{
		UE_LOG(LogTemp, Log, TEXT("UMessageSubsystem: Map does not contain targets"))
			return false;
	}
	MessageDataMap[Target]->MessageArray.Add(FMessageContent(Message, isMyMessage, isChecked));
	return true;
}

bool UMessageSubsystem::AddNewImage(FString Target, UTexture2D* texture)
{
	if (!MessageDataMap.Contains(Target))
	{
		UE_LOG(LogTemp, Log, TEXT("UMessageSubsystem: Map does not contain targets"))
			return false;
	}
	MessageDataMap[Target]->MessageArray.Add(FMessageContent(texture));
	return true;
}

void UMessageSubsystem::AddNewMessageOnWidget(FString Target, FText Message)
{

	if (MessageWidget)
	{
		if (MessageWidget->CurrentMessageTarget == Target)
		{
			AddNewMessage(Target, Message, false, true);
			// 위젯 업데이트
			MessageWidget->AddMessageText(false, Message);
		}
		else
		{
			AddNewMessage(Target, Message, false,false);
			// 위젯 업데이트
		}
	}
	else
	{
		if (Character)
		{

			if (AddNewMessage(Target, Message, false, false))
			{
				if (MessageDataMap[Target]->IsFirsNotice)
				{
					Character->NoticeNewMessage(MessageDataMap[Target]->Name);
					MessageDataMap[Target]->IsFirsNotice = false;
				}
			}
		}
	}

}

void UMessageSubsystem::AddNewMessageForNewPersonOnWidget(FString Target, FText Name, FText Message)
{
	AddNewPerson(Target, Name);
	AddNewMessageOnWidget(Target, Message);
}


void UMessageSubsystem::StartTimer(FString Target, float Delay)
{
	if (!MessageDataMap.Contains(Target))
	{
		return;
	}

	FTimerDelegate TimerDel;
	TimerDel.BindUFunction(this, FName("TimerFunction"), Target); // 10을 인자로 전달

	GetGameInstance()->GetTimerManager().SetTimer(MessageDataMap[Target]->TimerHandle, TimerDel, Delay, true);
	GetGameInstance()->GetTimerManager().UnPauseTimer(MessageDataMap[Target]->TimerHandle);
	//GetWorld()->GetTimerManager().SetTimer(
	//	MessageDataMap[Target]->TimerHandle,
	//	this,
	//	&UMessageSubsystem::TimerFunction,
	//	Delay,
	//	true);
}

void UMessageSubsystem::TimerFunction(FString Target)
{
#if WITH_EDITOR
	UE_LOG(LogTemp,Warning, TEXT("TimerFunction[%s]"),*Target)
#endif
	if (MessageDataMap[Target]->ReserveArray.IsEmpty())
	{
		MessageDataMap[Target]->IsFirsNotice = true;
		GetWorld()->GetTimerManager().ClearTimer(MessageDataMap[Target]->TimerHandle);
		return;
	}

	if (MessageDataMap[Target]->ReserveArray[0].isImage == true)
	{
		MessageDataMap[Target]->IsFirsNotice = true;
		if (MessageWidget)
		{
			if (MessageWidget->CurrentMessageTarget == Target)
			{
				MessageWidget->SetImageSelectButton();
			}
		}
		GetWorld()->GetTimerManager().ClearTimer(MessageDataMap[Target]->TimerHandle);
		return;
	}

	if (MessageDataMap[Target]->ReserveArray[0].isMyMessage == true)
	{
		MessageDataMap[Target]->IsFirsNotice = true;
		if (MessageWidget)
		{
			if (MessageWidget->CurrentMessageTarget == Target)
			{
				FText Choice1 = MessageDataMap[Target]->ReserveArray[0].Choice1;
				FText Choice2 = MessageDataMap[Target]->ReserveArray[0].Choice2;
				FText Choice3 = MessageDataMap[Target]->ReserveArray[0].Choice3;

				switch (MessageDataMap[Target]->ReserveArray[0].choicenum)
				{
				case 1:
					MessageWidget->SetOneChoiceBox(Choice1);
					break;
				case 2:
					MessageWidget->SetTwoChoiceBox(Choice1, Choice2);
					break;
				case 3:
					MessageWidget->SetThreeChoiceBox(Choice1, Choice2, Choice3);
					break;
				}
			}
		}
		GetWorld()->GetTimerManager().ClearTimer(MessageDataMap[Target]->TimerHandle);
		return;
	}
	if (MessageDataMap[Target]->ReserveArray[0].isStoryLine)
	{
		UStorySubsystem* storysubsystem = UGameInstance::GetSubsystem<UStorySubsystem>(GetWorld()->GetGameInstance());

		storysubsystem->ClearCurrentQuest();
	}
	if (MessageDataMap[Target]->ReserveArray[0].isMoney)
	{
		// 캐릭터 돈주기
		USkillSubsystem* SkillSubsystem = UGameInstance::GetSubsystem<USkillSubsystem>(GetWorld()->GetGameInstance());
		SkillSubsystem->AddSkillPoint(MessageDataMap[Target]->ReserveArray[0].Money);
		MessageDataMap[Target]->ReserveArray.RemoveAt(0);
	}

	AddNewMessageOnWidget(Target, MessageDataMap[Target]->ReserveArray[0].Text);
	MessageDataMap[Target]->ReserveArray.RemoveAt(0);
}

// ------------------상대에게 보내는 메시지 예약 추가 ---------------------------
void UMessageSubsystem::AddMessageReserve(FString Target, FText Message, bool isStoryLine)
{
	if (MessageDataMap[Target]->ReserveArray.IsEmpty())
	{
		GetWorld()->GetTimerManager().ClearTimer(MessageDataMap[Target]->TimerHandle);
		return;
	}

	MessageDataMap[Target]->ReserveArray.Add(FReserveMessageContent(false, Message, isStoryLine));
}

void UMessageSubsystem::AddMessageForNewPersonReserve(FString Target, FText Name, FText Message)
{
	AddNewPerson(Target, Name);

	MessageDataMap[Target]->ReserveArray.Add(FReserveMessageContent(false, Message));
}
// ------------------내 선택지 1개 예약추가---------------------------
void UMessageSubsystem::AddOneMyChoiceReserve(FString Target, FText Choice1)
{
	if (MessageDataMap[Target]->ReserveArray.IsEmpty())
	{
		GetWorld()->GetTimerManager().ClearTimer(MessageDataMap[Target]->TimerHandle);
		return;
	}

	MessageDataMap[Target]->ReserveArray.Add(FReserveMessageContent(true, Choice1));
}

void UMessageSubsystem::AddOneMyChoiceForNewPersonReserve(FString Target, FText Name, FText Choice1)
{
	AddNewPerson(Target, Name);
	MessageDataMap[Target]->ReserveArray.Add(FReserveMessageContent(true, Choice1));
}
// ------------------내 선택지 2개 예약추가---------------------------
void UMessageSubsystem::AddTwoMyChoiceReserve(FString Target, FText Choice1, FText Choice2)
{
	if (MessageDataMap[Target]->ReserveArray.IsEmpty())
	{
		GetWorld()->GetTimerManager().ClearTimer(MessageDataMap[Target]->TimerHandle);
		return;
	}

	MessageDataMap[Target]->ReserveArray.Add(FReserveMessageContent(Choice1, Choice2));
}

void UMessageSubsystem::AddTwoMyChoiceForNewPersonReserve(FString Target, FText Name, FText Choice1, FText Choice2)
{
	AddNewPerson(Target, Name);
	MessageDataMap[Target]->ReserveArray.Add(FReserveMessageContent(Choice1, Choice2));
}
// ------------------내 선택지 3개 예약추가---------------------------
void UMessageSubsystem::AddThreeMyChoiceReserve(FString Target, FText Choice1, FText Choice2, FText Choice3)
{
	if (MessageDataMap[Target]->ReserveArray.IsEmpty())
	{
		GetWorld()->GetTimerManager().ClearTimer(MessageDataMap[Target]->TimerHandle);
		return;
	}

	MessageDataMap[Target]->ReserveArray.Add(FReserveMessageContent(Choice1, Choice2, Choice3));
}

void UMessageSubsystem::AddThreeMyChoiceForNewPersonReserve(FString Target, FText Name, FText Choice1, FText Choice2, FText Choice3)
{
	AddNewPerson(Target, Name);
	MessageDataMap[Target]->ReserveArray.Add(FReserveMessageContent(Choice1, Choice2, Choice3));
}

void UMessageSubsystem::AddTextureChoiceReserve(FString Target, ESpecies Species)
{
	if (MessageDataMap[Target]->ReserveArray.IsEmpty())
	{
		GetWorld()->GetTimerManager().ClearTimer(MessageDataMap[Target]->TimerHandle);
		return;
	}

	MessageDataMap[Target]->ReserveArray.Add(FReserveMessageContent(false,true, Species));
}

void UMessageSubsystem::AddGiveMoneyReserve(FString Target, int32 Money)
{
	if (MessageDataMap[Target]->ReserveArray.IsEmpty())
	{
		GetWorld()->GetTimerManager().ClearTimer(MessageDataMap[Target]->TimerHandle);
		return;
	}

	MessageDataMap[Target]->ReserveArray.Add(FReserveMessageContent(Money));
}

void UMessageSubsystem::ResetSubsystemData()
{
	MessageDataMap.Empty();
	MessageWidget = nullptr;
	Character = nullptr;
}