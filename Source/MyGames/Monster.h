// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Monster.generated.h"

UCLASS()
class MYGAMES_API AMonster : public AActor
{
	GENERATED_BODY()
	
public:	
	enum class MonsterAnimarion {
		Idle,
		Attack,
		Die,
		Walk,
		MAX
	};

	// Sets default values for this actor's properties
	AMonster();
	AMonster(int regenPosition, int monsterWorkingAround, float damage , float defense);

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	int RegenPosition; // 몬스터 리젠 위치
	int MonsterWarkingAround; // 돌아다니는 반경 반지름
	int AttackDistance; // 공격범위를 위한 공격 거리
	float DamageValue; // 몬스터의 공격 당 데미지
	float DefenseValue; // 몬스터의 방어력.
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void PlayAnimation(MonsterAnimarion anim);
	virtual void Attack();
	void AI(); // 몬스터가 유저가 없으면 주위를 돌아다니고 유저를 발견하면 가까이 가는것.
	void Die(); // 몬스터가 죽음.

	
	
};
