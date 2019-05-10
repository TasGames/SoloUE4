// Thomas Arthur Simon

#include "PlayerCharacter.h"
#include "Camera/CameraComponent.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
	//Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(RootComponent);
	FirstPersonCameraComponent->RelativeLocation = FVector(-39.56f, 1.75f, 64.f);
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	//Create a mesh component 
	PlayerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Player"));
	PlayerMesh->SetupAttachment(RootComponent);

	GameOver = false;
	IsPaused = false;
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	GetWorldTimerManager().SetTimer(MemberTimerHandle, this, &APlayerCharacter::RepeatingFunction, 0.01f, true);
}

void APlayerCharacter::RepeatingFunction()
{
	if (GameOver == false)
	{
		Micro += 1;

		if (Micro >= 100)
		{
			Seconds += 1;
			Micro = 0;
		}

		if (Seconds >= 60)
		{
			Minutes += 1;
			Seconds = 0;
		}
	}
}

void APlayerCharacter::PauseIt()
{

}

void APlayerCharacter::MoveVer(float Val)
{
	if (Val != 0.0f)
		AddMovementInput(GetActorForwardVector(), Val);
}

void APlayerCharacter::MoveHor(float Val)
{
	if (Val != 0.0f)
		AddMovementInput(GetActorRightVector(), Val);
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Bind Movement
	PlayerInputComponent->BindAxis("MoveVer", this, &APlayerCharacter::MoveVer);
	PlayerInputComponent->BindAxis("MoveHor", this, &APlayerCharacter::MoveHor);

	//Bind Pause
	PlayerInputComponent->BindAction("Pause", IE_Pressed, this, &APlayerCharacter::PauseIt);

	if (IsFirstPerson == true)
	{
		//Bind Jump
		PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
		PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

		//Bind Rotation
		PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
		PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	}
}

