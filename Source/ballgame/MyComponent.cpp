// Fill out your copyright notice in the Description page of Project Settings.

#include "MyComponent.h"


// Sets default values for this component's properties
UMyComponent::UMyComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}
// color property
    UProperty(BlueprintReadWrite,EditAnywhere,category="MyComponent")
    string Color="RED";

// change color property
    UFUNCTION(BlueprintCallable,category="MyComponent")
    virtual void changeColor(string color);

void UMyComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMyComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

