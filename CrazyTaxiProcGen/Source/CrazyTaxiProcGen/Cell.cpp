// Thomas Arthur Simon

#include "Cell.h"

ACell::ACell()
{
	PrimaryActorTick.bCanEverTick = true;

	cellMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cell"));
	cellMesh->SetupAttachment(RootComponent);
	cellMesh->SetSimulatePhysics(true);
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
	tlCell = c;
}

int ACell::GetTLCell()
{
	return tlCell;
}

void ACell::SetTCell(int c)
{
	tCell = c;
}

int ACell::GetTCell()
{
	return tCell;
}

void ACell::SetTRCell(int c)
{
	trCell = c;
}

int ACell::GetTRCell()
{
	return trCell;
}

void ACell::SetLCell(int c)
{
	lCell = c;
}

int ACell::GetLCell()
{
	return lCell;
}

void ACell::SetRCell(int c)
{
	rCell = c;
}

int ACell::GetRCell()
{
	return rCell;
}

void ACell::SetBLCell(int c)
{
	blCell = c;
}

int ACell::GetBLCell()
{
	return blCell;
}

void ACell::SetBCell(int c)
{
	bCell = c;
}

int ACell::GetBCell()
{
	return bCell;
}

void ACell::SetBRCell(int c)
{
	brCell = c;
}

int ACell::GetBRCell()
{
	return brCell;
}

