#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ORWarpBaseCutSettings.generated.h"

class UMaterialParameterCollection;

UCLASS(Blueprintable, DefaultConfig, NotPlaceable, Config=Squanch)
class OREGON_API UORWarpBaseCutSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialParameterCollection> MaterialCollection;
    
    UORWarpBaseCutSettings();
};

