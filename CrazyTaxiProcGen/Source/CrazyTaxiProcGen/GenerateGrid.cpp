// Thomas Arthur Simon

#include "GenerateGrid.h"


AGenerateGrid::AGenerateGrid()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AGenerateGrid::BeginPlay()
{
	Super::BeginPlay();
	
	SetPositions();
}

void AGenerateGrid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGenerateGrid::SetPositions()
{
	FActorSpawnParameters SpawnParams;
	FVector spawnLoc = FVector(0.0f, 0.0f, 0.0f);
	FRotator spawnRot = FRotator::ZeroRotator;

	int column = 1;
	int row = 1;

	for (int j = 0; j < 31; j++)
	{
		for (int i = 0; i < 31; i++)
		{
			ACell* cell = GetWorld()->SpawnActor<ACell>(cellClass, spawnLoc, spawnRot, SpawnParams);
			ArrayOfCells.Add(cell);

			cell->SetPositionX(spawnLoc.X);
			cell->SetPositionY(spawnLoc.Y);
			cell->SetRow(row);
			cell->SetColumn(column);

			spawnLoc.X += 800;
			row += 1;
		}

		spawnLoc.X = 0;
		row = 1;
		spawnLoc.Y += 800;
		column += 1;

	}
}