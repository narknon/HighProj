#pragma once
#include "CoreMinimal.h"
#include "EOverlapShape.generated.h"

UENUM(BlueprintType)
enum EOverlapShape {
    EOS_Box,
    EOS_Sphere,
    EOS_Capsule,
    EOS_MAX UMETA(Hidden),
};

