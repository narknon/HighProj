#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORCompassActorInterface.h"
#include "GameplayTagContainer.h"
#include "OnOtherPortalChangedDelegate.h"
#include "ORStreamingPortal.generated.h"

class UORTriggerVolumeComponent;
class UORPlayerCompassMarkerComponent_Portal;
class UORStreamingAddressBookPortalComponent;
class UORStreamingPortalThresholdComponent;
class UStaticMeshComponent;
class UORStreamingPortalCollisionComponent;
class UMaterialInstanceDynamic;
class USceneCaptureComponent2D;

UCLASS(Blueprintable)
class OREGON_API AORStreamingPortal : public AActor, public IORCompassActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PortalSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORStreamingPortalCollisionComponent* PortalSurfaceCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* NearPlaneClip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORStreamingPortalThresholdComponent* ThresholdComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORStreamingAddressBookPortalComponent* AddressBookComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* CaptureComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORTriggerVolumeComponent* DiscoveryTrigger;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PortalTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHousePortal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EyeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VPWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VPHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AutomaticPortalTagLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName PortalRegionAddress;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOtherPortalChanged PortalBeginLoading;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOtherPortalChanged PortalLinkChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOtherPortalChanged PortalFinishedLoading;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag OtherPortalTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRendering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* PortalSurfaceMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* PortalNearClipMaterial;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORPlayerCompassMarkerComponent_Portal* CompassMarker;
    
    AORStreamingPortal();
    UFUNCTION(BlueprintCallable)
    void SetPortalStreamingWithAddress(const FGameplayTag& InPortalTag, const FName& InPortalRegionAddress);
    
    UFUNCTION(BlueprintCallable)
    void SetPortalStreaming(const FGameplayTag& InPortalTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTeleported();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPortalDiscovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPortalClosed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishLoading();
    
    UFUNCTION(BlueprintCallable)
    void OnEnteredDiscoveryTrigger(AActor* OtherActor, int32 VolumeIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginLoading();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetPortalTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetDestinationPortalTag() const;
    
    UFUNCTION(BlueprintCallable)
    void DiscoverPortal();
    
    UFUNCTION(BlueprintCallable)
    void DebugForceTeleport();
    
    UFUNCTION(BlueprintCallable)
    void ClearPortalStreaming();
    
    
    // Fix for true pure virtual functions not being implemented
};

