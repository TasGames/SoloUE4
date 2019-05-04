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

	UMaterialInterface* M;

protected:
	virtual void BeginPlay() override;

	float positionX;
	float positionY;

	int columnNum;
	int rowNum;

	int nCell;
	int neCell;
	int eCell;
	int seCell;
	int sCell;
	int swCell;
	int wCell;
	int nwCell;

	int lastCell;

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

	void SetNCell(int c);
	int GetNCell();

	void SetNECell(int c);
	int GetNECell();

	void SetECell(int c);
	int GetECell();

	void SetSECell(int c);
	int GetSECell();

	void SetSCell(int c);
	int GetSCell();

	void SetSWCell(int c);
	int GetSWCell();

	void SetWCell(int c);
	int GetWCell();

	void SetNWCell(int c);
	int GetNWCell();

	void SetLastCell(int c);
	int GetLastCell();

	void SetType(int t);
	int GetType();

	void ChangeMaterial();
};
