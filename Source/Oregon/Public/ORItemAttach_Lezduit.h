#pragma once
#include "CoreMinimal.h"
#include "ORItemAttach_Player.h"
#include "UObject/NoExportTypes.h"
#include "ORItemAttach_Lezduit.generated.h"

class UORFireLoop_LezduitPrimary;
class UCurveFloat;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class AORItemAttach_Lezduit : public AORItemAttach_Player {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> LaserFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FVector> LastFrameTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UORFireLoop_LezduitPrimary* PrimaryFireLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* LaserFXType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LaserChargeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaserMovementAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LaserSourceParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LaserTargetParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LaserFXAttachPoint;
    
public:
    AORItemAttach_Lezduit();
};

