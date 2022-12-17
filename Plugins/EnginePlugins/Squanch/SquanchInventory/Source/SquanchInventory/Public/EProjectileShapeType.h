#pragma once
#include "CoreMinimal.h"
#include "EProjectileShapeType.generated.h"

UENUM(BlueprintType)
enum EProjectileShapeType {
    EPST_Box,
    EPST_Sphere,
    EPST_Capsule,
    EPST_MAX UMETA(Hidden),
};

