// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownCharacter.h"

// Sets default values
ATopDownCharacter::ATopDownCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATopDownCharacter::BeginPlay()
{
	Super::BeginPlay();

	check(GEngine != nullptr);

	//Display a debug message for five seconeds
	// the -1 "Key" value argument prevents the message from being updated or refreshed
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("We are using TopDownCharacter!"));	
}

// Called every frame
void ATopDownCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ATopDownCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

