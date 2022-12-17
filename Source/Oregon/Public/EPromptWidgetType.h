#pragma once
#include "CoreMinimal.h"
#include "EPromptWidgetType.generated.h"

UENUM(BlueprintType)
enum EPromptWidgetType {
    EPWT_None,
    EPWT_Interaction,
    EPWT_Anchor,
    EPWT_Zipline,
    EPWT_Magwall,
    EPWT_Waypoint,
    EPWT_Grenade,
    EPWT_PurchaseItem,
    EPWT_InfoPanel,
    EPWT_Melee,
    EPWT_Dialogue,
    EPWT_CompassMarker,
    EPWT_Detective,
    EPWT_Speaker,
    EPWT_TetherGrab,
    EPWT_CompletedAnalysis,
    EPWT_Loading,
    EPWT_MAX UMETA(Hidden),
};

