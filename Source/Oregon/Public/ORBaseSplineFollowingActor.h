#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORSignificanceInterface.h"
#include "ORBaseSplineFollowingActor.generated.h"

class UORSplineFollowerComponent;

UCLASS(Blueprintable)
class OREGON_API AORBaseSplineFollowingActor : public AActor, public IORSignificanceInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSignificanceManagement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SignificanceManagementTickThrottleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrottledTickRate;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORSplineFollowerComponent* SplineFollowerComp;
    
    AORBaseSplineFollowingActor();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SignificanceReducedTickStateChanged(bool bFullTickRate, float NewTickInterval);
    
    UFUNCTION(BlueprintCallable)
    void Despawning();
    
    
    // Fix for true pure virtual functions not being implemented
};

