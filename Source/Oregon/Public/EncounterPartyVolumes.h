#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EncounterPartyVolumes.generated.h"

class AVolume;

USTRUCT(BlueprintType)
struct OREGON_API FEncounterPartyVolumes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PartyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVolume*> HomeAreaVolumes;
    
    FEncounterPartyVolumes();
};

