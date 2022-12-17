#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ORHunterChallengeSettings.generated.h"

class UORHunterChallengeSubsystemHandler;

UCLASS(Blueprintable, DefaultConfig, NotPlaceable, Config=Squanch)
class OREGON_API UORHunterChallengeSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UORHunterChallengeSubsystemHandler> Handler;
    
    UORHunterChallengeSettings();
};

