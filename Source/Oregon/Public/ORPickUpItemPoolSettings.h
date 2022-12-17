#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ORPickUpItemPoolSettings.generated.h"

class AORPickupBase;

UCLASS(Blueprintable, DefaultConfig, NotPlaceable, Config=Squanch)
class OREGON_API UORPickUpItemPoolSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AORPickupBase>, int32> MinPickUpItemsPerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AORPickupBase>, int32> MaxPickUpItemsPerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AORPickupBase>> SpawnMinOfClassOnStartup;
    
    UORPickUpItemPoolSettings();
};

