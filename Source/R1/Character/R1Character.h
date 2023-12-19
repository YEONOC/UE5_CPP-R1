// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "R1Character.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS()
class R1_API AR1Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AR1Character();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	//Camera,SpringArm 조정
	UPROPERTY(EditAnywhere, Category=Character)
	TObjectPtr<USpringArmComponent> SpringArm;

	UPROPERTY(EditAnywhere, Category = Character)
	TObjectPtr<UCameraComponent> Camera;
};
