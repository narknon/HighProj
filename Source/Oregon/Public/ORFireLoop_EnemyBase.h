#pragma once
#include "CoreMinimal.h"
#include "SQFireLoopComponent.h"
#include "ORFireLoop_EnemyBase.generated.h"

class ASQFireableInventoryItem;

UCLASS(Blueprintable)
class OREGON_API UORFireLoop_EnemyBase : public USQFireLoopComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ASQFireableInventoryItem> ParentFireableItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCancelFireLoopOnEndFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetVelocityLookBackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomOffsetTargetRadiusScale;
    
public:
    UORFireLoop_EnemyBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopCleanFireChargeUpFx();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayFireChargeUpFx();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPCTProgressTowardsNextFire() const;
    
};

