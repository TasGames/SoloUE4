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

void ACell::SetSECell(int c)
{
	if (c > 961)
		seCell = 961;
	else
		seCell = c;
}

int ACell::GetSECell()
{
	return seCell;
}

void ACell::SetECell(int c)
{
	if (c > 961)
		eCell = 961;
	else
		eCell = c;
}

int ACell::GetECell()
{
	return eCell;
}

void ACell::SetNECell(int c)
{
	if (c > 961)
		neCell = 961;
	else
		neCell = c;
}

int ACell::GetNECell()
{
	return neCell;
}

void ACell::SetSCell(int c)
{
	if (c < 0)
		sCell = 961;
	else
		sCell = c;
}

int ACell::GetSCell()
{
	return sCell;
}

void ACell::SetNCell(int c)
{
	if (c > 961)
		nCell = 961;
	else
		nCell = c;
}

int ACell::GetNCell()
{
	return nCell;
}

void ACell::SetSWCell(int c)
{
	if (c < 0)
		swCell = 961;
	else
		swCell = c;
}

int ACell::GetSWCell()
{
	return swCell;
}

void ACell::SetWCell(int c)
{
	if (c < 0)
		wCell = 961;
	else
		wCell = c;
}

int ACell::GetWCell()
{
	return wCell;
}

void ACell::SetNWCell(int c)
{
	if (c < 0)
		nwCell = 961;
	else
		nwCell = c;
}

int ACell::GetNWCell()
{
	return nwCell;
}

void ACell::SetLastCell(int c)
{
	lastCell = c;
}

int ACell::GetLastCell()
{
	return lastCell;
}

void ACell::SetType(int t)
{
	cellType = t;

	currentMesh->SetVisibility(false);
	currentMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	if (cellType == 0)
	{
	cellMesh->SetVisibility(true);
	cellMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	currentMesh = cellMesh;
	}
	else if (cellType == 1)
	{
		cellMeshRoad->SetVisibility(true);
		cellMeshRoad->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		currentMesh = cellMeshRoad;
	}
	else if (cellType == 2)
	{
		cellMeshBuilding->SetVisibility(true);
		cellMeshBuilding->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		ChangeMaterial();
		currentMesh = cellMeshBuilding;
	}
}

int ACell::GetType()
{
	return cellType;
}

void ACell::ChangeMaterial()
{
	if (cellMeshBuilding->GetMaterial(0))
	{
		if (M == NULL)
			M = cellMeshBuilding->GetMaterial(0);

		UMaterialInstanceDynamic* MDynamic = UMaterialInstanceDynamic::Create(M, this);

		float RandR = FMath::RandRange(0.0f, 1.0f);
		float RandG = FMath::RandRange(0.0f, 1.0f);
		float RandB = FMath::RandRange(0.0f, 1.0f);

		MDynamic->SetVectorParameterValue(FName(TEXT("Colour")), FLinearColor(RandR, RandG, RandB));
		cellMeshBuilding->SetMaterial(0, MDynamic);
	}

}

