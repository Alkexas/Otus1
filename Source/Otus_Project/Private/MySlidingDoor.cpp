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
    	
    //ClosedPosition = GetActorLocation();
    //bIsOpen = false;
    //DoorDistance= 100.0f;
    
   	
}

void AMySlidingDoor::BeginPlay()
{
    Super::BeginPlay();
    
    ClosedPosition = GetActorLocation();
    OpenPosition = ClosedPosition + GetActorForwardVector() * DoorDistance;

    if (DoorCurveFloat)
    {
        FOnTimelineFloat TimelineProgress;
        TimelineProgress.BindUFunction(this, FName("UpdateDoorPosition"));
        Timeline.AddInterpFloat(DoorCurveFloat, TimelineProgress);
        Timeline.SetLooping(false);
    }
    
    
}

void AMySlidingDoor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    Timeline.TickTimeline(DeltaTime);
}

void AMySlidingDoor::UpdateDoorPosition(float Value)
{
    FVector NewPosition = FMath::Lerp(ClosedPosition, OpenPosition, Value);
    DoorMesh->SetWorldLocation(NewPosition);

}

void AMySlidingDoor::OpenDoor()
{

    if (bIsDoorClosed && DoorCurveFloat)
    {
        Timeline.Play();
        bIsDoorClosed = false;
        
    }
    
}

void AMySlidingDoor::CloseDoor()
{
    if (!bIsDoorClosed && DoorCurveFloat)
    {
        Timeline.Reverse();
        bIsDoorClosed = true;
        
    }
    
}




