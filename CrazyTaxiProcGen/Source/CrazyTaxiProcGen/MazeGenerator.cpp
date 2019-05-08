// Thomas Arthur Simon

#include "MazeGenerator.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Core/Public/GenericPlatform/GenericPlatformMath.h"

// Sets default values
AMazeGenerator::AMazeGenerator()
{
	MazeMesh = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("MazeMesh"));
	MazeMesh->SetupAttachment(RootComponent);

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TileSize = 800;
}

// Called when the game starts or when spawned
void AMazeGenerator::BeginPlay()
{
	Super::BeginPlay();
	

}

// Called every frame
void AMazeGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMazeGenerator::Construction()
{
	PopulateBoarder(Size, BoarderTiles);
}

void AMazeGenerator::PopulateBoarder(int Size, TArray<int> BoarderArray)
{
	int LSize = Size;

	for (int i = 0; i < LSize; i++)
	{
		int Temp = i;
		BoarderArray.Add(Temp);
	}

	for (int i = 1; i < LSize - 1; i++)
	{
		int Temp = (LSize * i) + (LSize - 1);
		BoarderArray.Add(Temp);
	}

	for (int i = 1; i < LSize + 1; i++)
	{
		int Temp = ((LSize - 1) * LSize) + (i - 1);
		BoarderArray.Add(Temp);
	}

	for (int i = 1; i < LSize -1; i++)
	{
		int Temp = LSize * i;
		BoarderArray.Add(Temp);
	}

	for (int i = 0; i < BoarderArray.Num(); i++)
	{
		float Value = BoarderArray[i];
		float Thing = Value / Size;
		FGenericPlatformMath Fraction;
		float X = Fraction.Frac(Thing) * Size;
		float Y = Fraction.FloorToFloat(Thing);

		float Final = TileSize * X;
		FVector Location = FVector(Final, TileSize * Y, 0.0f);
		FTransform MeshTransform;
		MeshTransform.SetLocation(Location);
		MeshTransform.SetScale3D(FVector(8.0f, 8.0f, 16.0f));
		MazeMesh->AddInstance(MeshTransform);

		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "Ran");
	}
}

