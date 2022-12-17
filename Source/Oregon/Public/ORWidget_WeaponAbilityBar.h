#pragma once
#include "CoreMinimal.h"
#include "ORWidget.h"
#include "ORWidget_WeaponAbilityBar.generated.h"

class AORPlayerCharacter;

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORWidget_WeaponAbilityBar : public UORWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AORPlayerCharacter* CachedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CachedAmmoAmount;
    
public:
    UORWidget_WeaponAbilityBar();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponAbilityProgressChanged(float ProgressPCT);
    
};

