#pragma once
#include "CoreMinimal.h"
#include "ORTriggerVolume.h"
#include "OREncounterBoundaryVolume.generated.h"

UCLASS(Blueprintable)
class OREGON_API AOREncounterBoundaryVolume : public AORTriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bContainsPlayer;
    
    AOREncounterBoundaryVolume();
};

