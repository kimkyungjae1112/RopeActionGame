// Fill out your copyright notice in the Description page of Project Settings.


#include "Prop/RopeActor.h"
#include "CableComponent.h"

// Sets default values
ARopeActor::ARopeActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CableComponent = CreateDefaultSubobject<UCableComponent>(TEXT("Cable Component"));
	RootComponent = CableComponent;

	CableComponent->CableLength = 1000.0f;
}

// Called when the game starts or when spawned
void ARopeActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARopeActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

