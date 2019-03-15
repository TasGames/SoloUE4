// Thomas Arthur Simon

#include "GenerateGrid.h"


AGenerateGrid::AGenerateGrid()
{
	PrimaryActorTick.bCanEverTick = true;

	fails = false;

}

void AGenerateGrid::BeginPlay()
{
	Super::BeginPlay();
	
	SetPositions();

	StoreCells();

	GenerateRoad();

	SmoothCells();

	GenerateBuildings();
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

			/*int Rand = FMath::RandRange(0, 5);
			if (Rand == 1)
				cell->SetType(1);
			else
				cell->SetType(0);*/

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

		cell->SetNCell(i + 1);
		cell->SetNECell(i + 32);
		cell->SetECell(i + 31);
		cell->SetSECell(i + 30);
		cell->SetSCell(i - 1);
		cell->SetSWCell(i - 30);
		cell->SetWCell(i - 31);
		cell->SetNWCell(i - 32);
	}
}

void AGenerateGrid::CheckCells(int c)
{
	ACell* cell = ArrayOfCells[c];

	ACell* cell1 = ArrayOfCells[cell->GetNCell()];
	ACell* cell2 = ArrayOfCells[cell->GetNECell()];
	ACell* cell3 = ArrayOfCells[cell->GetECell()];
	ACell* cell4 = ArrayOfCells[cell->GetSECell()];
	ACell* cell5 = ArrayOfCells[cell->GetSCell()];
	ACell* cell6 = ArrayOfCells[cell->GetSWCell()];
	ACell* cell7 = ArrayOfCells[cell->GetWCell()];
	ACell* cell8 = ArrayOfCells[cell->GetNWCell()];

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

void AGenerateGrid::CheckAdjacent(ACell* cell)
{
	ACell* nCell = ArrayOfCells[cell->GetNCell()];
	ACell* neCell = ArrayOfCells[cell->GetNECell()];
	ACell* eCell = ArrayOfCells[cell->GetECell()];
	ACell* seCell = ArrayOfCells[cell->GetSECell()];
	ACell* sCell = ArrayOfCells[cell->GetSCell()];
	ACell* swCell = ArrayOfCells[cell->GetSWCell()];
	ACell* wCell = ArrayOfCells[cell->GetWCell()];
	ACell* nwCell = ArrayOfCells[cell->GetNWCell()];

	if (seCell->GetType() == 1)
	{
		if (eCell->GetType() == 1 && sCell->GetType() == 1)
			cell->SetType(2);
	}

	if (neCell->GetType() == 1)
	{
		if (eCell->GetType() == 1 && nCell->GetType() == 1)
			cell->SetType(2);
	}

	if (swCell->GetType() == 1)
	{
		if (wCell->GetType() == 1 && sCell->GetType() == 1)
			cell->SetType(2);
	}

	if (nwCell->GetType() == 1)
	{
		if (wCell->GetType() == 1 && nCell->GetType() == 1)
			cell->SetType(2);
	}
}

void AGenerateGrid::Repeat()
{
	randDir = FMath::RandRange(1, 6);
	fails = true;
}

void AGenerateGrid::SmoothCells()
{
	for (int i = 0; i < maxCells; i++)
	{
		ACell* cell = ArrayOfCells[i];

		ACell* nCell = ArrayOfCells[cell->GetNCell()];
		ACell* neCell = ArrayOfCells[cell->GetNECell()];
		ACell* eCell = ArrayOfCells[cell->GetECell()];
		ACell* seCell = ArrayOfCells[cell->GetSECell()];
		ACell* sCell = ArrayOfCells[cell->GetSCell()];
		ACell* swCell = ArrayOfCells[cell->GetSWCell()];
		ACell* wCell = ArrayOfCells[cell->GetWCell()];
		ACell* nwCell = ArrayOfCells[cell->GetNWCell()];

		if (seCell->GetType() == 1)
		{
			if (eCell->GetType() == 1 && sCell->GetType() == 1)
				cell->SetType(2);
		}

		if (neCell->GetType() == 1)
		{
			if (eCell->GetType() == 1 && nCell->GetType() == 1)
				cell->SetType(2);
		}

		if (swCell->GetType() == 1)
		{
			if (wCell->GetType() == 1 && sCell->GetType() == 1)
				cell->SetType(2);
		}

		if (nwCell->GetType() == 1)
		{
			if (wCell->GetType() == 1 && nCell->GetType() == 1)
				cell->SetType(2);
		}

		if (cell->GetPositionX() == 0 || cell->GetPositionX() == 24000 || cell->GetPositionY() == 0 || cell->GetPositionY() == 24000)
			cell->SetType(1);
	}
}

void AGenerateGrid::GenerateRoad()
{
	int randC1 = FMath::RandRange(3, 29);
	int randC2 = FMath::RandRange(3, 29);
	int randR1 = FMath::RandRange(3, 29);
	int randR2 = FMath::RandRange(3, 29);
	int randC3 = FMath::RandRange(3, 29);
	int randC4 = FMath::RandRange(3, 29);
	int randR3 = FMath::RandRange(3, 29);
	int randR4 = FMath::RandRange(3, 29);

	for (int i = 0; i < maxCells; i++)
	{
		ACell* cell = ArrayOfCells[i];
		if (cell->GetRow() == 2)
		{
			if (cell->GetColumn() == randC1 || cell->GetColumn() == randC2)
			{
				RoadDirection(cell);
			}
		}
		if (cell->GetColumn() == 2)
		{
			if (cell->GetRow() == randR1 || cell->GetRow() == randR2)
			{
				RoadDirection(cell);
			}
		}
		if (cell->GetRow() == 30)
		{
			if (cell->GetColumn() == randC3 || cell->GetColumn() == randC4)
			{
				RoadDirection(cell);
			}
		}
		if (cell->GetColumn() == 30)
		{
			if (cell->GetRow() == randR3 || cell->GetRow() == randR4)
			{
				RoadDirection(cell);
			}
		}
	}
}

void AGenerateGrid::RoadDirection(ACell* cell)
{
	cell->SetType(1);

	cell->SetLastCell(cell->GetSCell());

	for (int j = 0; j < 50; j++)
	{
		ACell* nCell = ArrayOfCells[cell->GetNCell()];
		ACell* eCell = ArrayOfCells[cell->GetECell()];
		ACell* sCell = ArrayOfCells[cell->GetSCell()];
		ACell* wCell = ArrayOfCells[cell->GetWCell()];

		randDir = FMath::RandRange(1, 6);

		if (cell->GetLastCell() == cell->GetSCell())
		{
			if (randDir == 1)
			{
				cell = wCell;
				cell->SetLastCell(cell->GetECell());
			}
			else if (randDir == 2)
			{
				cell = eCell;
				cell->SetLastCell(cell->GetWCell());
			}
			else
			{
				cell = nCell;
				cell->SetLastCell(cell->GetSCell());
			}
		}
		else if (cell->GetLastCell() == cell->GetNCell())
		{
			if (randDir == 1)
			{
				cell = wCell;
				cell->SetLastCell(cell->GetECell());
			}
			else if (randDir == 2)
			{
				cell = eCell;
				cell->SetLastCell(cell->GetWCell());
			}
			else
			{
				cell = sCell;
				cell->SetLastCell(cell->GetNCell());
			}
		}
		else if (cell->GetLastCell() == cell->GetECell())
		{
			if (randDir == 1)
			{
				cell = sCell;
				cell->SetLastCell(cell->GetNCell());
			}
			else if (randDir == 2)
			{
				cell = nCell;
				cell->SetLastCell(cell->GetSCell());
			}
			else
			{
				cell = wCell;
				cell->SetLastCell(cell->GetECell());
			}
		}
		else if (cell->GetLastCell() == cell->GetWCell())
		{
			if (randDir == 1)
			{
				cell = sCell;
				cell->SetLastCell(cell->GetNCell());
			}
			else if (randDir == 2)
			{
				cell = nCell;
				cell->SetLastCell(cell->GetSCell());
			}
			else
			{
				cell = eCell;
				cell->SetLastCell(cell->GetWCell());
			}
		}
		cell->SetType(1);
	}
}

void AGenerateGrid::GenerateBuildings()
{
	for (int i = 0; i < maxCells; i++)
	{
		ACell* cell = ArrayOfCells[i];

		if (cell->GetType() == 0)
		{
			ACell* nCell = ArrayOfCells[cell->GetNCell()];
			ACell* eCell = ArrayOfCells[cell->GetECell()];
			ACell* sCell = ArrayOfCells[cell->GetSCell()];
			ACell* wCell = ArrayOfCells[cell->GetWCell()];

			if (nCell->GetType() == 1 || eCell->GetType() == 1 || sCell->GetType() == 1 || wCell->GetType() == 1)
				cell->SetType(2);
		}
	}
}

void AGenerateGrid::Regenerate()
{
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "Worked");

	RemoveCells();
	SetPositions();
	StoreCells();
	GenerateRoad();
	//SmoothCells();
	//SmoothCells();
	//SmoothCells();
	//GenerateBuildings();
}
