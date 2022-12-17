#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORLevelUnFuckTool.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORLevelUnFuckTool : public AActor {
    GENERATED_BODY()
public:
    AORLevelUnFuckTool();
    UFUNCTION(BlueprintCallable)
    void UnfuckThings();
    
};

