#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORMeleeableProjectile.h"
#include "ScalableFloat.h"
#include "ORGusMeleeableProjectile.generated.h"

class AORGusDiskProjectile;
class URotatingMovementComponent;

UCLASS(Blueprintable)
class OREGON_API AORGusMeleeableProjectile : public AORMeleeableProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AORGusDiskProjectile> DiskProjectileType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ZModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ZModifierReductionThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ZModifierPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxDistanceToDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URotatingMovementComponent* RotatingMovementComp;
    
public:
    AORGusMeleeableProjectile();
};

