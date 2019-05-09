// Thomas Arthur Simon

#include "MazeGenerator.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Core/Public/GenericPlatform/GenericPlatformMath.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
AMazeGenerator::AMazeGenerator()
{
	MazeMesh = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("MazeMesh"));
	MazeMesh->SetupAttachment(RootComponent);

	CurrentFreeSide = true;
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
	SetInitialTile();

	while (CurrentFreeSide == true)
	{
		PickNearbyTile();
	}

	CheckedTiles.Add(CurrentTile);


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

void AMazeGenerator::SetInitialTile()
{
	CurrentTile = Size + 1;
	PathTiles.Add(CurrentTile);
}

void AMazeGenerator::AddBridgePathTile(int PathTile, int BridgeTile)
{
	PathTiles.Add(PathTile);
	CurrentTile = PathTile;
	BridgeTiles.Add((BridgeTile));
}

void AMazeGenerator::PickNearbyTile()
{
	CycleCount = 0;

	UKismetMathLibrary MathLibray;
	int SwitchVal = MathLibray.RandomIntegerInRangeFromStream(0, 3, InitialSeed);

	switch (SwitchVal)
	{
		case 0:
			North();
			break;
		case 1:
			East();
			break;
		case 2:
			South();
			break;
		case 3:
			West();
			break;
	}
}

void AMazeGenerator::BackTrack()
{

}

void AMazeGenerator::North()
{
	int PathSizeDir = Size * 2;
	int PathTile = CurrentTile - PathSizeDir;

	int BridgeSizeDir = Size * 1;
	int BridgeTile = CurrentTile - BridgeSizeDir;

	bool TileInArrays;

	if (CheckTileArrays(PathTile) == true || CheckTileArrays(BridgeTile) == true)
		TileInArrays = true;
	else
		TileInArrays = false;

	if (TileInArrays == true)
	{
		bool EndCycle = false;

		if (CycleCount < MaxCycle)
		{
			CycleCount += 1;
			EndCycle = false;
		}
		else
			EndCycle = true;

		if (EndCycle == false)
			South();
		else
			CurrentFreeSide = false;
	}
	else
		AddBridgePathTile(PathTile, BridgeTile);
}

void AMazeGenerator::East()
{
	int PathTile = CurrentTile + 2;

	int BridgeTile = CurrentTile + 1;

	bool TileInArrays;

	if (CheckTileArrays(PathTile) == true || CheckTileArrays(BridgeTile) == true)
		TileInArrays = true;
	else
		TileInArrays = false;

	if (TileInArrays == true)
	{
		bool EndCycle = false;

		if (CycleCount < MaxCycle)
		{
			CycleCount += 1;
			EndCycle = false;
		}
		else
			EndCycle = true;

		if (EndCycle == false)
			West();
		else
			CurrentFreeSide = false;
	}
	else
		AddBridgePathTile(PathTile, BridgeTile);
}

void AMazeGenerator::South()
{
	int PathSizeDir = Size * -2;
	int PathTile = CurrentTile - PathSizeDir;

	int BridgeSizeDir = Size * -1;
	int BridgeTile = CurrentTile - BridgeSizeDir;

	bool TileInArrays;

	if (CheckTileArrays(PathTile) == true || CheckTileArrays(BridgeTile) == true)
		TileInArrays = true;
	else
		TileInArrays = false;

	if (TileInArrays == true)
	{
		bool EndCycle = false;

		if (CycleCount < MaxCycle)
		{
			CycleCount += 1;
			EndCycle = false;
		}
		else
			EndCycle = true;

		if (EndCycle == false)
			East();
		else
			CurrentFreeSide = false;
	}
	else
		AddBridgePathTile(PathTile, BridgeTile);
}

void AMazeGenerator::West()
{
	int PathTile = CurrentTile + -2;

	int BridgeTile = CurrentTile + -1;

	bool TileInArrays;

	if (CheckTileArrays(PathTile) == true || CheckTileArrays(BridgeTile) == true)
		TileInArrays = true;
	else
		TileInArrays = false;

	if (TileInArrays == true)
	{
		bool EndCycle = false;

		if (CycleCount < MaxCycle)
		{
			CycleCount += 1;
			EndCycle = false;
		}
		else
			EndCycle = true;

		if (EndCycle == false)
			North();
		else
			CurrentFreeSide = false;
	}
	else
		AddBridgePathTile(PathTile, BridgeTile);
}

bool AMazeGenerator::CheckTileArrays(int ItemToFind)
{
	if (BoarderTiles.Contains(ItemToFind) || PathTiles.Contains(ItemToFind) || BridgeTiles.Contains(ItemToFind))
		return true;
	else
		return false;
}

bool AMazeGenerator::CheckNorthTile(bool IsNorth)
{
	UKismetMathLibrary MathLibray;

	int PathSizeDir = Size * MathLibray.SelectInt(2, -2, IsNorth);
	int PathTile = CurrentTile - PathSizeDir;

	int BridgeSizeDir = Size * MathLibray.SelectInt(1, -1, IsNorth);
	int BridgeTile = CurrentTile - BridgeSizeDir;

	if (CheckTileArrays(PathTile) == true || CheckTileArrays(BridgeTile) == true)
		return true;
	else
		return false;
}

bool AMazeGenerator::CheckEastTile(bool IsEast)
{
	UKismetMathLibrary MathLibray;

	int PathTile = CurrentTile + MathLibray.SelectInt(2, -2, IsEast);

	int BridgeTile = CurrentTile + MathLibray.SelectInt(1, -1, IsEast);

	if (CheckTileArrays(PathTile) == true || CheckTileArrays(BridgeTile) == true)
		return true;
	else
		return false;
}

bool AMazeGenerator::CycleCounter(int Counter, int Max)
{
	if (Counter < Max)
	{
		Counter += 1;
		return true;
	}
	else
		return false;
}


