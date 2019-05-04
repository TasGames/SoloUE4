// Thomas Arthur Simon

#include "CrazyTaxiProcGenGameModeBase.h"
#include "Blueprint/UserWidget.h"

void ACrazyTaxiProcGenGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	if (PlayerHUDClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), PlayerHUDClass);

		if (CurrentWidget != nullptr)
			CurrentWidget->AddToViewport();
	}
}


