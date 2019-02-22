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

