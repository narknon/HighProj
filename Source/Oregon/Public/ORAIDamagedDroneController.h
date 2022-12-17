#pragma once
#include "CoreMinimal.h"
#include "ORAIWeaponizedController.h"
#include "ORAIDamagedDroneController.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORAIDamagedDroneController : public AORAIWeaponizedController {
    GENERATED_BODY()
public:
    AORAIDamagedDroneController();
};

