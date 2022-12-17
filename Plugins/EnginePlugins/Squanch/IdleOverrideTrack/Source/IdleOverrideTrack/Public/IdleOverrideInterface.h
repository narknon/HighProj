#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IdleOverrideInterface.generated.h"

class UAnimSequence;

UINTERFACE(Blueprintable)
class IDLEOVERRIDETRACK_API UIdleOverrideInterface : public UInterface {
    GENERATED_BODY()
};

class IDLEOVERRIDETRACK_API IIdleOverrideInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndIdleOverride();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginIdleOverride(UAnimSequence* InIdleAnimation);
    
};

