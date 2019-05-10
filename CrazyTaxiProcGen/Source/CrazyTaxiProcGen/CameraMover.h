// Thomas Arthur Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CameraMover.generated.h"

UCLASS()
class CRAZYTAXIPROCGEN_API ACameraMover : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* Camera;
	
public:	
	// Sets default values for this actor's properties
	ACameraMover();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void RepeatingFunction();

	struct FTimerHandle MemberTimerHandle;

	FRotator Rotation;
	
};
