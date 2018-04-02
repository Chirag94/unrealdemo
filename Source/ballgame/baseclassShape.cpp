// Fill out your copyright notice in the Description page of Project Settings.

#include "baseclassShape.h"


// Sets default values
AbaseclassShape::AbaseclassShape()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AbaseclassShape::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AbaseclassShape::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AbaseclassShape::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//Step 1: Implement the CalculateHealth function.
void AbaseclassShape::CalculateHealth(float Delta)
{
    Health += Delta;
    CalculateDead();
}

//Step 2: Implement the CalculateDead function.
void AbaseclassShape::CalculateDead()
{
    if (Health <= 0)
        isDead = true;
    else
        isDead = false;
    
}
#if WITH_EDITOR
//Step 3: Implement the remainder of our helper code, used by the editor when we change values.
void AbaseclassShape::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    isDead = false;
    Health = 100;
    
    Super::PostEditChangeProperty(PropertyChangedEvent);
    
    CalculateDead();
}
#endif

