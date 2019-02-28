// Thomas Arthur Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cell.h"
#include "GenerateGrid.generated.h"

UCLASS()
class CRAZYTAXIPROCGEN_API AGenerateGrid : public AActor
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = Cell)
	TSubclassOf<class ACell> cellClass;

	TArray<ACell*> ArrayOfCells;

	void SetPositions();

	void RemoveCells();

	void StoreCells();

	void CheckCells(int c);

	void SmoothCells();

public:	
	AGenerateGrid();

	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Regenerate")
	void Regenerate();

	
};
