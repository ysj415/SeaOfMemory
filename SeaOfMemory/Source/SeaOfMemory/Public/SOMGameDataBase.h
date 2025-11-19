// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

//---------------------------------스킬---------------------------------
#define AQUAJET_SKILLNAME "수중 스쿠터"
#define AQUAJET_COST 100
#define AQUAJET_COOLTIME 10.0
#define AQUAJET_DURATION 5.0
#define AQUAJET_VALUE 100.0
#define AQUAJET_EXPLAIN "캐릭터가 전방을 향해 잠시동안 빠르게 이동합니다."

#define USE_AQUAJET_ON_GROUND_EXPLAIN "지상에서는 해당 스킬을 사용할 수 없습니다."

#define ACTIVECAMOUFLAGE_SKILLNAME "광학 위장"
#define ACTIVECAMOUFLAGE_COST 150
#define ACTIVECAMOUFLAGE_COOLTIME 15.0
#define ACTIVECAMOUFLAGE_DURATION 5.0
#define ACTIVECAMOUFLAGE_EXPLAIN "캐릭터가 잠시동안 은신 상태가 되며, 물고기이 인식할 수 없게 됩니다."

#define RESIDUALBAIT_SKILLNAME "잔류형 미끼"
#define RESIDUALBAIT_COST 200
#define RESIDUALBAIT_COOLTIME 15.0
#define RESIDUALBAIT_DURATION 7.0
#define RESIDUALBAIT_EXPLAIN "잠시동안 유지되는 미끼를 뿌려 주변 물고기들을 유인합니다."

#define REPELLENT_SKILLNAME "상어 퇴치제"
#define REPELLENT_COST 300
#define REPELLENT_COOLTIME 15.0
#define REPELLENT_DURATION 4.0
#define REPELLENT_EXPLAIN "잠시동안 유지되는 퇴치제를 뿌려 상어가 다가오지 못하도록 합니다."

#define A_SKILLNAME "공기탱크"
#define A_COST 100
#define A_EXPLAIN "공기탱크를 장착해 숨을 더 오래쉬게 합니다. 'N'을 눌러 산소통의 잔량을 채크할 수 있습니다."

#define B_SKILLNAME "오리발 개선"
#define B_COST 100
#define B_EXPLAIN "속도를 늘립니다."

#define C_SKILLNAME "폐 강화"
#define C_COST 100
#define C_EXPLAIN "폐의 총량을 늘립니다."

UENUM(BlueprintType)
enum class SkillName : uint8
{
	Null UMETA(DisplayName = "Null"),
	AquaJet UMETA(DisplayName = "AquaJet"),
	ActiveCamouflage UMETA(DisplayName = "ActiveCamouflage"),
	ResidualBait UMETA(DisplayName = "ResidualBait"),
	Repellent UMETA(DisplayName = "Repellent"),
	Tank UMETA(DisplayName = "Tank"),
	Speed UMETA(DisplayName = "Speed"),
	Breath UMETA(DisplayName = "Breath")

};

//---------------------------------도감---------------------------------
#define ANCHOVY_NAME "멸치"
#define ANCHOVY_EXPLAIN "멸치(Anchovy)  \n청어목 멸칫과의 바닷물고기 \n바닷물고기에서 개체수가 굉장히 많고 어획량이 가장 많은 어류이며 수많은 해양생물들의 생태지표가 되기도 한다. 바다의 먹이사슬에서 최하위지만 그만큼 바다생태계에서 중요한 물고기이기 때문에 멸치의 개체수가 잘 보존될수록 건강한 바다라고 얘기를 할 수가 있기 때문이다."

#define BLUETANG1_NAME "보라양쥐돔"
#define BLUETANG1_EXPLAIN "보라양쥐돔(Purple tang)\n양쥐돔목 양쥐돔과에 속하는 바다 어류의 일종\n주로 홍해에 서식하며, 홍해를 대표하는 어종으로 꼽힌다. 가까운 친척들처럼 보라양쥐돔은 작은 입으로 조류 따위를 쪼아 먹고 산다."

#define BLUETANG2_NAME "남양쥐돔"
#define BLUETANG2_EXPLAIN "남양쥐돔(Blue tang)\n양쥐돔목 양쥐돔과에 속하는 바다 어류의 일종\n색상이 매우 선명한 푸른 빛일 뿐만 아니라 몸에 활 모양의 무늬가 있고 꼬리지느러미는 연노랑색, 등지느러미의 극조 색상은 자홍색으로 해수 관상어 중에서도 가장 화려한 색상을 자랑한다."

#define BUTTERFLYFISH1_NAME "가시나비고기"
#define BUTTERFLYFISH1_EXPLAIN "가시나비고기(Threadfin butterflyfish)\n나비고기목 나비고기과의 한 종\n납작한 체형을 지니고 있고 체고가 매우 높고 종에 따른 차이는 있으나 대체로 주둥이가 돌출되어 있다. 또한 안점(eyespot)이라고 불리는 눈 모양의 무늬가 몸에 나타나는 경우가 많다."

