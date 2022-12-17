#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "AttributeSet.h"
#include "GameplayAbilitySpec.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayEffectTypes.h"
#include "SGOnGameplayAbilityEndedDelegate.h"
#include "SQAbilitySystemBPLibrary.generated.h"

class AActor;
class UAbilitySystemComponent;
class UGameplayEffect;
class UGameplayAbility;

UCLASS(Blueprintable)
class SQUANCHABILITYSYSTEM_API USQAbilitySystemBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USQAbilitySystemBPLibrary();
    UFUNCTION(BlueprintCallable)
    static void UnBlockAbilitiesWithTags(AActor* Target, const FGameplayTagContainer& Tags);
    
    UFUNCTION(BlueprintCallable)
    static bool TryActivateAbilityByClass(AActor* Target, TSubclassOf<UGameplayAbility> AbilityClass);
    
    UFUNCTION(BlueprintCallable)
    static bool SetFloatAttribute(AActor* Target, FGameplayAttribute Attribute, float NewValue);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveGameplayEffectsArray(AActor* Target, TArray<TSubclassOf<UGameplayEffect>> GameplayEffectClassArray);
    
    UFUNCTION(BlueprintCallable)
    static int32 RemoveGameplayEffects(AActor* Target, TSubclassOf<UGameplayEffect> GameplayEffectClass, int32 StacksToRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAbilityActiveForActor(AActor* Target, TSubclassOf<UGameplayAbility> AbilityClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasActiveAbilityWithTag(AActor* Target, const FGameplayTag& GameplayTag, bool bMatchExact, TSubclassOf<UGameplayAbility> AbilityToExclude);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAbilitySpecHandleByClass(AActor* Target, TSubclassOf<UGameplayAbility> AbilityClass, FGameplayAbilitySpecHandle& AbilityHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesAbilityHaveTag(UGameplayAbility* Ability, const FGameplayTag& GameplayTag, bool bMatchExact);
    
    UFUNCTION(BlueprintCallable)
    static void CancelAbilityByHandle(AActor* Target, const FGameplayAbilitySpecHandle& AbilityHandle);
    
    UFUNCTION(BlueprintCallable)
    static void CancelAbilityByClass(AActor* Target, TSubclassOf<UGameplayAbility> AbilityClass);
    
    UFUNCTION(BlueprintCallable)
    static void BlockAbilitiesWithTags(AActor* Target, const FGameplayTagContainer& Tags);
    
    UFUNCTION(BlueprintCallable)
    static bool BindToAbilityEndedByAbilityComponent(UAbilitySystemComponent* TargetAbilityComp, FGameplayAbilitySpecHandle AbilityHandle, FSGOnGameplayAbilityEnded Callback);
    
    UFUNCTION(BlueprintCallable)
    static bool BindToAbilityEnded(AActor* Target, FGameplayAbilitySpecHandle AbilityHandle, FSGOnGameplayAbilityEnded Callback);
    
    UFUNCTION(BlueprintCallable)
    static FActiveGameplayEffectHandle ApplyGameplayEffectWithHit(AActor* Target, TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level, AActor* Instigator, AActor* EffectCauser, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FActiveGameplayEffectHandle> ApplyGameplayEffectArray(AActor* Target, TArray<TSubclassOf<UGameplayEffect>> GameplayEffectClassArray, float Level, AActor* Instigator, AActor* EffectCauser);
    
    UFUNCTION(BlueprintCallable)
    static FActiveGameplayEffectHandle ApplyGameplayEffect(AActor* Target, TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level, AActor* Instigator, AActor* EffectCauser);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAbilitySpecHandle ActivateAbility(AActor* Target, TSubclassOf<UGameplayAbility> Ability);
    
};

