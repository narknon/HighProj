#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ORTeamAttitude.h"
#include "EFactionTeamIDs.h"
#include "ORTeamAttitudesData.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORTeamAttitudesData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EFactionTeamIDs>, FORTeamAttitude> TeamAttitudes;
    
    UORTeamAttitudesData();
};

