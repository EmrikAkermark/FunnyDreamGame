// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractableObject.h"
#include "LastCellPhone.generated.h"

/**
 * 
 */
UCLASS()
class FUNNYDREAMGAME_API ALastCellPhone : public AInteractableObject
{
	GENERATED_BODY()
	ALastCellPhone();
protected:
	virtual void Interact(UFGInteractionComponent* Interacter) override;
	virtual void BeginPlay() override;
};
