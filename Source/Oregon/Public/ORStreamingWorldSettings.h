#pragma once
#include "CoreMinimal.h"
#include "ORStreamingWorldSettings.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FORStreamingWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> WorldRef;
    
    OREGON_API FORStreamingWorldSettings();
};

