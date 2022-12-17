#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "EFactionTeamIDs.h"
#include "ORTeamAttitude.generated.h"

USTRUCT(BlueprintType)
struct OREGON_API FORTeamAttitude {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EFactionTeamIDs>, TEnumAsByte<ETeamAttitude::Type>> AttitudeTowards;
    
    FORTeamAttitude();
};

