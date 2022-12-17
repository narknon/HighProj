#pragma once
#include "CoreMinimal.h"
#include "ORTriggerVolume.h"
#include "EORMapVolumeUsageType.h"
#include "OnMapRegionDiscoveredDelegate.h"
#include "Engine/DataTable.h"
#include "OR3DMapVolume.generated.h"

class AActor;

UCLASS(Blueprintable)
class OREGON_API AOR3DMapVolume : public AORTriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle RegionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORMapVolumeUsageType UsageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnloadWhenMeshData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasDiscovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMapRegionDiscovered OnRegionDiscovered;
    
    AOR3DMapVolume();
    UFUNCTION(BlueprintCallable)
    void SetDiscovered(bool bDiscovered);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActorExitMapVolume(AActor* Actor, AORTriggerVolume* Volume);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActorEnterMapVolume(AActor* Actor, AORTriggerVolume* Volume);
    
};

