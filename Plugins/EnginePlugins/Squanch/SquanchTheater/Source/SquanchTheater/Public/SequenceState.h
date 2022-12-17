#pragma once
#include "CoreMinimal.h"
#include "SequenceState.generated.h"

USTRUCT(BlueprintType)
struct FSequenceState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlaying;
    
    SQUANCHTHEATER_API FSequenceState();
};

