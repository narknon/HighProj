#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ORSignificanceInterface.h"
#include "UObject/NoExportTypes.h"
#include "ORAIFurgle.generated.h"

class UORTriggerVolumeComponent;

UCLASS(Blueprintable)
class OREGON_API AORAIFurgle : public APawn, public IORSignificanceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BurrowDistanceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRandomizeBurrowDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSignificanceManagement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SignificanceManagementTickThrottleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrottledTickRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SignificanceManagementTickThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutOfSightSigBoost;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORTriggerVolumeComponent* TriggerVolume;
    
public:
    AORAIFurgle();
    
    // Fix for true pure virtual functions not being implemented
};

