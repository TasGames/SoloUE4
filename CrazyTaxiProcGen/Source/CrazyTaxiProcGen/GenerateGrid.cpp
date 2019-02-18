// Thomas Arthur Simon

#include "GenerateGrid.h"
#include "Cell.h"

AGenerateGrid::AGenerateGrid()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AGenerateGrid::BeginPlay()
{
	Super::BeginPlay();
	
}

void AGenerateGrid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGenerateGrid::SetPositions()
{
	for (int i = 0; i < 31; i++)
	{
		ACell* Cell = ArrayOfCells[i];

	}
}