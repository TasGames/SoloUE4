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

			int RandT = FMath::RandRange(0, 2);
			cell->SetType(RandT);

			if (cell->GetPositionX() == 0 || cell->GetPositionX() == 24000 || cell->GetPositionY() == 0 || cell->GetPositionY() == 24000)
				cell->SetType(1);

			spawnLoc.X += 800;
			row += 1;
		}

		spawnLoc.X = 0;
		row = 1;
		spawnLoc.Y += 800;
		column += 1;
	}
}

void AGenerateGrid::RemoveCells()
{
	int numOfCells = ArrayOfCells.Num();

	for (int i = 0; i < numOfCells; i++)
	{
		ACell* cell = ArrayOfCells[i];
		cell->Destroy();
	}

	ArrayOfCells.Empty();
}

void AGenerateGrid::Regenerate()
{
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "Worked");

	RemoveCells();
	SetPositions();

}
