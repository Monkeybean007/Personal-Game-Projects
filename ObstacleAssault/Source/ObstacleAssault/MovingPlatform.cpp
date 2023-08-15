// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	
	
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	

	//moves platform forward
		//Gets current location
	FVector CurrentLocation = GetActorLocation();
		//Add Vector to the location
	CurrentLocation = CurrentLocation + PlatformVelocity * DeltaTime;
		//Set the location
	SetActorLocation(CurrentLocation);
	//Send platform back if gone too far
		//Check how far we moved
		//Reverse direction of motion if gone too far

}

