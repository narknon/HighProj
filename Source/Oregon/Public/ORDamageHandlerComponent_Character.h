#pragma once
#include "CoreMinimal.h"
#include "ORDamageHandlerComponent.h"
#include "GameplayTagContainer.h"
#include "OnHealthTankEmptiedDelegate.h"
#include "ORDamageHandlerComponent_Character.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORDamageHandlerComponent_Character : public UORDamageHandlerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHealthTankEmptied OnHealthTankEmptied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowTankDamageRollover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DamageRolloverWhiteList;
    
    UORDamageHandlerComponent_Character();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    float GetCurrentHealthTankMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    float GetCurrentHealthTankHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentHealthAndArmorValues(float& CurrentArmor, float& MaxArmor, float& CurrentHealth, float& MaxHealth);
    
};

