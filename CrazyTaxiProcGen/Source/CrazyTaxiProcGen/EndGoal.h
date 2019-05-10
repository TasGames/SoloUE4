// Thomas Arthur Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "EndGoal.generated.h"

UCLASS()
class CRAZYTAXIPROCGEN_API AEndGoal : public AActor
{
	GENERATED_BODY()

	//Trigger Component
	UPROPERTY(EditAnywhere)
	UBoxComponent* CollisionComponent;

	//Mesh
	UPROPERTY(VisibleDefaultsOnly)
	class UStaticMeshComponent* Mesh;
	
public:	
	// Sets default values for this actor's properties
	AEndGoal();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector SpawnLoctaion;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	void Win();
};
