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
	int RegenPosition; // ���� ���� ��ġ
	int MonsterWarkingAround; // ���ƴٴϴ� �ݰ� ������
	int AttackDistance; // ���ݹ����� ���� ���� �Ÿ�
	float DamageValue; // ������ ���� �� ������
	float DefenseValue; // ������ ����.
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void PlayAnimation(MonsterAnimarion anim);
	virtual void Attack();
	void AI(); // ���Ͱ� ������ ������ ������ ���ƴٴϰ� ������ �߰��ϸ� ������ ���°�.
	void Die(); // ���Ͱ� ����.

	
	
};
