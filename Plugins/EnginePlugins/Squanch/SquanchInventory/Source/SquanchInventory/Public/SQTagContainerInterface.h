#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "SQTagContainerInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class USQTagContainerInterface : public UInterface {
    GENERATED_BODY()
};

class ISQTagContainerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTagContainer(FGameplayTagContainer TagContainer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FGameplayTagContainer GetTagContainer();
    
};

