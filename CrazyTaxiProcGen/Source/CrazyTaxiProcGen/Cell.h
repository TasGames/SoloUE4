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
	class UStaticMeshComponent* gridMesh;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class UStaticMeshComponent* cellMesh;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class UStaticMeshComponent* cellMeshRoad;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class UStaticMeshComponent* cellMeshBuilding;

	class UStaticMeshComponent* currentMesh;

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

	int cellType = 0;

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

	void SetTLCell(int c);
	int GetTLCell();

	void SetTCell(int c);
	int GetTCell();

	void SetTRCell(int c);
	int GetTRCell();

	void SetLCell(int c);
	int GetLCell();

	void SetRCell(int c);
	int GetRCell();

	void SetBLCell(int c);
	int GetBLCell();

	void SetBCell(int c);
	int GetBCell();

	void SetBRCell(int c);
	int GetBRCell();

	void SetType(int t);
	int GetType();
};
