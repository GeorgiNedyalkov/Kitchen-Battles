// Fill out your copyright notice in the Description page of Project Settings.


#include "AOE_Base.h"

// Sets default values
AAOE_Base::AAOE_Base()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAOE_Base::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAOE_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

