#pragma once
#include "CoreMinimal.h"
#include "ORInteractableComponent_SplineAnchor.h"
#include "SplineAnchorShapeInfo.h"
#include "ORInteractableComponent_MagWallAnchor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORInteractableComponent_MagWallAnchor : public UORInteractableComponent_SplineAnchor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MagWallRoll;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSplineAnchorShapeInfo> GeneratedCollisionCylinderInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionCylinderSize;
    
public:
    UORInteractableComponent_MagWallAnchor();
};

