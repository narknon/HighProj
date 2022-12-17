#pragma once
#include "CoreMinimal.h"
#include "ORWidget.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GenericTeamAgentInterface.h"
#include "ORWidget_DynamicCrosshairBase.generated.h"

class UObject;
class AORPlayerCharacter;

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORWidget_DynamicCrosshairBase : public UORWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMinimal;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AORPlayerCharacter> CachedPlayer;
    
    UORWidget_DynamicCrosshairBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateGatterallCount(int32 NewCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCrosshairSpread(float Spread);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateAbilityProgress(float NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMinimalMode(bool bIsMinimal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTargetUpdated(bool bHasTarget, TEnumAsByte<ETeamAttitude::Type> TargetAttitude);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpreadUpdated(float CrosshairSpread);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageInflicted(UObject* Damaged, const FHitResult& HitResult, float Damage, const FGameplayTagContainer& DamageTags, const bool WasKillingBlow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCrosshairVisibilityChanged(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void ChangeVisibility(bool bIsVisible);
    
};

