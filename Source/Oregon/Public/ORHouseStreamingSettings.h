#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "HouseStreamingStateInfo.h"
#include "EORHouseExteriorLocation.h"
#include "ORHouseStreamingSettings.generated.h"

class UWorld;

UCLASS(Blueprintable, DefaultConfig, NotPlaceable, Config=Squanch)
class OREGON_API UORHouseStreamingSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> HouseMasterLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TMap<EORHouseExteriorLocation, FHouseStreamingStateInfo> AlwaysLoadedStateInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TMap<EORHouseExteriorLocation, FHouseStreamingStateInfo> PortalClosedStateInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    EORHouseExteriorLocation DefaultHouseExteriorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    EORHouseExteriorLocation DefaultHouseExteriorLocationDemo;
    
    UORHouseStreamingSettings();
};

