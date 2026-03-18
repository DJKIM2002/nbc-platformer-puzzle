// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/PGCharacter.h"

// Sets default values
APGCharacter::APGCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APGCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APGCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APGCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

