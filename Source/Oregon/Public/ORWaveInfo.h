#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORSpawnInfo.h"
#include "ORReinforcementInfo.h"
#include "GameplayTagContainer.h"
#include "EORSpawnTriggerTypes.h"
#include "ORWaveInfo.generated.h"

class ASQInventoryItem_WarpTicket;
class UDataTable;

USTRUCT(BlueprintType)
struct OREGON_API FORWaveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WaveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PartyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORSpawnInfo> SpawnInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WaveItemDropOverrideTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASQInventoryItem_WarpTicket> WarpTicketClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaveStartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AggroSlotsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORSpawnTriggerTypes AdvanceTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdvanceTriggerValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowAttractionPointsOutsidePartyHomeAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORReinforcementInfo ReinforcementInfo;
    
    FORWaveInfo();
};

