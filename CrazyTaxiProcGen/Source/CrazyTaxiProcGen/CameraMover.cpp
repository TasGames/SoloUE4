// Thomas Arthur Simon

#include "CameraMover.h"
#include "Camera/CameraComponent.h"

// Sets default values
ACameraMover::ACameraMover()
{
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(RootComponent);

	Rotation = FRotator(0.0f, 0.0f, 270.0f);
}

// Called when the game starts or when spawned
void ACameraMover::BeginPlay()
{
	Super::BeginPlay();
	
	GetWorldTimerManager().SetTimer(MemberTimerHandle, this, &ACameraMover::RepeatingFunction, 1.0f, true);
}

void ACameraMover::RepeatingFunction()
{
	Rotation.Roll += 1;
	Rotation.Pitch = 270;
	SetActorRotation(Rotation);
}

