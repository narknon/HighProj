#pragma once
#include "CoreMinimal.h"
#include "EORMapVolumeUsageType.generated.h"

UENUM(BlueprintType)
enum class EORMapVolumeUsageType : uint8 {
    None,
    MeshData,
    Notification,
    MeshDataAndNotification,
};

