#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "ORNarrativeSequenceAsset.generated.h"

class ULevelSequence;
class AORNarrativeDirector;
class UORPossessableComponent;

UCLASS(Abstract, Blueprintable)
class UORNarrativeSequenceAsset : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UORPossessableComponent> OwningComponent;
    
public:
    UORNarrativeSequenceAsset();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayNDSequence(AORNarrativeDirector* InOwningNarrativeDirector, const FGameplayTag& InSequenceDataTag, ULevelSequence* InLevelSequence, const TMap<FString, UObject*>& PossessionMap, const FName& STBlockName);
    
    UFUNCTION(BlueprintCallable)
    void OnNDSequenceEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UORPossessableComponent* GetOwningPossessable() const;
    
};

