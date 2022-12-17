#pragma once
#include "CoreMinimal.h"
#include "ORStreamingWorldSettings.h"
#include "ORStreamingMasterWorldSettings.generated.h"

USTRUCT(BlueprintType)
struct FORStreamingMasterWorldSettings : public FORStreamingWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LightingWorldName;
    
    OREGON_API FORStreamingMasterWorldSettings();
};

