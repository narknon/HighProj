#pragma once
#include "CoreMinimal.h"
#include "EORHouseExteriorLocation.generated.h"

UENUM(BlueprintType)
enum class EORHouseExteriorLocation : uint8 {
    None,
    BlimCity,
    Earth,
    OuterRim,
    Xenoslaughter,
    DestroyedEarth,
};

