// Thomas Arthur Simon

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehicle.h"
#include "PlayerCar.generated.h"

UCLASS()
class CRAZYTAXIPROCGEN_API APlayerCar : public AWheeledVehicle
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* SpringArm;
	
protected:

	virtual void BeginPlay() override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:

	APlayerCar();

	virtual void Tick(float DeltaTime) override;

	void MoveForward(float Val);
	void MoveRight(float Val);
	void OnHandbrakePressed();
	void OnHandbrakeReleased();
	
};
