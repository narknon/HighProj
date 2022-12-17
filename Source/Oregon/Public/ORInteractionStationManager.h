#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "ORInteractableObjectInterface.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "InteractionStationEnabledStateChangedDelegate.h"
#include "ORInteractionStationManager.generated.h"

class UGameplayEffect;
class USceneComponent;
class UORAkComponent;
class UWidgetComponent;
class UORInteractionStationComponent;
class UORInteractableComponent;
class UArrowComponent;
class USphereComponent;

UCLASS(Blueprintable)
class OREGON_API AORInteractionStationManager : public AActor, public IORInteractableObjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionStationEnabledStateChanged OnStationEnabledChangedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemDetectionSphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* DebugItemDetectionSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* PlayerPositionArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* PlayerExitPositionArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> StationEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredPlayerTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabledOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowManualExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableStationDuringCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExitStationOnDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseExitPositionArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoSetPushPopVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntranceTransitionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseExitTransitionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExitTransitionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLerpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetFOVOnEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOVOnEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOVTransitionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFreeLookOnEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ComponentTransitionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ComponentMoveToCameraSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHidePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnequipWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideHud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisablePlayerCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMaintainPlayerZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableFreeLook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetInputModeUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockPlayerCameraMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClampLookRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UORInteractionStationComponent*> InteractionComponents;
    
    AORInteractionStationManager();
    UFUNCTION(BlueprintCallable)
    void UpdateStationComponents(bool bEnteredStation);
    
    UFUNCTION(BlueprintCallable)
    void ToggleFreeLook();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartExitAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartEntranceAnimation();
    
    UFUNCTION(BlueprintCallable)
    void SetStationEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreLookInput(bool bIgnoreInput);
    
    UFUNCTION(BlueprintCallable)
    void SetExitComponentToFace(USceneComponent* ComponentToFace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PlayerHasTagRequirements();
    
    UFUNCTION(BlueprintCallable)
    void PauseStation(bool bPause);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStationExited();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStationEntered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStationEnabledChanged(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerCombatStateChanged(const bool bInCombat);
    
    UFUNCTION(BlueprintCallable)
    void OnHoveredWidgetChanged(UWidgetComponent* WidgetComponent, UWidgetComponent* PreviousWidgetComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnHealthChanged(float Change, float NewValue, bool Silent);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStateChanged(const bool bInCombat);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NavigateBack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInStation();
    
    UFUNCTION(BlueprintCallable)
    bool GetStationEnabled();
    
    UFUNCTION(BlueprintCallable)
    UORAkComponent* GetORAkComponent();
    
    UFUNCTION(BlueprintCallable)
    UORInteractionStationComponent* GetCurrentInteractionComponent();
    
    UFUNCTION(BlueprintCallable)
    void FocusPreviousComponent();
    
    UFUNCTION(BlueprintCallable)
    void FocusNextComponent();
    
    UFUNCTION(BlueprintCallable)
    void FocusComponent(UORInteractionStationComponent* ComponentToFocus);
    
    UFUNCTION(BlueprintCallable)
    void ExitStation(bool bInstantExit, USceneComponent* OptionalComponentToFace, FVector OffsetFromComponent);
    
    UFUNCTION(BlueprintCallable)
    void ExitAnimComplete();
    
    UFUNCTION(BlueprintCallable)
    void EntranceAnimComplete();
    
    UFUNCTION(BlueprintCallable)
    void EnterStation(bool bInstantEnter, USceneComponent* OverrideComponentToFace);
    
    
    // Fix for true pure virtual functions not being implemented
};

