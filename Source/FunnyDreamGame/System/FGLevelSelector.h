// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "FGLevelSelector.generated.h"
class UBoxComponent;

UCLASS()
class FUNNYDREAMGAME_API AFGLevelSelector : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFGLevelSelector();
	UFUNCTION(BlueprintCallable)
	void ChangeLevel();
	UPROPERTY(EditAnywhere)
	FName NewLevel;
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* Trigger;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
