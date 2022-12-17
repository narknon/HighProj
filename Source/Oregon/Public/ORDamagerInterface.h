#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "ORDamagerInterface.generated.h"

class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UORDamagerInterface : public UInterface {
    GENERATED_BODY()
};

class IORDamagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDamageInflicted(UObject* DamageVictim, const FHitResult& HitResult, float Damage, const FGameplayTagContainer& DamageTags, const bool WasKillingBlow);
    
};

