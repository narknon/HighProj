#pragma once
#include "CoreMinimal.h"
#include "EApplicationType.generated.h"

UENUM(BlueprintType)
enum EApplicationType {
    EAT_All,
    EAT_Enemy,
    EAT_Friendly,
    EAT_FriendlyAndSelf,
    EAT_Self,
    EAT_AllButSelf,
    EAT_Max,
};

