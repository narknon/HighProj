#pragma once
#include "CoreMinimal.h"
#include "UtilityInput.h"
#include "AIInputBossPhaseCheck.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UAIInputBossPhaseCheck : public UUtilityInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PhaseNumber;
    
    UAIInputBossPhaseCheck();
};

