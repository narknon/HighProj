#pragma once
#include "CoreMinimal.h"
#include "SQProjectileImpactInterface.h"
#include "ORBaseDamageable.h"
#include "ORDamageable_OneWayShield.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORDamageable_OneWayShield : public AORBaseDamageable, public ISQProjectileImpactInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostDeathDestroyDelay;
    
    AORDamageable_OneWayShield();
    UFUNCTION(BlueprintCallable)
    void DestroyShield();
    
    
    // Fix for true pure virtual functions not being implemented
};

