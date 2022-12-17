#pragma once
#include "CoreMinimal.h"
#include "EInputDeviceType.generated.h"

UENUM(BlueprintType)
enum EInputDeviceType {
    EIDT_KeyboardMouse,
    EIDT_Xbox,
    EIDT_Playstation,
    EIDT_Switch,
    EIDT_Stadia,
    EIDT_MAX UMETA(Hidden),
};

