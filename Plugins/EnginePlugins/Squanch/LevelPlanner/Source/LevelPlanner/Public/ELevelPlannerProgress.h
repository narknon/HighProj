#pragma once
#include "CoreMinimal.h"
#include "ELevelPlannerProgress.generated.h"

UENUM(BlueprintType)
enum class ELevelPlannerProgress : uint8 {
    None,
    AnimTagged,
    Archive,
    AudioCue,
    Deleted,
    Edited,
    Improv,
    InGame,
    NotNeeded,
    NotRecorded,
    Old,
    ReEdit,
    ReRecord,
    Recorded,
    Rewrite,
    Robo,
    RoboInterval,
    RoboSeq,
    Sequenced,
    Unwritten,
    Written,
    Rename,
    Replace,
    NewRobo,
};

