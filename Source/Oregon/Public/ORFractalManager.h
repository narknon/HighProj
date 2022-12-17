#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "FractalEventDelegate.h"
#include "ORFractalManager.generated.h"

class USceneComponent;
class AORFractalLayer;
class UORTriggerVolumeComponent;
class UParticleSystem;

UCLASS(Blueprintable)
class OREGON_API AORFractalManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFractalEvent OnFractalExitOpenedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFractalEvent OnFractalExitEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOuterLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumInnerLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleIncreaseBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZOffetPerLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPlayerScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FractalCenterOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleFudge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportToOuterDistanceFudge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportToInnerDistanceFudge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityFudge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityLocationFudge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetPlayerScaleOnExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCleanupCenterHoleOnExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AORFractalLayer> DefaultLayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> CenterBeaconClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> CenterHoleCapClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* CenterVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* PlayerTeleportLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORTriggerVolumeComponent* ExitVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AORFractalLayer*> LayerArray;
    
    AORFractalManager();
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerScale(float NewScale);
    
    UFUNCTION(BlueprintCallable)
    void TeleportPlayerToFractal();
    
    UFUNCTION(BlueprintCallable)
    void ResetPlayerTeleportToDefault();
    
    UFUNCTION(BlueprintCallable)
    void RegenerateFractalLayers_BP();
    
    UFUNCTION(BlueprintCallable)
    void RegenerateFractalLayers(TSubclassOf<AORFractalLayer> OverrideLayerClass);
    
    UFUNCTION(BlueprintCallable)
    void OpenFractalExit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerTeleportToFractal(float NewPlayerScale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerScaleUpdated(float NewPlayerScale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFractalTeleport(bool bTeleportToOuter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFractalLayersRegenerated();
    
    UFUNCTION(BlueprintCallable)
    void OnFractalExited(AActor* Actor, int32 VolumeIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFractalExit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeaconLayerShift(int32 NewLayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayLayerIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumLayers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFractalCenter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AORFractalLayer> GetCurrentLayerClass();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCenterBeacon();
    
    UFUNCTION(BlueprintCallable)
    void DestroyCenterHole();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateFractal();
    
    UFUNCTION(BlueprintCallable)
    void AttachActorToLayer(AActor* ActorToAttach, int32 LayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void ActivateFractal();
    
};

