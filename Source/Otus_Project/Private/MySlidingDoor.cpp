// Fill out your copyright notice in the Description page of Project Settings.


#include "MySlidingDoor.h"

#include "VectorTypes.h"
#include "Components/BoxComponent.h"


AMySlidingDoor::AMySlidingDoor()
{
    PrimaryActorTick.bCanEverTick = true;
    DefaultSceneComponent = CreateDefaultSubobject<USceneComponent>("DefaultSceneComponent");
    RootComponent = DefaultSceneComponent;
    DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
    DoorMesh->SetupAttachment(DefaultSceneComponent);
    BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
    BoxCollision->SetupAttachment(DefaultSceneComponent);
	
	
    //ClosedPosition = GetActorLocation();
    //OpenPosition = ClosedPosition + FVector(100.0f, 0.0f, 0.0f); // Дистанция открытия
    DoorSpeed = 100.0f; // Скорость анимации
    bIsOpen = false;
    DoorDistance= 100.0f;
    
   

	
}

void AMySlidingDoor::BeginPlay()
{
    Super::BeginPlay();
    ClosedPosition = GetActorLocation();
    OpenPosition = ClosedPosition + GetActorForwardVector() * DoorDistance;
}

void AMySlidingDoor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (bIsOpen)
    {
        FVector CurrentLocation = GetActorLocation();
        FVector NewLocation = FMath::VInterpTo(CurrentLocation, OpenPosition, DeltaTime, DoorSpeed);
        DoorMesh->SetWorldLocation(NewLocation);

        if (FVector::Dist(NewLocation, OpenPosition) < 1.0f)
        {
            bIsOpen = true;
        }
    }
    else
    {
        FVector CurrentLocation = GetActorLocation();
        FVector NewLocation = FMath::VInterpTo(CurrentLocation, ClosedPosition, DeltaTime, DoorSpeed);
        DoorMesh->SetWorldLocation(NewLocation);

        if (FVector::Dist(NewLocation, ClosedPosition) < 1.0f)
        {
            bIsOpen = false;
        }
    }
}

void AMySlidingDoor::OpenDoor()
{
    bIsOpen = true;
}

void AMySlidingDoor::CloseDoor()
{
    bIsOpen = false;
}