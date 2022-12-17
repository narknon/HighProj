#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "OR3DMapMarkerActors.h"
#include "GameplayTagContainer.h"
#include "OR3DMapCaptureSnappedToMarkerDelegateDelegate.h"
#include "OR3DMapCaptureLoadedDelegateDelegate.h"
#include "OR3DMapCaptureActor.generated.h"

class AOR3DMapMarker;
class AOR3DMapVolume;
class UMaterialInterface;
class AStaticMeshActor;
class UDataTable;
class USceneCaptureComponent2D;

UCLASS(Blueprintable)
class OREGON_API AOR3DMapCaptureActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* CaptureComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraPivotOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSnapToNearestMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearestSnapInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnapOutTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnappedMarkerHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MapLegend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MapSpriteMarkerMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* UndiscoveredMeshMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DiscoveredMeshMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOR3DMapVolume* MapPivotRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOR3DMapMarker* SnappedMarkerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOR3DMapMarker* PlayerMarkerActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOR3DMapCaptureLoadedDelegate OnCaptureLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOR3DMapCaptureSnappedToMarkerDelegate OnSnappedToMarker;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOR3DMapCaptureSnappedToMarkerDelegate OnUnsnappedFromMarker;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AOR3DMapVolume*> MapVolumeMeshActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AStaticMeshActor*> CurrentStaticMeshActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FOR3DMapMarkerActors> LegendMarkerActors;
    
public:
    AOR3DMapCaptureActor();
    UFUNCTION(BlueprintCallable)
    void UnsnapFromMarker(AOR3DMapMarker* MapMarker);
    
    UFUNCTION(BlueprintCallable)
    void TeardownLevelCapture();
    
    UFUNCTION(BlueprintCallable)
    void SnapToMarker(AOR3DMapMarker* MapMarker);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupMapMeshActors(const TArray<AActor*>& MapVolumes, const TArray<AActor*>& GateVolumes);
    
    UFUNCTION(BlueprintCallable)
    void SetupMapLegendMarkers();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetupLevelCapture();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetLevelCaptureData();
    
    UFUNCTION(BlueprintCallable)
    void OnStreamableMeshesLoaded();
    
};

