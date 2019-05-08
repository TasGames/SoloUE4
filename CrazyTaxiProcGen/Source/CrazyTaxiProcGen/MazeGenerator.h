// Thomas Arthur Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MazeGenerator.generated.h"

UCLASS()
class CRAZYTAXIPROCGEN_API AMazeGenerator : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, Category = Maze)
	class UInstancedStaticMeshComponent* MazeMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = Maze, meta = (ClampMin = "3.0", ClampMax = "20.0", UIMin = "3.0", UIMax = "20.0"))
	int Size;

	UPROPERTY(EditAnywhere, Category = Maze)
	FRandomStream InitialSeed;

	UPROPERTY(EditAnywhere, Category = Maze)
	bool ShowBoarder;

	UPROPERTY(EditAnywhere, Category = Maze)
	bool ShowMaze;

	UPROPERTY(EditAnywhere, Category = Maze)
	bool AllowLoopPaths;

	TArray<int> BoarderTiles;
	TArray<int> PathTiles;
	TArray<int> BridgeTiles;
	TArray<int> WallTiles;
	TArray<int> CheckedTiles;

	int CurrentTile;
	int MaxLoopPaths;

	float TileSize;

	bool CurrentFreeSide;

	void PopulateBoarder(TArray<int> BoarderArray);
	//void SetInitialTile();

public:	
	// Sets default values for this actor's properties
	AMazeGenerator();

	UFUNCTION(BlueprintCallable)
	void Construction();
	
};
