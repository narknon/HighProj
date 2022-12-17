#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORLightChannelSwitcher.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORLightChannelSwitcher : public AActor {
    GENERATED_BODY()
public:
    AORLightChannelSwitcher();
    UFUNCTION(BlueprintCallable)
    void SwitchAllToChannel3();
    
    UFUNCTION(BlueprintCallable)
    void SwitchAllToChannel2();
    
    UFUNCTION(BlueprintCallable)
    void SwitchAllToChannel1();
    
};

