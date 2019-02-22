// Thomas Arthur Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cell.generated.h"

UCLASS()
class CRAZYTAXIPROCGEN_API ACell : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class UStaticMeshComponent* cellMesh;

protected:
	virtual void BeginPlay() override;

	float positionX;
	float positionY;

	int columnNum;
	int rowNum;

	int tlCell;
	int tCell;
	int trCell;
	int lCell;
	int rCell;
	int blCell;
	int bCell;
	int brCell;

public:	
	ACell();

	virtual void Tick(float DeltaTime) override;
	
	void SetPositionX(float x);
	float GetPositionX();
	void SetPositionY(float y);
	float GetPositionY();
	
	void SetColumn(int n);
	int GetColumn();
	void SetRow(int n);
	int GetRow();
};
