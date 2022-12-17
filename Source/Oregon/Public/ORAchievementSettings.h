#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ORAchievementSettings.generated.h"

class UORAchievementSubsystemHandler;

UCLASS(Blueprintable, DefaultConfig, NotPlaceable, Config=Squanch)
class UORAchievementSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UORAchievementSubsystemHandler> Handler;
    
    UORAchievementSettings();
};

