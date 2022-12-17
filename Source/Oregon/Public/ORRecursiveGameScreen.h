#pragma once
#include "CoreMinimal.h"
#include "ORStationaryPawn.h"
#include "ORRecursiveGameScreen.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORRecursiveGameScreen : public AORStationaryPawn {
    GENERATED_BODY()
public:
    AORRecursiveGameScreen();
    UFUNCTION(BlueprintCallable)
    void ForceCameraCut();
    
};

