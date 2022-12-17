#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "ORKrubisMoleModeActor.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORKrubisMoleModeActor : public AActor {
    GENERATED_BODY()
public:
    AORKrubisMoleModeActor();
    UFUNCTION(BlueprintCallable)
    FVector SetMovementMap(TArray<FVector> MoveMap, float MoveSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReachedMoveLocation(FVector ResurfacePoint);
    
};

