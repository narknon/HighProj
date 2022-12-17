#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ItemEventData.h"
#include "ORWidget_PrimaryAmmo.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORWidget_PrimaryAmmo : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KennyLow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SweezyLow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GusLow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CreatureLow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LezduitLow;
    
    UORWidget_PrimaryAmmo();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdatePrimaryAmmoHUD(int32 CurrentAmmo, int32 MaxAmmo, int32 ReserveAmmo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleGunEvents(TArray<FItemEventData> ActiveItemEvents);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentLowAmmoValue();
    
};

