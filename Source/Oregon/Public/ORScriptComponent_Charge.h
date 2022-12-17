#pragma once
#include "CoreMinimal.h"
#include "ORScriptComponent.h"
#include "GameplayTagContainer.h"
#include "ORScriptComponent_Charge.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORScriptComponent_Charge : public UORScriptComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinChargeLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxChargeLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ChargeLevelChangeEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentChargeLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
public:
    UORScriptComponent_Charge();
    UFUNCTION(BlueprintCallable)
    void StopCharge();
    
    UFUNCTION(BlueprintCallable)
    void StartCharge();
    
    UFUNCTION(BlueprintCallable)
    void SetChargeLevel(int32 ChargeLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMaxChargeLevel();
    
};

