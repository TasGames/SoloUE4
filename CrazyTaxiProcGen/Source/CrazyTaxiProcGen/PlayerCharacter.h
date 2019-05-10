// Thomas Arthur Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class CRAZYTAXIPROCGEN_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

	//First Person Camera
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FirstPersonCameraComponent;

	//Player Mesh
	UPROPERTY(VisibleAnywhere, Category = Mesh)
	class UStaticMeshComponent* PlayerMesh;

public:
	// Sets default values for this character's properties
	APlayerCharacter();

	UFUNCTION(BlueprintCallable)
	void PauseIt();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool IsPaused;

	bool GameOver;

protected:

	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite)
	int Micro;

	UPROPERTY(BlueprintReadWrite)
	int Seconds;

	UPROPERTY(BlueprintReadWrite)
	int Minutes;

	UPROPERTY(EditAnywhere, Category = Maze)
	bool IsFirstPerson;

	struct FTimerHandle MemberTimerHandle;

	void RepeatingFunction();

	void MoveVer(float Val);
	void MoveHor(float Val);

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
