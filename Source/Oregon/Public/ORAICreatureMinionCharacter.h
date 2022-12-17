#pragma once
#include "CoreMinimal.h"
#include "ORAICharacter.h"
#include "GameplayTagContainer.h"
#include "ORAICreatureMinionCharacter.generated.h"

class AORCreatureWeaponItem;

UCLASS(Blueprintable)
class OREGON_API AORAICreatureMinionCharacter : public AORAICharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMindControlMinion;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AORCreatureWeaponItem* CreatureWeaponItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer UntargetableEnemyTags;
    
public:
    AORAICreatureMinionCharacter();
    UFUNCTION(BlueprintCallable)
    void SetCreatureWeaponItem(AORCreatureWeaponItem* NewCreatureWeaponItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreatureWeaponItemChanged(AORCreatureWeaponItem* NewCreatureWeaponItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AORCreatureWeaponItem* GetCreatureWeaponItem() const;
    
};

