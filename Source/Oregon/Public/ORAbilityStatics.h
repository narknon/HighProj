#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "ORGameplayTargetDataFilter.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffect.h"
#include "Abilities/GameplayAbilityTargetDataFilter.h"
#include "GameplayTagContainer.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffectExecutionCalculation.h"
#include "GameplayEffectExecutionCalculation.h"
#include "ORAbilityStatics.generated.h"

class AActor;
class UAbilitySystemComponent;

UCLASS(Blueprintable)
class OREGON_API UORAbilityStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UORAbilityStatics();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTargetDataFilterHandle MakeORFilterHandle(FORGameplayTargetDataFilter Filter, AActor* FilterActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAbilitySystemComponent* GetTargetAbilitySystem(const FGameplayEffectCustomExecutionParameters& ExecutionParams);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAbilitySystemComponent* GetSourceAbilitySystem(const FGameplayEffectCustomExecutionParameters& ExecutionParams);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FHitResult GetHitResult(const FGameplayEffectCustomExecutionParameters& ExecutionParams);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayEffectSpec GetEffectSpec(const FGameplayEffectCustomExecutionParameters& ExecutionParams);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAttributeValue(const FGameplayEffectAttributeCaptureDefinition& Attribute, const FGameplayEffectCustomExecutionParameters& ExecutionParams);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanActivateAbilitiesMatchingTags(UAbilitySystemComponent* AbilitySystemComponent, const FGameplayTagContainer& GameplayTagContainer);
    
    UFUNCTION(BlueprintCallable)
    static void AddOutputModifier(UPARAM(Ref) FGameplayEffectCustomExecutionOutput& Output, const FGameplayEffectAttributeCaptureDefinition& Attribute, TEnumAsByte<EGameplayModOp::Type> ModifierType, float Value);
    
};

