#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ORScannablesSubsystem.generated.h"

class AActor;
class UORScannableComponent;

UCLASS(Blueprintable)
class OREGON_API UORScannablesSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTagContainer> AlwaysActivatedScannableTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTagContainer> AlwaysDeactivatedScannableTags;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UORScannableComponent*> CachedScannableComponents;
    
public:
    UORScannablesSubsystem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ScannableAlwaysDeactivated(const FGameplayTagContainer& ScannableTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ScannableAlwaysActivated(const FGameplayTagContainer& ScannableTags) const;
    
    UFUNCTION(BlueprintCallable)
    void RemoveAlwaysDeactivatedScannableTags(const FGameplayTagContainer& ScannableTags, const FGameplayTagContainer& InstigatingTags);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAlwaysActivatedScannableTags(const FGameplayTagContainer& ScannableTags, const FGameplayTagContainer& InstigatingTags);
    
    UFUNCTION(BlueprintCallable)
    TMap<FGameplayTag, FGameplayTagContainer> GetAlwaysDeactivatedScannableTags();
    
    UFUNCTION(BlueprintCallable)
    TMap<FGameplayTag, FGameplayTagContainer> GetAlwaysActivatedScannableTags();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UORScannableComponent*> GetAllScannableComponents();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateScannablesWithTags(const FGameplayTagContainer& ScannableTags);
    
    UFUNCTION(BlueprintCallable)
    void AddAlwaysDeactivatedScannableTags(const FGameplayTagContainer& ScannableTags, const FGameplayTagContainer& InstigatingTags);
    
    UFUNCTION(BlueprintCallable)
    void AddAlwaysActivatedScannableTags(const FGameplayTagContainer& ScannableTags, const FGameplayTagContainer& InstigatingTags);
    
    UFUNCTION(BlueprintCallable)
    void ActivateScannablesWithTags(const FGameplayTagContainer& ScannableTags, AActor* DistanceCheckActor, float MaxActorDistanceToScannable);
    
};

