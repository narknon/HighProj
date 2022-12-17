#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ORAmbienceParams.generated.h"

class UAkAudioEvent;
class UAkStateValue;

USTRUCT(BlueprintType)
struct OREGON_API FORAmbienceParams : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Enter_AkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Exit_AkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkStateValue> Enter_State;
    
    FORAmbienceParams();
};

