// Thomas Arthur Simon

#include "MazeGenerator.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Core/Public/GenericPlatform/GenericPlatformMath.h"

// Sets default values
AMazeGenerator::AMazeGenerator()
{
	MazeMesh = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("MazeMesh"));
	MazeMesh->SetupAttachment(RootComponent);

	TileSize = 800;
}

// Called when the game starts or when spawned
void AMazeGenerator::BeginPlay()
{
	Super::BeginPlay();
	

}

void AMazeGenerator::Construction()
{
	PopulateBoarder(BoarderTiles);
}

void AMazeGenerator::PopulateBoarder(TArray<int> BoarderArray)
{
	for (int i = 0; i < Size; i++)
	{
		int Temp = i;
		BoarderArray.Add(Temp);
	}

	for (int i = 1; i < Size - 1; i++)
	{
		int Temp = (Size * i) + (Size - 1);
		BoarderArray.Add(Temp);
	}

	for (int i = 1; i < Size + 1; i++)
	{
		int Temp = ((Size - 1) * Size) + (i - 1);
		BoarderArray.Add(Temp);
	}

	for (int i = 1; i < Size -1; i++)
	{
		int Temp = Size * i;
		BoarderArray.Add(Temp);
	}

	MazeMesh->ClearInstances();

	if (ShowBoarder == true)
	{
		for (int i = 0; i < BoarderArray.Num(); i++)
		{
			float Value = BoarderArray[i];
			float ToGrid = Value / Size;
			FGenericPlatformMath PlatformMath;
			float X = PlatformMath.Frac(ToGrid) * Size;
			float Y = PlatformMath.FloorToFloat(ToGrid);

			FVector Location = FVector(TileSize * X, TileSize * Y, 0.0f);
			FTransform MeshTransform;
			MeshTransform.SetLocation(Location);
			MeshTransform.SetScale3D(FVector(8.0f, 8.0f, 16.0f));
			MazeMesh->AddInstance(MeshTransform);

			//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "Ran");
		}
	}

}

