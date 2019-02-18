// Thomas Arthur Simon

#include "Cell.h"

ACell::ACell()
{
	PrimaryActorTick.bCanEverTick = true;

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
}

int ACell::GetPositionX()
{
	return 0;
}

void ACell::SetPositionY(float y)
{
}

int ACell::GetPositionY()
{
	return 0;
}

