#pragma once
#include "CoreMinimal.h"
#include "ORWorldSubsystem.h"
#include "ORAnimationAnchorSubsystem.generated.h"

class AActor;

UCLASS(Blueprintable)
class UORAnimationAnchorSubsystem : public UORWorldSubsystem {
    GENERATED_BODY()
public:
    UORAnimationAnchorSubsystem();
protected:
    UFUNCTION(BlueprintCallable)
    void OnAnchorDestroyed(AActor* Actor);
    
};

