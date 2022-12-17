#pragma once
#include "CoreMinimal.h"
#include "ERandomMethod.generated.h"

UENUM(BlueprintType)
namespace ERandomMethod {
    enum Type {
        Shuffle,
        InOrder,
        Random,
    };
}

