// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "MySlidingDoor.generated.h"

UCLASS()
class OTUS_PROJECT_API AMySlidingDoor : public AActor
{
	GENERATED_BODY()
	
public:    
	AMySlidingDoor();

protected:
	virtual void BeginPlay() override;

public:    
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Door")
	void OpenDoor();

	UFUNCTION(BlueprintCallable, Category = "Door")
	void CloseDoor();

private:

	UPROPERTY(EditAnywhere)
	USceneComponent* DefaultSceneComponent;
	
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* DoorMesh;

	UPROPERTY(EditAnywhere)
	UBoxComponent* BoxCollision;

	UPROPERTY(EditAnywhere)
	FVector OpenPosition;

	UPROPERTY(EditAnywhere)
	FVector ClosedPosition;

	UPROPERTY(EditAnywhere)
	float DoorSpeed;

	UPROPERTY(EditAnywhere)
	float DoorDistance;

	bool bIsOpen;
};