#pragma once
#include "CoreMinimal.h"
#include "ORAbilityPreview.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "Kismet/GameplayStaticsTypes.h"
#include "ORFireableInventoryItemPreview.generated.h"

class USQFiringResultComponent;
class UProjectileMovementComponent;
class ASQProjectile;
class ASQFireableInventoryItem;

UCLASS(Blueprintable)
class OREGON_API UORFireableInventoryItemPreview : public UORAbilityPreview {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASQFireableInventoryItem* ParentFireableItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQFiringResultComponent* FiringResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ModeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckAllowBounce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBounces;
    
public:
    UORFireableInventoryItemPreview();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldBounce(const FHitResult& Hit, ASQProjectile* ProjectileCDO) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPreviewSimFrequency(const float InPreviewSimFrequency);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxPreviewSimTime(const float InMaxPreviewSimTime);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetProjectileLaunchSpeed(ASQProjectile* ProjectileCDO) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPreviewSimFrequency() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPredictProjectilePathResult> GetPredictProjectilePathResults() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxPreviewSimTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPredictProjectilePathResult GetLastPredictProjectilePathResults() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USQFiringResultComponent* GetFireResult();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector CalculateBounceVelocity(const FHitResult& Hit, const FVector& BounceVelocity, UProjectileMovementComponent* ProjectileMovementComponent) const;
    
};

