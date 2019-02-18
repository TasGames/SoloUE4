// Thomas Arthur Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GenerateGrid.generated.h"

UCLASS()
class CRAZYTAXIPROCGEN_API AGenerateGrid : public AActor
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

	void SetPositions();

	TArray<ACell*> ArrayOfCells;

public:	
	AGenerateGrid();

	virtual void Tick(float DeltaTime) override;

	
	
};