#define BUTTERFLYFISH2_NAME "두동가리돔"
#define BUTTERFLYFISH2_EXPLAIN "두동가리돔(Pennant coralfis)\n양쥐돔목 나비고기과 어류\n몸은 마름모꼴로 하얀 몸에는 두 개의 커다란 줄무늬가 나있다. 눈은 검은색 줄무늬로 감싸져있다. 가장 큰 특징으로는 등지느러미의 네 번째 극조가 매우 길게 뒤로 뻗어있다."

#define CLAM_NAME "조개"
#define CLAM_EXPLAIN ""

#define CLOWNFISH_NAME "흰동가리"
#define CLOWNFISH_EXPLAIN "몸은 긴 타원형이고 옆으로 납작하며 몸높이가 높다. 아래턱은 위턱보다 튀어나와 있다. 등지느러미가시는 연조부보다 낮거나 길이가 같다. 꼬리지느러미 가장자리는 움푹 들어갔거나 반달 모양이다. "

#define COLORTETRA_NAME "컬러테트라"
#define COLORTETRA_EXPLAIN "컬러테트라(Color Tetra)\n카라신과에 속하는 열대어\n칼라테트라는 블랙테트라를 염색해 만든 개량종인데, 색이 영구히 가는 것이 아니라 3개월에서 6개월정도 지나면 색에 서서히 옅어진다."

#define FIREFISH_NAME "파이어고비"
#define FIREFISH_EXPLAIN "파이어고비(Fire Goby)\n농어목 청황문절과\n 바닥에서 위로 떠서 강한 조류와 맞서 헤엄치면서 떠내려오는 작은 무척추동물 플랑크톤을 잡아먹는다. 머리가 밝은 노랑색이며 뒤쪽으로 하얘지다가 꼬리지느러미까지 가면서 적황색으로 변한다. "

#define SHARK_NAME "상어"
#define SHARK_EXPLAIN "상어(Shark)\n상어상목에 속한 어류\n"

#define SKATE_NAME "홍어"
#define SKATE_EXPLAIN ""

#define SUNFISH_NAME "개복치"
#define SUNFISH_EXPLAIN ""

#define TURTLE_NAME "거북이"
#define TURTLE_EXPLAIN ""

#define WHALE_NAME "고래"
#define WHALE_EXPLAIN ""

//#define EMPTY_IMAGE "/Script/Engine.Texture2D'/Game/MyMenuImage/EmptyImage.EmptyImage'"
#define EMPTY_IMAGE "/Game/MyMenuImage/EmptyImage.EmptyImage"

#define EMPTY_EXPLAIN "미해금"

//---------------캐릭터 수치-------------------
#define MAX_HP 100.f
#define MIN_HP 0.f

#define MAX_OXYGEN 100.f
#define MIN_OXYGEN 0.f

#define MAX_OXYGENTANK 450.f
#define MIN_OXYGENTANK 0.f

#define MAX_OXYGENTANKANGLE 140.f
#define MIN_OXYGENTANKANGLE -130.f
#define OXYGENTANKANGLE_SHAKE 1.5f

#define OXYGENTANK_DECREASE 1.025f
#define OXYGEN_DECREASE 0.22f
#define OXYGEN_RECOVERY 1.0f

#define Max_BreathBlurValue 4.0f

#define Character_Basic_MaxSwimSpeed 300.f
#define Character_AquaJet_MaxSwimSpeed 1500.f
#define Character_FastSwim_MaxSwimSpeed 600.f

//---------------카메라 수치-------------------
#define INCREASE_FOCALLENGTH 0.1f

#define MAX_FOCALPOINTER 315.f
#define MIN_FOCALPOINTER -315.f

#define FarPlane_Distance 1000.f

UENUM(BlueprintType)
enum class ESpecies : uint8
{
	Null UMETA(DisplayName = "Null"),
	Anchovy UMETA(DisplayName = "Anchovy"),
	Bluetang1 UMETA(DisplayName = "Bluetang1"),
	Bluetang2 UMETA(DisplayName = "Bluetang2"),
	ButterflyFish1 UMETA(DisplayName = "ButterflyFish1"),
	ButterflyFish2 UMETA(DisplayName = "ButterflyFish2"),
	Clam UMETA(DisplayName = "Clam"),
	Clownfish UMETA(DisplayName = "Clownfish"),
	Colortetra UMETA(DisplayName = "Colortetra"),
	Firefish UMETA(DisplayName = "Firefish"),
	Shark UMETA(DisplayName = "Shark"),
	Skate UMETA(DisplayName = "Skate"),
	Sunfish UMETA(DisplayName = "Sunfish"),
	Turtle UMETA(DisplayName = "Turtle"),
	Whale UMETA(DisplayName = "Whale"),
	Character UMETA(DisplayName = "Character"),
	Bait UMETA(DisplayName = "Bait"),
	Repellent UMETA(DisplayName = "Repellent")
};

UENUM(BlueprintType)
enum class Place : uint8
{
	Start UMETA(DisplayName = "Start"),
	Ship UMETA(DisplayName = "Ship"),
	PlayGround UMETA(DisplayName = "PlayGround"),
};

