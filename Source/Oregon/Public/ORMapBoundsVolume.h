#pragma once
#include "CoreMinimal.h"
#include "ORTriggerVolume.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ORMapLocationInfo.h"
#include "ORMapBoundsVolume.generated.h"

class UObject;
class AActor;
class AORMapBoundsVolume;
class UTexture2D;

UCLASS(Blueprintable)
class OREGON_API AORMapBoundsVolume : public AORTriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MapTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> LootActorClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> PortalActorClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> CheckpointActorClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORMapLocationInfo> LootLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORMapLocationInfo> PortalLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORMapLocationInfo> CheckpointLocations;
    
    AORMapBoundsVolume();
    UFUNCTION(BlueprintCallable)
    FVector2D GetNormalizedPositionFromWorldLocation(const FVector& Location);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AORMapBoundsVolume* GetActiveMapBoundsInfo(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void FindAllMapActors();
    
};

