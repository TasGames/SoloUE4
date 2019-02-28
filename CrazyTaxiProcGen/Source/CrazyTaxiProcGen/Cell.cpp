// Thomas Arthur Simon

#include "Cell.h"

ACell::ACell()
{
	PrimaryActorTick.bCanEverTick = true;

	gridMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Grid"));
	RootComponent = gridMesh;

	cellMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CellE"));
	cellMesh->SetupAttachment(RootComponent);

	cellMeshRoad = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CellR"));
	cellMeshRoad->SetupAttachment(RootComponent);
	cellMeshRoad->SetVisibility(false);

	cellMeshBuilding = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CellB"));
	cellMeshBuilding->SetupAttachment(RootComponent);
	cellMeshRoad->SetVisibility(false);

	currentMesh = cellMesh;
}

void ACell::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACell::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACell::SetPositionX(float x)
{
	positionX = x;
}

float ACell::GetPositionX()
{
	return positionX;
}

void ACell::SetPositionY(float y)
{
	positionY = y;
}

float ACell::GetPositionY()
{
	return positionY;
}

void ACell::SetColumn(int n)
{
	columnNum = n;
}

int ACell::GetColumn()
{
	return columnNum;
}

void ACell::SetRow(int n)
{
	rowNum = n;
}

int ACell::GetRow()
{
	return rowNum;
}

void ACell::SetTLCell(int c)
{
	if (c > 961)
		tlCell = 961;
	else
		tlCell = c;
}

int ACell::GetTLCell()
{
	return tlCell;
}

void ACell::SetTCell(int c)
{
	if (c > 961)
		tCell = 961;
	else
		tCell = c;
}

int ACell::GetTCell()
{
	return tCell;
}

void ACell::SetTRCell(int c)
{
	if (c > 961)
		trCell = 961;
	else
		trCell = c;
}

int ACell::GetTRCell()
{
	return trCell;
}

void ACell::SetLCell(int c)
{
	if (c < 0)
		lCell = 961;
	else
		lCell = c;
}

int ACell::GetLCell()
{
	return lCell;
}

void ACell::SetRCell(int c)
{
	if (c > 961)
		rCell = 961;
	else
		rCell = c;
}

int ACell::GetRCell()
{
	return rCell;
}

void ACell::SetBLCell(int c)
{
	if (c < 0)
		blCell = 961;
	else
		blCell = c;
}

int ACell::GetBLCell()
{
	return blCell;
}

void ACell::SetBCell(int c)
{
	if (c < 0)
		bCell = 961;
	else
		bCell = c;
}

int ACell::GetBCell()
{
	return bCell;
}

void ACell::SetBRCell(int c)
{
	if (c < 0)
		brCell = 961;
	else
		brCell = c;
}

int ACell::GetBRCell()
{
	return brCell;
}

void ACell::SetType(int t)
{
	cellType = t;

	if (cellType == 0)
	{
	currentMesh->SetVisibility(false);
	cellMesh->SetVisibility(true);
	currentMesh = cellMesh;
	}
	else if (cellType == 1)
	{
		currentMesh->SetVisibility(false);
		cellMeshRoad->SetVisibility(true);
		currentMesh = cellMeshRoad;
	}
	else if (cellType == 2)
	{
		currentMesh->SetVisibility(false);
		cellMeshBuilding->SetVisibility(true);
		currentMesh = cellMeshBuilding;
	}
}

int ACell::GetType()
{
	return cellType;
}

