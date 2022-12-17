#pragma once
#include "CoreMinimal.h"
#include "SQFireableInventoryItem.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "ItemAimModifiers.h"
#include "GameplayTagContainer.h"
#include "ETransformState.h"
#include "ORFireableInventoryItem.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORFireableInventoryItem : public ASQFireableInventoryItem, public IGenericTeamAgentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReloadNextFire;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<ETransformState>, FItemAimModifiers> AimModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitScanImpactAcidSize;
    
    AORFireableInventoryItem();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetADSState(bool ADSOn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetFiringLocation(FName SocketName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void GameplayTagsChanged(const FGameplayTag Tag, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_GameplayTagChanged(const FGameplayTag Tag, const bool bAdded);
    
    
    // Fix for true pure virtual functions not being implemented
};

