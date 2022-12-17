#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ORProjectilePoolSettings.generated.h"

class ASQProjectile;

UCLASS(Blueprintable, DefaultConfig, NotPlaceable, Config=Squanch)
class OREGON_API UORProjectilePoolSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<ASQProjectile>, int32> MinProjectilesPerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<ASQProjectile>, int32> MaxProjectilesPerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<ASQProjectile>, int32> PrespawnedProjectilesPerClass;
    
    UORProjectilePoolSettings();
};

