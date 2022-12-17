#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EncounterPartyEnemies.generated.h"

class AORAICharacter;

USTRUCT(BlueprintType)
struct OREGON_API FEncounterPartyEnemies {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PartyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AORAICharacter*> Enemies;
    
    FEncounterPartyEnemies();
};

