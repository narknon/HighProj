#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameplayTagContainer.h"
#include "ItemEventData.h"
#include "ORWidget_DynamicCrosshairContainer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORWidget_DynamicCrosshairContainer : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> GunToCrosshairIndex;
    
public:
    UORWidget_DynamicCrosshairContainer();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwapActiveCrosshair(int32 NewActiveCrosshair);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCroshairFocus(bool bFocusBegan);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponAbilityProgressChanged(float ProgressPCT);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleGunEvents(TArray<FItemEventData> ActiveItemEvents);
    
};

