#pragma once
#include "CoreMinimal.h"
#include "ORExplosionActor.h"
#include "ScalableFloat.h"
#include "ORExplosionActor_Cone.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORExplosionActor_Cone : public AORExplosionActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ConeArc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ConeXPosOffset;
    
    AORExplosionActor_Cone();
};

