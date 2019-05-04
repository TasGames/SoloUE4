// Thomas Arthur Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CrazyTaxiProcGenGameModeBase.generated.h"

UCLASS()
class CRAZYTAXIPROCGEN_API ACrazyTaxiProcGenGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
protected:

	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = HUD, Meta = (BlueprintProtected = "true"))
	TSubclassOf<class UUserWidget> PlayerHUDClass;

	UPROPERTY()
	class UUserWidget* CurrentWidget;
	
	
};
