#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Curves/CurveFloat.h"
#include "SQGameplayStatics.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "InputCoreTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BossIntroBinding.h"
#include "AimAssistTargetInfo.h"
#include "EORLoadingScreenType.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayEffectTypes.h"
#include "EEmotionState.h"
#include "EInputDeviceType.h"
#include "EInputModeTypes.h"
#include "ETargetFilterTypes.h"
#include "Chaos/ChaosEngineInterface.h"
#include "ORGameplayStatics.generated.h"

class UObject;
class UActorComponent;
class AActor;
class ASQInventoryItem;
class UPrimitiveComponent;
class UWidget;
class UAkSwitchValue;
class UNiagaraSystem;
class ALevelSequenceActor;
class USkeletalMeshComponent;
class UInputComponent;
class ACharacter;
class AMercunaNavOctree;
class AORCharacter;
class APlayerController;
class UORCheatManager;
class UORGlobalEventPayload;
class AORPlayerController;
class AORPlayerCharacter;
class UORSaveGame;
class AORTargetablesManager;
class UORWidget_InteractStationCanvas;
class UUIManagerWidget;
class UMaterialInterface;
class UCurveFloat;
class ALevelScriptActor;

UCLASS(Blueprintable)
class OREGON_API UORGameplayStatics : public USQGameplayStatics {
    GENERATED_BODY()
public:
    UORGameplayStatics();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 WrapInteger(int32 Value, int32 Max);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float WrapAngle(float Angle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UIManager_TriggerBackBehavior(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UIManager_PushWidget(UObject* WorldContextObject, UWidget* WidgetToPush, bool bAutoSetGamepadFocus, bool bAutoSetVisibility, UORWidget_InteractStationCanvas* OptionalInteractionCanvas);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UWidget* UIManager_PopWidget(UObject* WorldContextObject, bool bAutoSetGamepadFocus, bool bAutoSetVisibility, UORWidget_InteractStationCanvas* OptionalInteractionCanvas);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UIManager_PopAllWidgets(UObject* WorldContextObject, bool bAutoSetVisibility, UORWidget_InteractStationCanvas* OptionalInteractionCanvas);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 UIManager_GetWidgetStackCount(UObject* WorldContextObject, UORWidget_InteractStationCanvas* OptionalInteractionCanvas);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UWidget* UIManager_GetTopmostWidget(UObject* WorldContextObject, UORWidget_InteractStationCanvas* OptionalInteractionCanvas);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UWidget* UIManager_GetAutoFocusWidget(UObject* WorldContextObject, UWidget* WidgetToFocus);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool UIManager_AutoFocusWidget(UObject* WorldContextObject, UWidget* WidgetToFocus);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool UIManager_AutoFocusTopWidget(UObject* WorldContextObject, UORWidget_InteractStationCanvas* OptionalInteractionCanvas);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TogglePlayerDebugPathVisual(const UObject* WorldContextObject, float TimeToTrack);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TimedFreezeEffect(UObject* WorldContextObject, float FreezeTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag StringToGameplayTag(const FString& StringOfTag);
    
    UFUNCTION(BlueprintCallable)
    static void StopLoadingScreen();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartBossIntro(UObject* WorldContextObject, ALevelSequenceActor* LevelSequenceActor, TArray<FBossIntroBinding> ActorBindings, FTransform PlayerEndTransform, TArray<AActor*> OptionalDisableCollisionActors);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnRandomBloodDecal(UObject* WorldContextObject, TArray<UMaterialInterface*> BloodDecalMaterials, const FVector& Location, const FVector& Velocity, const FVector& Normal, float BloodDecalLifetime, float BloodDecalFadeTime, FVector DecalScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldSkipBossIntros();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetRenderInDepthPass(UObject* WorldContextObject, UPrimitiveComponent* PrimitiveComp, bool bNewEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerViewTarget(APlayerController* PlayerController, AActor* NewViewTarget);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetPlayerMovementState(UObject* WorldContextObject, bool bEnabled);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetPlayerLocationAndRotation(UObject* WorldContextObject, FVector NewLocation, FRotator NewRotation, bool bResetVelocity);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerFOV(ACharacter* PlayerCharacter, float NewFOV);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerControllerFOV(APlayerController* PlayerController, float NewFOV);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetPlayerAbilityFireState(UObject* WorldContextObject, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetObjectOutline(FGameplayTag OutlineTypeTag, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetItemEmotion(UObject* WorldContextObject, FGameplayTag ItemTag, EEmotionState Emotion);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCurrentCheckpoint(UObject* WorldContextObject, const FGameplayTag& Checkpoint, bool bForceSave);
    
    UFUNCTION(BlueprintCallable)
    static void ResetSweezyRemoteDetonateTime();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReparentActorBlueprint(UObject* WorldContextObject, AActor* Object, UClass* NewParent, const TMap<FName, FName>& ComponentNameMappings);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RebuildMercunaVolume(UObject* WorldContextObject, const FVector& Point);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RebuildMercunaAroundPoint(UObject* WorldContextObject, const FVector& Point, float MaxDistance);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RebuildMercuna(UObject* WorldContextObject, const TArray<AMercunaNavOctree*>& OctreesToBuild);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RaiseError(UObject* WorldContextObject, const FString& ErrorMessage, bool bPrintToLog);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ProjectWorldToScreenBidirectional(APlayerController* Player, const FVector& WorldPosition, FVector2D& ScreenPosition, bool& bTargetBehindCamera, bool bPlayerViewportRelative);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PrintUsability(UObject* WorldContextObject, const FString& String);
    
    UFUNCTION(BlueprintCallable)
    static void PlayStartupMoves(bool bIsXenoslaughter);
    
    UFUNCTION(BlueprintCallable)
    static void PlayLoadingScreen(bool bPlayUntilStopped, float PlayTime, EORLoadingScreenType LoadingScreenType);
    
    UFUNCTION(BlueprintCallable)
    static void KnockupLaunchCharacter(AORCharacter* Character, FVector LaunchVelocity, bool bXYOverride, bool bZOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsXenoslaughterActive(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsVisibleInPlayerCamera(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsVectorAboveThreshold(FVector Vector, float Threshold);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUpgradePieceItem(TSubclassOf<ASQInventoryItem> ItemClass);
    
    UFUNCTION(BlueprintCallable)
    static bool IsStartupMoviePlaying();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayInEditor(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayerAFK(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemPassive(TSubclassOf<ASQInventoryItem> ItemClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemHealthTank(TSubclassOf<ASQInventoryItem> ItemClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemFireable(TSubclassOf<ASQInventoryItem> ItemClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDemo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCurrencyItem(TSubclassOf<ASQInventoryItem> ItemClass);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCharacterWeakpointHit(AORCharacter* Character, const FHitResult& Hit, const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsCharacterAudiblySpeaking(UObject* WorldContextObject, FGameplayTag SpeakerTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsAxisInverted(const UObject* WorldContextObject, FName AxisName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsActorValidAndAlive(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorMovingTowards(AActor* Actor, AActor* Target, float& OutMovementDot, float AcceptanceAngle);
    
    UFUNCTION(BlueprintCallable)
    static bool IsActorInCone(AActor* Actor, FVector ConeStartLocation, FVector Direction, float ConeXPosOffset, float ConeArcRadians);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorFacing(AActor* Actor, AActor* Target, float AngleInDegrees);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAbilitySlotActive(AORCharacter* Character, FName Slot);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void HUD_SetSoftwareCursorPositionIfConsole(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void HUD_SetSoftwareCursorIfConsole(UObject* WorldContextObject, bool bVisible);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void HUD_DisplayHelpTextFromTable(UObject* WorldContextObject, FName DataTableRowName, float DisplayTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void HUD_DisplayHelpText(UObject* WorldContextObject, FText TextToDisplay, float DisplayTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void HUD_ClearHelpText(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool HasSleepingBodies(UObject* WorldContextObject, USkeletalMeshComponent* SkelMeshComp, float BodyPercentage, float VelocityThreshold);
    
    UFUNCTION(BlueprintCallable)
    static bool HasLineOfSightToPlayer(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void GibActorViaParticleSystem(AORCharacter* Actor, UNiagaraSystem* SystemTemplate, bool bDestroyActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UUIManagerWidget* GetUIManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FAimAssistTargetInfo GetTargetInfoFromTargetManager(UObject* WorldContextObject, ETargetFilterTypes TargetFilterType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* GetTargetFromTargetManager(UObject* WorldContextObject, bool bUseLOS, ETargetFilterTypes TargetFilterType);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetTargetCenter(AActor* AimAssistTarget);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetTargetBase(AActor* AimAssistTarget);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AORTargetablesManager* GetTargetablesManager(UObject* WorldContextObject, int32 PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSweezyRemoteDetonateTime();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FString GetSoftSaveFileDebug(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetServerWorldTimeSeconds_Checked(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FString GetSaveFileDebug(UORSaveGame* SaveFile);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FString GetRuntimeSaveFileDebug(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USkeletalMeshComponent* GetPlayerRightArmFromInventory(UObject* InventoryObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USkeletalMeshComponent* GetPlayerLeftArmFromInventory(UObject* InventoryObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TEnumAsByte<EInputModeTypes> GetPlayerInputMode(UObject* WorldContextObject, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetPlayerInputDisabledStates(UObject* WorldContextObject, bool& MovementDisabled, bool& CameraDisabled, bool& AbilitiesDisabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPlayerHealthPercentage(AORPlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPlayerHealth(AORPlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    static float GetPlayerFOV(ACharacter* PlayerCharacter);
    
    UFUNCTION(BlueprintCallable)
    static float GetPlayerControllerFOV(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USkeletalMeshComponent* GetPlayerArmsFromInventory(UObject* InventoryObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AORPlayerCharacter* GetPlayer(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AORPlayerController* GetORPlayerController(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetObjectOutline(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetMeleeTarget(AActor* AimAssistTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetLocalPlayerNickname(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ALevelScriptActor* GetLevelBlueprint(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetKeyFName(const FKey& Key);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TEnumAsByte<EInputDeviceType> GetInputDeviceType(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UInputComponent* GetInputComponent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer GetGameplayTagsFromActor(AActor* ActorWithTags);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FString GetDiskSaveFileDebug(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCurrentSpreadMod(AORPlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCurrentSpread(AORPlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FName GetCurrentCheckpoint(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetClassDefaultObject(UClass* ObjectClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UORCheatManager* GetCheatManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetBestAimLocation(AActor* AimAssistTarget, const FVector& LookDirection, const FVector& LookSource, float AimMaxAngle, UCurveFloat* AdjustmentModCurve);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FGameplayTag> GetAllCheckpoints();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<AActor*> GetAllActorsWithTag(const FGameplayTag& Tag, UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UAkSwitchValue* GetAkSwitchValueForSurface(UObject* WorldContextObject, TEnumAsByte<EPhysicalSurface> Surface);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAkSwitchValue* GetAkSwitchValueForLocomotion(AORCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetAimAssistTargetWithConstraints(AORCharacter* OwningCharacter, const float AimDistance, const float AimMaxAngle, UCurveFloat* AdjustmentModCurve);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FAimAssistTargetInfo GetAimAssistTargetInfo(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* GetAimAssistTarget(UObject* WorldContextObject, bool bUseLOS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GameplayTagToString(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GameplayTagContainerMeetsRequirements(const FGameplayTagContainer& TagContainer, const FGameplayTagRequirements& TagRequirements);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FlipInvertAxis(const UObject* WorldContextObject, FName AxisName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FindFloor(UObject* WorldContextObject, FVector Location, float Distance, FHitResult& OutHitResult, bool& bDidHit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float EvalRuntimeFloatCurve(const FRuntimeFloatCurve& RuntimeFloatCurve, float InTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EnablePlayerInput(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EnableMapRegionDiscoverability(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void EnableActor(AActor* Actor, bool bNewSimulatePhysics);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool DiscoverPortal(UObject* WorldContextObject, FGameplayTag PortalTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DisablePlayerInput_CustomTag(UObject* WorldContextObject, FGameplayTag DisableTagToApply, bool bDisableMovement, bool bDisableCamera, bool bSetInSkippableNarrative);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DisablePlayerInput(UObject* WorldContextObject, bool bDisableMovement, bool bDisableCamera, bool bDisableAbilities, bool bSetInSkippableNarrative);
    
    UFUNCTION(BlueprintCallable)
    static void DisableActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void DebugBreak();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DeactivateArmRig(UObject* WorldContextObject, bool bShowGun);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* CreateZipline(UObject* WorldContextObject, TSubclassOf<AActor> ZiplineType, FVector StartingLocation, FVector EndingLocation, float MinClampDistance, float MaxClampDistanceOffset);
    
    UFUNCTION(BlueprintCallable)
    static UORGlobalEventPayload* CreateEventPayloadObject(TSubclassOf<UORGlobalEventPayload> PayloadType, UObject* Outer);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CopyActorPropertiesAndComponents(UObject* WorldContextObject, AActor* Source, AActor* Destination, const TMap<FName, FName>& ComponentNameMappings, bool bOnlyCopyComponentNameMappings, bool bSkipRerunConstructionScript, bool bApplyRootComponentOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float ConvertToHFOV(float VFOV);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FVector ComputeReflectedProjectileVelocity(UObject* WorldContextObject, const FVector& ProjectileVelocity);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearPlayerDebugPathVisual(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ClearObjectOutline(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool AdjustAimDirection(FVector& OutLocation, ACharacter* AimSource, const FVector& LookSource, const FVector& LookDirection, float AimDistance, float AimMaxAngle, UCurveFloat* AdjustmentModCurve, bool AllowKeyboardMouse);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* AddComponentToActor(AActor* Actor, TSubclassOf<UActorComponent> ComponentClass, bool bManualAttachment, const FTransform& RelativeTransform);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ActivateArmRig(UObject* WorldContextObject, bool bHideGun);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector AccelDecelTowardsVector(FVector CurrentValue, FVector TargetValue, UPARAM(Ref) FVector& Velocity, float MaxSpeed, float Acceleration, float Deceleration, float DeltaTime, float AcceptedErrorTolerance, bool bForceDeceleration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector AccelDecelTowardsAngleVector(FVector CurrentValue, FVector TargetValue, UPARAM(Ref) float& Speed, float MaxSpeed, float Acceleration, float Deceleration, float DeltaTime, bool bForceDeceleration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float AccelDecelTowardsAngle(float CurrentValue, float TargetValue, UPARAM(Ref) float& Speed, float MaxSpeed, float Acceleration, float Deceleration, float DeltaTime, bool bForceDeceleration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float AccelDecelTowards(float CurrentValue, float TargetValue, UPARAM(Ref) float& Speed, float MaxSpeed, float Acceleration, float Deceleration, float DeltaTime, float AcceptedErrorTolerance, bool bForceDeceleration);
    
};

