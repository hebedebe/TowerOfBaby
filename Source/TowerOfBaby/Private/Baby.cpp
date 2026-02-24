// Fill out your copyright notice in the Description page of Project Settings.


#include "TowerOfBaby/Public/Baby.h"

#include "Engine/SkeletalMeshSocket.h"
#include "Misc/MapErrors.h"


// Sets default values
ABaby::ABaby()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName("Body"));
}

// Called when the game starts or when spawned
void ABaby::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABaby::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

