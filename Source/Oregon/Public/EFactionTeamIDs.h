#pragma once
#include "CoreMinimal.h"
#include "EFactionTeamIDs.generated.h"

UENUM(BlueprintType)
enum EFactionTeamIDs {
    FTID_Player,
    FTID_Cartel,
    FTID_FaunaPredator,
    FTID_FaunaPrey,
    FTID_PlayerMindControl,
    FTID_Robot,
    FTID_CartelNeutral,
    FTID_DamagedRobot,
    FTID_AlwaysNeutral = 0xFD,
    FTID_AlwaysHostile,
    FTID_AlwaysFriendly,
    FTID_MAX UMETA(Hidden),
};

