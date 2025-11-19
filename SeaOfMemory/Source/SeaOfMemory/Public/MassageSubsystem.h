// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SOMGameDataBase.h"
#include "MassageSubsystem.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FMessageContent
{
	GENERATED_BODY()
public:
	FMessageContent() : Text(), isMyMessage(true), isChecked(false){};
	FMessageContent(FText text, bool b) : Text(text), isMyMessage(b), isChecked(false) {};
	FMessageContent(FText text, bool b, bool b2) : Text(text), isMyMessage(b), isChecked(b2) {};
	FMessageContent(UTexture2D* texture) : Texture(texture), isImage(true), isMyMessage(true), isChecked(true) {};
	FText Text;
	bool isMyMessage;
	bool isChecked;

	bool isImage = false;

	UTexture2D* Texture;
private:
};

USTRUCT(BlueprintType)
struct FReserveMessageContent
{
	GENERATED_BODY()
public:


	FReserveMessageContent() {};
	FReserveMessageContent(bool ismine, FText text) : Text(text), Choice1(text), Choice2(), Choice3(), isMyMessage(ismine), choicenum(1){};
	FReserveMessageContent(bool ismine, FText text, bool isstoryline) : Text(text), Choice1(text), Choice2(), Choice3(), isMyMessage(ismine), choicenum(1), isStoryLine(isstoryline){}; 
	FReserveMessageContent(FText text1, FText text2) :Text(), Choice1(text1), Choice2(text2), Choice3(), isMyMessage(true), choicenum(2) {};
	FReserveMessageContent(FText text1, FText text2, FText text3) : Text(), Choice1(text1), Choice2(text2), Choice3(text3), isMyMessage(true), choicenum(3) {};
	FReserveMessageContent(bool ismine,  bool isimage, ESpecies species) : Text(), Choice1(), Choice2(), Choice3(), isMyMessage(ismine), choicenum(1), isStoryLine(), isImage(isimage), Species(species){};
	FReserveMessageContent(float money): Money(money), isMoney(true){};

	FText Text;
	FText Choice1;
	FText Choice2;
	FText Choice3;

	bool isMyMessage;
	int32 choicenum;

	bool isStoryLine = false;

	bool isImage = false;

	bool isMoney = false;

	int32 Money;

	ESpecies Species;
private:
};

UCLASS()
class UMessageData : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	FText Name;

	UPROPERTY()
	TArray<FMessageContent> MessageArray;
	UPROPERTY()
	TArray<FReserveMessageContent> ReserveArray;

	UPROPERTY()
	FTimerHandle TimerHandle;

	UPROPERTY()
	bool IsFirsNotice = true;


private:
};

UCLASS()
class SEAOFMEMORY_API UMessageSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	UMessageSubsystem();

	UPROPERTY()
	TMap<FString, UMessageData*> MessageDataMap;
	UFUNCTION(BlueprintCallable)
	void ResetSubsystemData();

	/*
	* 새로운 대화 상대를 추가
	* 추가방법 예시
	FText text = NSLOCTEXT("Korean", "Korean", "송경윤");
	MessageSubsystem->AddNewPerson("sky", text);
	*/
	UFUNCTION(BlueprintCallable)
	bool AddNewPerson(FString Target, FText name);

	UFUNCTION(BlueprintCallable)
	bool AddNewMessage(FString Target, FText Message, bool isMyMessage = false, bool isChecked = false);

	UFUNCTION(BlueprintCallable)
	bool AddNewImage(FString Target, UTexture2D* texture);

	UFUNCTION(BlueprintCallable)
	void AddNewMessageOnWidget(FString Target, FText Message);
	UFUNCTION(BlueprintCallable)
	void AddNewMessageForNewPersonOnWidget(FString Target, FText Name, FText Message);
	UPROPERTY()
	float MessageIntervel = 3.0f;

	UPROPERTY()
	class UMesageWidget* MessageWidget;

	UPROPERTY()
	class ASOMBaseCharacter* Character;

	UFUNCTION(BlueprintCallable)
	void StartTimer(FString Target, float Delay = 1.0f);

	UFUNCTION(BlueprintCallable)
	void TimerFunction(FString Target);

	UPROPERTY()
	FTimerHandle TimerHandle;

	UFUNCTION(BlueprintCallable)
	void AddMessageReserve(FString Target, FText Message, bool isStoryLine = false);
	UFUNCTION(BlueprintCallable)
	void AddMessageForNewPersonReserve(FString Target, FText Name, FText Message);

	UFUNCTION(BlueprintCallable)
	void AddOneMyChoiceReserve(FString Target, FText Choice1);
	UFUNCTION(BlueprintCallable)
	void AddOneMyChoiceForNewPersonReserve(FString Target, FText Name, FText Choice1);

	UFUNCTION(BlueprintCallable)
	void AddTwoMyChoiceReserve(FString Target, FText Choice1, FText Choice2);
	UFUNCTION(BlueprintCallable)
	void AddTwoMyChoiceForNewPersonReserve(FString Target, FText Name, FText Choice1, FText Choice2);

	UFUNCTION(BlueprintCallable)
	void AddThreeMyChoiceReserve(FString Target, FText Choice1, FText Choice2, FText Choice3);
	UFUNCTION(BlueprintCallable)
	void AddThreeMyChoiceForNewPersonReserve(FString Target, FText Name, FText Choice1, FText Choice2, FText Choice3);

	UFUNCTION(BlueprintCallable)
	void AddTextureChoiceReserve(FString Target, ESpecies Species);

	UFUNCTION(BlueprintCallable)
	void AddGiveMoneyReserve(FString Target, int32 Money);
private:

};
