#pragma once
#include "CoreMinimal.h"
#include "MercunaNavTestingActor.h"
#include "MercunaNavTestingActor.h"
#include "MercunaNavOctreeTestingActor.generated.h"

class AMercunaNavOctreeTestingActor;

UCLASS(Blueprintable)
class MERCUNA_API AMercunaNavOctreeTestingActor : public AMercunaNavTestingActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    AMercunaNavOctreeTestingActor* OtherActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightChangePenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAcceleration;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    AMercunaNavTestingActor::FMercunaPathUpdated OnPathUpdated;
    
    AMercunaNavOctreeTestingActor();
};

