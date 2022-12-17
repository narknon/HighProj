#pragma once
#include "CoreMinimal.h"
#include "WaveSpeakerData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct OREGON_API FWaveSpeakerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Wave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UObject*> WavePossessionMap;
    
    FWaveSpeakerData();
};

