// Thomas Arthur Simon

#include "EndGoal.h"
#include "PlayerCharacter.h"

// Sets default values
AEndGoal::AEndGoal()
{
	CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
	RootComponent = CollisionComponent;
	CollisionComponent->SetCollisionProfileName(TEXT("OverlapAll"));
	CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &AEndGoal::OnBeginOverlap);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FloorMesh"));
	Mesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AEndGoal::BeginPlay()
{
	Super::BeginPlay();

	SetActorLocation(SpawnLoctaion);
	
}

void AEndGoal::OnBeginOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor != this)
	{
		APlayerCharacter *P = Cast<APlayerCharacter>(OtherActor);
		if (P != NULL)
		{
			Win();
		}
	}
}

void AEndGoal::Win()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "Win");
}


