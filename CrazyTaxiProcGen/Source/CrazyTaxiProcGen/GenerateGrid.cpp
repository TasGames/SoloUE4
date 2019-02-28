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

	StoreCells();

	SmoothCells();

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

	spawnLoc.Z = -100000;

	ACell* cell = GetWorld()->SpawnActor<ACell>(cellClass, spawnLoc, spawnRot, SpawnParams);
	ArrayOfCells.Add(cell);
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

void AGenerateGrid::StoreCells()
{
	int numOfCells = ArrayOfCells.Num();

	for (int i = 0; i < numOfCells; i++)
	{
		ACell* cell = ArrayOfCells[i];

		cell->SetTCell(i + 31);
		cell->SetTLCell(i + 30);
		cell->SetTRCell(i + 32);
		cell->SetBCell(i - 31);
		cell->SetBLCell(i - 30);
		cell->SetBRCell(i - 32);
		cell->SetLCell(i - 1);
		cell->SetRCell(i + 1);
	}
}

void AGenerateGrid::CheckCells(int c)
{
	ACell* cell = ArrayOfCells[c];

	ACell* cell1 = ArrayOfCells[cell->GetTCell()];
	ACell* cell2 = ArrayOfCells[cell->GetTLCell()];
	ACell* cell3 = ArrayOfCells[cell->GetTRCell()];
	ACell* cell4 = ArrayOfCells[cell->GetLCell()];
	ACell* cell5 = ArrayOfCells[cell->GetRCell()];
	ACell* cell6 = ArrayOfCells[cell->GetBCell()];
	ACell* cell7 = ArrayOfCells[cell->GetBLCell()];
	ACell* cell8 = ArrayOfCells[cell->GetBRCell()];

	cell->SetType(2);
	cell1->SetType(2);
	cell2->SetType(2);
	cell3->SetType(2);
	cell4->SetType(2);
	cell5->SetType(2);
	cell6->SetType(2);
	cell7->SetType(2);
	cell8->SetType(2);
}

void AGenerateGrid::SmoothCells()
{
	for (int i = 0; i < 960; i++)
	{
		ACell* cell = ArrayOfCells[i];

		ACell* tlCell = ArrayOfCells[cell->GetTLCell()];
		ACell* trCell = ArrayOfCells[cell->GetTRCell()];
		ACell* blCell = ArrayOfCells[cell->GetBLCell()];
		ACell* brCell = ArrayOfCells[cell->GetBRCell()];
		ACell* tCell = ArrayOfCells[cell->GetTCell()];
		ACell* lCell = ArrayOfCells[cell->GetLCell()];
		ACell* bCell = ArrayOfCells[cell->GetBCell()];
		ACell* rCell = ArrayOfCells[cell->GetRCell()];

		if (tlCell->GetType() == 1)
		{
			if (tCell->GetType() == 1 && lCell->GetType() == 1)
				cell->SetType(2);
		}

		if (trCell->GetType() == 1)
		{
			if (tCell->GetType() == 1 && rCell->GetType() == 1)
				cell->SetType(2);
		}

		if (blCell->GetType() == 1)
		{
			if (bCell->GetType() == 1 && lCell->GetType() == 1)
				cell->SetType(2);
		}

		if (brCell->GetType() == 1)
		{
			if (bCell->GetType() == 1 && rCell->GetType() == 1)
				cell->SetType(2);
		}

		if (cell->GetPositionX() == 0 || cell->GetPositionX() == 24000 || cell->GetPositionY() == 0 || cell->GetPositionY() == 24000)
			cell->SetType(1);
	}
}

void AGenerateGrid::Regenerate()
{
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "Worked");

	RemoveCells();
	SetPositions();
	StoreCells();
	SmoothCells();
}
