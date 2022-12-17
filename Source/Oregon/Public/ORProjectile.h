#pragma once
#include "CoreMinimal.h"
#include "SQProjectile.h"
#include "ORAbsorptionWeightInterface.h"
#include "UObject/NoExportTypes.h"
#include "EOROverrideProjectileMovementType.h"
#include "ORProjectile.generated.h"

class UItemImpactResult;
class UORSuctionObjectComponent;

UCLASS(Blueprintable)
class OREGON_API AORProjectile : public ASQProjectile, public IORAbsorptionWeightInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePooling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegisterSuction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactAcidSize;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORSuctionObjectComponent* SuctionComp;
    
public:
    AORProjectile();
protected:
    UFUNCTION(BlueprintCallable)
    FVector SweezyReturnMovement(FVector& CurrentLocation, float RemainingTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetProjectileImpactResultOverride(UItemImpactResult* ImpactResultOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideMovementMode(TEnumAsByte<EOROverrideProjectileMovementType> Type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnableParticleSystems(bool bEnableSystems);
    
    UFUNCTION(BlueprintCallable)
    bool ReturnToPool(bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    void ReinitializeMovementComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OverrideMovementModeFeedback(float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnedFromPool();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReturnedToPool();
    
    UFUNCTION(BlueprintCallable)
    void HandleReturnToPool();
    
    
    // Fix for true pure virtual functions not being implemented
};

