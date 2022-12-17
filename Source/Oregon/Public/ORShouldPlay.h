#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "ORShouldPlay.generated.h"

class AORNarrativeDirector;

UINTERFACE(Blueprintable)
class UORShouldPlay : public UInterface {
    GENERATED_BODY()
};

class IORShouldPlay : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldPlaySequence(const AORNarrativeDirector* NarrativeDirector, const FGameplayTagContainer& DataTags) const;
    
};

