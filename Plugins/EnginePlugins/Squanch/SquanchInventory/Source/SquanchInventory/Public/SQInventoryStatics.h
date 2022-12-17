#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ScalableFloat.h"
#include "GameplayEffect.h"
#include "GameplayTagContainer.h"
#include "GameplayEffectTypes.h"
#include "SQInventoryStatics.generated.h"

class AActor;
class UGameplayEffect;
class USQFireableItemComponent;
class UItemImpactResult;
class ASQFireableInventoryItem;
class ASQInventoryItem;
class ACharacter;
class UCurveFloat;

UCLASS(Blueprintable)
class SQUANCHINVENTORY_API USQInventoryStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USQInventoryStatics();
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpec MakeNewGameplayEffectSpec(UGameplayEffect* EffectSpec, const FHitResult& HitResult, AActor* Source, AActor* Target, const float EffectLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetScalableValue(FScalableFloat Scalable, int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetResourceInfo(ASQFireableInventoryItem* Item, FGameplayTag FireMode, float& CurrentCount, float& MaxCount);
    
    UFUNCTION(BlueprintCallable)
    static ASQInventoryItem* GetParentItem(USQFireableItemComponent* ItemComponent);
    
    UFUNCTION(BlueprintCallable)
    static ASQFireableInventoryItem* GetParentFireableItem(USQFireableItemComponent* ItemComponent);
    
    UFUNCTION(BlueprintCallable)
    static ACharacter* GetParentCharacter(USQFireableItemComponent* ItemComponent);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetModeType(USQFireableItemComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USQFireableItemComponent* GetItemComponentByClass(ASQFireableInventoryItem* Item, FGameplayTag ModeKey, TSubclassOf<USQFireableItemComponent> ComponentClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator CreateRotation90DegreesFromNormal(FVector Normal);
    
    UFUNCTION(BlueprintCallable)
    static float CalculateFalloffPercent(float MinFalloff, float MaxFalloff, float Range, UCurveFloat* Curve);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyHitResultMultiple(AActor* SourceActor, UItemImpactResult* ImpactResult, TArray<FHitResult>& HitResults, FGameplayTag MultiplyGETag, int32 NumGEsPerHitResult, const TSubclassOf<AActor>& SingleGESupportedActor);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyHitResult(AActor* SourceActor, UItemImpactResult* ImpactResult, const FHitResult& HitResult, bool bApplyGameplayEffects);
    
    UFUNCTION(BlueprintCallable)
    static FActiveGameplayEffectHandle ApplyGameplayEffectSpec(UGameplayEffect* EffectSpec, const FHitResult& HitResult, AActor* Source, AActor* Target, const float EffectLevel);
    
    UFUNCTION(BlueprintCallable)
    static FActiveGameplayEffectHandle ApplyGameplayEffect(TSubclassOf<UGameplayEffect> EffectClass, const FHitResult& HitResult, AActor* Source, AActor* Target, const float EffectLevel);
    
    UFUNCTION(BlueprintCallable)
    static FActiveGameplayEffectHandle ApplyFinalizedGameplayEffectSpec(const FGameplayEffectSpec& EffectSpec, const FHitResult& HitResult, AActor* Source, AActor* Target, const float EffectLevel);
    
};

