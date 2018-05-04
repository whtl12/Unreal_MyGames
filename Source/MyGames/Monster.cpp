// Fill out your copyright notice in the Description page of Project Settings.

#include "Monster.h"

AMonster::AMonster()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}


// Sets default values
AMonster::AMonster(int regenPosition, int monsterWorkingAround, float damage, float defense)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMonster::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMonster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMonster::PlayAnimation(MonsterAnimarion anim)
{

}

void AMonster::Attack() 
{

}



void AMonster::AI()
{

}

void AMonster::Die()
{

}

