// Fill out your copyright notice in the Description page of Project Settings.

#include "Avatar.h"


// Sets default values
AAvatar::AAvatar()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	IsMouseEnable = false;
	//SpawnActor<Monster>(this, Instigator);
}

// Called when the game starts or when spawned
void AAvatar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAvatar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAvatar::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	InputComponent->BindAxis("MoveForward", this, &AAvatar::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &AAvatar::MoveRight);
	InputComponent->BindAxis("CameraMove",this,&AAvatar::CameraMove);
	InputComponent->BindAction("MouseOnOff", IE_Pressed, this, &AAvatar::MouseOnOff);
	//MouseOnOff

}



void AAvatar::MoveForward(float amount) 
{
	if (Controller && amount)
	{
		AddMovementInput(GetActorForwardVector(), amount);
	}
}

void AAvatar::MoveRight(float amount) 
{
	if (Controller && amount)
	{
		AddMovementInput(GetActorRightVector(), amount);
	}
}

void AAvatar::CameraMove(float amount)
{
	if (Controller && amount && !IsMouseEnable)
	{
		AddControllerYawInput(amount);
	}
}

void AAvatar::MouseOnOff()
{
	APlayerController* MyController = GetWorld()->GetFirstPlayerController();

	if (MyController) {
		IsMouseEnable = !IsMouseEnable;

		MyController->bShowMouseCursor = IsMouseEnable;
		MyController->bEnableClickEvents = IsMouseEnable;
		MyController->bEnableMouseOverEvents = IsMouseEnable;
		
	}
	


}
