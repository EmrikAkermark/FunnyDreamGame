// Fill out your copyright notice in the Description page of Project Settings.


#include "LastCellPhone.h"
#include "GameFramework/GameModeBase.h"
#include "FunnyDreamGame/Player/FGInteractionComponent.h"
#include "Kismet/GameplayStatics.h"

ALastCellPhone::ALastCellPhone() : Super()
{
	PrimaryActorTick.bCanEverTick = true;

	
}

void ALastCellPhone::Interact(UFGInteractionComponent* Interacter)
{
	Interacter->ToggleMovement(false);
	Interacter->bHasInteractable = true;
	Interacter->CurrentInteractable = this;
}

void ALastCellPhone::BeginPlay()
{
	Super::BeginPlay();


	AGameModeBase* gameMode = UGameplayStatics::GetGameMode(this);
}
