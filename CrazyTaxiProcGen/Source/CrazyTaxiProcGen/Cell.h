// Thomas Arthur Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cell.generated.h"

UCLASS()
class CRAZYTAXIPROCGEN_API ACell : public AActor
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

	float positionX;
	float positionY;

public:	
	ACell();

	virtual void Tick(float DeltaTime) override;
	
	void SetPositionX(float x);
	int GetPositionX();
	void SetPositionY(float y);
	int GetPositionY();
	
};
