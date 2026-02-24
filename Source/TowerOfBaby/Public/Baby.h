// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Baby.generated.h"

UCLASS()
class TOWEROFBABY_API ABaby : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABaby();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	
public:
	UPROPERTY(BlueprintReadWrite)
	USkeletalMeshComponent* SkeletalMesh; 
};
