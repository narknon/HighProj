#pragma once
#include "CoreMinimal.h"
#include "ORPickupBase.h"
#include "ORHealthPickupBase.generated.h"

class UORBlinkAndShrinkComponent;
class UPointLightComponent;
class UORSuctionObjectComponent;

UCLASS(Blueprintable)
class OREGON_API AORHealthPickupBase : public AORPickupBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORBlinkAndShrinkComponent* BlinkAndShrinkComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPointLightComponent* PointLightComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORSuctionObjectComponent* SuctionComp;
    
public:
    AORHealthPickupBase();
    UFUNCTION(BlueprintCallable)
    void BlinkAndShrinkCompleted();
    
};

