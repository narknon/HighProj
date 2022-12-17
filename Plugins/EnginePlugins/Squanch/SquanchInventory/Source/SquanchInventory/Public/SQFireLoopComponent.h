#pragma once
#include "CoreMinimal.h"
#include "SQFireableItemComponent.h"
#include "SQFireLoopComponent.generated.h"

class USQFireLoopAttributeSet;

UCLASS(Abstract, Blueprintable)
class SQUANCHINVENTORY_API USQFireLoopComponent : public USQFireableItemComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequireAnyResourcesToFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequireFullResourcesToFire;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<USQFireLoopAttributeSet> CachedAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsFiring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsReloading;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldTriggerReloads;
    
    USQFireLoopComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TriggerFiringResult();
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyFireLoopComplete();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReloading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFiring() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasAvailableResource();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetFireRateMod();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndFireLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanFire();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CancelFireLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginFireLoop();
    
};

