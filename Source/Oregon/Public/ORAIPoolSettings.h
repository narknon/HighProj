#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ORAIPoolSettings.generated.h"

class AORAICharacter;

UCLASS(Blueprintable, DefaultConfig, NotPlaceable, Config=Squanch)
class OREGON_API UORAIPoolSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AORAICharacter>, int32> MinAIsPerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AORAICharacter>, int32> MaxAIsPerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AORAICharacter>, int32> PrespawnedAIsPerClass;
    
    UORAIPoolSettings();
};

