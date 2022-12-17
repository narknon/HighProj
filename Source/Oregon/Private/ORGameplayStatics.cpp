#include "ORGameplayStatics.h"
#include "Templates/SubclassOf.h"

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

int32 UORGameplayStatics::WrapInteger(int32 Value, int32 Max) {
    return 0;
}

float UORGameplayStatics::WrapAngle(float Angle) {
    return 0.0f;
}

void UORGameplayStatics::UIManager_TriggerBackBehavior(UObject* WorldContextObject) {
}

void UORGameplayStatics::UIManager_PushWidget(UObject* WorldContextObject, UWidget* WidgetToPush, bool bAutoSetGamepadFocus, bool bAutoSetVisibility, UORWidget_InteractStationCanvas* OptionalInteractionCanvas) {
}

UWidget* UORGameplayStatics::UIManager_PopWidget(UObject* WorldContextObject, bool bAutoSetGamepadFocus, bool bAutoSetVisibility, UORWidget_InteractStationCanvas* OptionalInteractionCanvas) {
    return NULL;
}

void UORGameplayStatics::UIManager_PopAllWidgets(UObject* WorldContextObject, bool bAutoSetVisibility, UORWidget_InteractStationCanvas* OptionalInteractionCanvas) {
}

int32 UORGameplayStatics::UIManager_GetWidgetStackCount(UObject* WorldContextObject, UORWidget_InteractStationCanvas* OptionalInteractionCanvas) {
    return 0;
}

UWidget* UORGameplayStatics::UIManager_GetTopmostWidget(UObject* WorldContextObject, UORWidget_InteractStationCanvas* OptionalInteractionCanvas) {
    return NULL;
}

UWidget* UORGameplayStatics::UIManager_GetAutoFocusWidget(UObject* WorldContextObject, UWidget* WidgetToFocus) {
    return NULL;
}

bool UORGameplayStatics::UIManager_AutoFocusWidget(UObject* WorldContextObject, UWidget* WidgetToFocus) {
    return false;
}

bool UORGameplayStatics::UIManager_AutoFocusTopWidget(UObject* WorldContextObject, UORWidget_InteractStationCanvas* OptionalInteractionCanvas) {
    return false;
}

void UORGameplayStatics::TogglePlayerDebugPathVisual(const UObject* WorldContextObject, float TimeToTrack) {
}

void UORGameplayStatics::TimedFreezeEffect(UObject* WorldContextObject, float FreezeTime) {
}

FGameplayTag UORGameplayStatics::StringToGameplayTag(const FString& StringOfTag) {
    return FGameplayTag{};
}

void UORGameplayStatics::StopLoadingScreen() {
}

void UORGameplayStatics::StartBossIntro(UObject* WorldContextObject, ALevelSequenceActor* LevelSequenceActor, TArray<FBossIntroBinding> ActorBindings, FTransform PlayerEndTransform, TArray<AActor*> OptionalDisableCollisionActors) {
}

void UORGameplayStatics::SpawnRandomBloodDecal(UObject* WorldContextObject, TArray<UMaterialInterface*> BloodDecalMaterials, const FVector& Location, const FVector& Velocity, const FVector& Normal, float BloodDecalLifetime, float BloodDecalFadeTime, FVector DecalScale) {
}

bool UORGameplayStatics::ShouldSkipBossIntros() {
    return false;
}

void UORGameplayStatics::SetRenderInDepthPass(UObject* WorldContextObject, UPrimitiveComponent* PrimitiveComp, bool bNewEnable) {
}

void UORGameplayStatics::SetPlayerViewTarget(APlayerController* PlayerController, AActor* NewViewTarget) {
}

void UORGameplayStatics::SetPlayerMovementState(UObject* WorldContextObject, bool bEnabled) {
}

void UORGameplayStatics::SetPlayerLocationAndRotation(UObject* WorldContextObject, FVector NewLocation, FRotator NewRotation, bool bResetVelocity) {
}

void UORGameplayStatics::SetPlayerFOV(ACharacter* PlayerCharacter, float NewFOV) {
}

void UORGameplayStatics::SetPlayerControllerFOV(APlayerController* PlayerController, float NewFOV) {
}

void UORGameplayStatics::SetPlayerAbilityFireState(UObject* WorldContextObject, bool bEnabled) {
}

void UORGameplayStatics::SetObjectOutline(FGameplayTag OutlineTypeTag, AActor* Actor) {
}

void UORGameplayStatics::SetItemEmotion(UObject* WorldContextObject, FGameplayTag ItemTag, EEmotionState Emotion) {
}

void UORGameplayStatics::SetCurrentCheckpoint(UObject* WorldContextObject, const FGameplayTag& Checkpoint, bool bForceSave) {
}

void UORGameplayStatics::ResetSweezyRemoteDetonateTime() {
}

void UORGameplayStatics::ReparentActorBlueprint(UObject* WorldContextObject, AActor* Object, UClass* NewParent, const TMap<FName, FName>& ComponentNameMappings) {
}

void UORGameplayStatics::RebuildMercunaVolume(UObject* WorldContextObject, const FVector& Point) {
}

void UORGameplayStatics::RebuildMercunaAroundPoint(UObject* WorldContextObject, const FVector& Point, float MaxDistance) {
}

void UORGameplayStatics::RebuildMercuna(UObject* WorldContextObject, const TArray<AMercunaNavOctree*>& OctreesToBuild) {
}

void UORGameplayStatics::RaiseError(UObject* WorldContextObject, const FString& ErrorMessage, bool bPrintToLog) {
}

bool UORGameplayStatics::ProjectWorldToScreenBidirectional(APlayerController* Player, const FVector& WorldPosition, FVector2D& ScreenPosition, bool& bTargetBehindCamera, bool bPlayerViewportRelative) {
    return false;
}

void UORGameplayStatics::PrintUsability(UObject* WorldContextObject, const FString& String) {
}

void UORGameplayStatics::PlayStartupMoves(bool bIsXenoslaughter) {
}

void UORGameplayStatics::PlayLoadingScreen(bool bPlayUntilStopped, float PlayTime, EORLoadingScreenType LoadingScreenType) {
}

void UORGameplayStatics::KnockupLaunchCharacter(AORCharacter* Character, FVector LaunchVelocity, bool bXYOverride, bool bZOverride) {
}

bool UORGameplayStatics::IsXenoslaughterActive(UObject* WorldContextObject) {
    return false;
}

bool UORGameplayStatics::IsVisibleInPlayerCamera(AActor* Actor) {
    return false;
}

bool UORGameplayStatics::IsVectorAboveThreshold(FVector Vector, float Threshold) {
    return false;
}

bool UORGameplayStatics::IsUpgradePieceItem(TSubclassOf<ASQInventoryItem> ItemClass) {
    return false;
}

bool UORGameplayStatics::IsStartupMoviePlaying() {
    return false;
}

bool UORGameplayStatics::IsPlayInEditor(const UObject* WorldContextObject) {
    return false;
}

bool UORGameplayStatics::IsPlayerAFK(UObject* WorldContextObject) {
    return false;
}

bool UORGameplayStatics::IsItemPassive(TSubclassOf<ASQInventoryItem> ItemClass) {
    return false;
}

bool UORGameplayStatics::IsItemHealthTank(TSubclassOf<ASQInventoryItem> ItemClass) {
    return false;
}

bool UORGameplayStatics::IsItemFireable(TSubclassOf<ASQInventoryItem> ItemClass) {
    return false;
}

bool UORGameplayStatics::IsDemo() {
    return false;
}

bool UORGameplayStatics::IsCurrencyItem(TSubclassOf<ASQInventoryItem> ItemClass) {
    return false;
}

bool UORGameplayStatics::IsCharacterWeakpointHit(AORCharacter* Character, const FHitResult& Hit, const FGameplayTagContainer& DamageTags) {
    return false;
}

bool UORGameplayStatics::IsCharacterAudiblySpeaking(UObject* WorldContextObject, FGameplayTag SpeakerTag) {
    return false;
}

bool UORGameplayStatics::IsAxisInverted(const UObject* WorldContextObject, FName AxisName) {
    return false;
}

bool UORGameplayStatics::IsActorValidAndAlive(AActor* Actor) {
    return false;
}

bool UORGameplayStatics::IsActorMovingTowards(AActor* Actor, AActor* Target, float& OutMovementDot, float AcceptanceAngle) {
    return false;
}

bool UORGameplayStatics::IsActorInCone(AActor* Actor, FVector ConeStartLocation, FVector Direction, float ConeXPosOffset, float ConeArcRadians) {
    return false;
}

bool UORGameplayStatics::IsActorFacing(AActor* Actor, AActor* Target, float AngleInDegrees) {
    return false;
}

bool UORGameplayStatics::IsAbilitySlotActive(AORCharacter* Character, FName Slot) {
    return false;
}

void UORGameplayStatics::HUD_SetSoftwareCursorPositionIfConsole(UObject* WorldContextObject) {
}

void UORGameplayStatics::HUD_SetSoftwareCursorIfConsole(UObject* WorldContextObject, bool bVisible) {
}

void UORGameplayStatics::HUD_DisplayHelpTextFromTable(UObject* WorldContextObject, FName DataTableRowName, float DisplayTime) {
}

void UORGameplayStatics::HUD_DisplayHelpText(UObject* WorldContextObject, FText TextToDisplay, float DisplayTime) {
}

void UORGameplayStatics::HUD_ClearHelpText(UObject* WorldContextObject) {
}

bool UORGameplayStatics::HasSleepingBodies(UObject* WorldContextObject, USkeletalMeshComponent* SkelMeshComp, float BodyPercentage, float VelocityThreshold) {
    return false;
}

bool UORGameplayStatics::HasLineOfSightToPlayer(AActor* Actor) {
    return false;
}

void UORGameplayStatics::GibActorViaParticleSystem(AORCharacter* Actor, UNiagaraSystem* SystemTemplate, bool bDestroyActor) {
}

UUIManagerWidget* UORGameplayStatics::GetUIManager(UObject* WorldContextObject) {
    return NULL;
}

FAimAssistTargetInfo UORGameplayStatics::GetTargetInfoFromTargetManager(UObject* WorldContextObject, ETargetFilterTypes TargetFilterType) {
    return FAimAssistTargetInfo{};
}

AActor* UORGameplayStatics::GetTargetFromTargetManager(UObject* WorldContextObject, bool bUseLOS, ETargetFilterTypes TargetFilterType) {
    return NULL;
}

FVector UORGameplayStatics::GetTargetCenter(AActor* AimAssistTarget) {
    return FVector{};
}

FVector UORGameplayStatics::GetTargetBase(AActor* AimAssistTarget) {
    return FVector{};
}

AORTargetablesManager* UORGameplayStatics::GetTargetablesManager(UObject* WorldContextObject, int32 PlayerId) {
    return NULL;
}

float UORGameplayStatics::GetSweezyRemoteDetonateTime() {
    return 0.0f;
}

FString UORGameplayStatics::GetSoftSaveFileDebug(UObject* WorldContextObject) {
    return TEXT("");
}

float UORGameplayStatics::GetServerWorldTimeSeconds_Checked(const UObject* WorldContextObject) {
    return 0.0f;
}

FString UORGameplayStatics::GetSaveFileDebug(UORSaveGame* SaveFile) {
    return TEXT("");
}

FString UORGameplayStatics::GetRuntimeSaveFileDebug(UObject* WorldContextObject) {
    return TEXT("");
}

USkeletalMeshComponent* UORGameplayStatics::GetPlayerRightArmFromInventory(UObject* InventoryObject) {
    return NULL;
}

USkeletalMeshComponent* UORGameplayStatics::GetPlayerLeftArmFromInventory(UObject* InventoryObject) {
    return NULL;
}

TEnumAsByte<EInputModeTypes> UORGameplayStatics::GetPlayerInputMode(UObject* WorldContextObject, APlayerController* PlayerController) {
    return InputMode_None;
}

void UORGameplayStatics::GetPlayerInputDisabledStates(UObject* WorldContextObject, bool& MovementDisabled, bool& CameraDisabled, bool& AbilitiesDisabled) {
}

float UORGameplayStatics::GetPlayerHealthPercentage(AORPlayerCharacter* Player) {
    return 0.0f;
}

float UORGameplayStatics::GetPlayerHealth(AORPlayerCharacter* Player) {
    return 0.0f;
}

float UORGameplayStatics::GetPlayerFOV(ACharacter* PlayerCharacter) {
    return 0.0f;
}

float UORGameplayStatics::GetPlayerControllerFOV(APlayerController* PlayerController) {
    return 0.0f;
}

USkeletalMeshComponent* UORGameplayStatics::GetPlayerArmsFromInventory(UObject* InventoryObject) {
    return NULL;
}

AORPlayerCharacter* UORGameplayStatics::GetPlayer(UObject* WorldContextObject) {
    return NULL;
}

AORPlayerController* UORGameplayStatics::GetORPlayerController(UObject* WorldContextObject) {
    return NULL;
}

FGameplayTag UORGameplayStatics::GetObjectOutline(AActor* Actor) {
    return FGameplayTag{};
}

FVector UORGameplayStatics::GetMeleeTarget(AActor* AimAssistTarget) {
    return FVector{};
}

FString UORGameplayStatics::GetLocalPlayerNickname(UObject* WorldContextObject) {
    return TEXT("");
}

ALevelScriptActor* UORGameplayStatics::GetLevelBlueprint(UObject* WorldContextObject) {
    return NULL;
}

FName UORGameplayStatics::GetKeyFName(const FKey& Key) {
    return NAME_None;
}

TEnumAsByte<EInputDeviceType> UORGameplayStatics::GetInputDeviceType(UObject* WorldContextObject) {
    return EIDT_KeyboardMouse;
}

UInputComponent* UORGameplayStatics::GetInputComponent(AActor* Actor) {
    return NULL;
}

FGameplayTagContainer UORGameplayStatics::GetGameplayTagsFromActor(AActor* ActorWithTags) {
    return FGameplayTagContainer{};
}

FString UORGameplayStatics::GetDiskSaveFileDebug(UObject* WorldContextObject) {
    return TEXT("");
}

float UORGameplayStatics::GetCurrentSpreadMod(AORPlayerCharacter* Player) {
    return 0.0f;
}

float UORGameplayStatics::GetCurrentSpread(AORPlayerCharacter* Player) {
    return 0.0f;
}

FName UORGameplayStatics::GetCurrentCheckpoint(const UObject* WorldContextObject) {
    return NAME_None;
}

UObject* UORGameplayStatics::GetClassDefaultObject(UClass* ObjectClass) {
    return NULL;
}

UORCheatManager* UORGameplayStatics::GetCheatManager(UObject* WorldContextObject) {
    return NULL;
}

FVector UORGameplayStatics::GetBestAimLocation(AActor* AimAssistTarget, const FVector& LookDirection, const FVector& LookSource, float AimMaxAngle, UCurveFloat* AdjustmentModCurve) {
    return FVector{};
}

TArray<FGameplayTag> UORGameplayStatics::GetAllCheckpoints() {
    return TArray<FGameplayTag>();
}

TArray<AActor*> UORGameplayStatics::GetAllActorsWithTag(const FGameplayTag& Tag, UObject* WorldContext) {
    return TArray<AActor*>();
}

UAkSwitchValue* UORGameplayStatics::GetAkSwitchValueForSurface(UObject* WorldContextObject, TEnumAsByte<EPhysicalSurface> Surface) {
    return NULL;
}

UAkSwitchValue* UORGameplayStatics::GetAkSwitchValueForLocomotion(AORCharacter* Character) {
    return NULL;
}

AActor* UORGameplayStatics::GetAimAssistTargetWithConstraints(AORCharacter* OwningCharacter, const float AimDistance, const float AimMaxAngle, UCurveFloat* AdjustmentModCurve) {
    return NULL;
}

FAimAssistTargetInfo UORGameplayStatics::GetAimAssistTargetInfo(UObject* WorldContextObject) {
    return FAimAssistTargetInfo{};
}

AActor* UORGameplayStatics::GetAimAssistTarget(UObject* WorldContextObject, bool bUseLOS) {
    return NULL;
}

FString UORGameplayStatics::GameplayTagToString(const FGameplayTag& Tag) {
    return TEXT("");
}

bool UORGameplayStatics::GameplayTagContainerMeetsRequirements(const FGameplayTagContainer& TagContainer, const FGameplayTagRequirements& TagRequirements) {
    return false;
}

void UORGameplayStatics::FlipInvertAxis(const UObject* WorldContextObject, FName AxisName) {
}

void UORGameplayStatics::FindFloor(UObject* WorldContextObject, FVector Location, float Distance, FHitResult& OutHitResult, bool& bDidHit) {
}

float UORGameplayStatics::EvalRuntimeFloatCurve(const FRuntimeFloatCurve& RuntimeFloatCurve, float InTime) {
    return 0.0f;
}

void UORGameplayStatics::EnablePlayerInput(UObject* WorldContextObject) {
}

void UORGameplayStatics::EnableMapRegionDiscoverability(UObject* WorldContextObject) {
}

void UORGameplayStatics::EnableActor(AActor* Actor, bool bNewSimulatePhysics) {
}

bool UORGameplayStatics::DiscoverPortal(UObject* WorldContextObject, FGameplayTag PortalTag) {
    return false;
}

void UORGameplayStatics::DisablePlayerInput_CustomTag(UObject* WorldContextObject, FGameplayTag DisableTagToApply, bool bDisableMovement, bool bDisableCamera, bool bSetInSkippableNarrative) {
}

void UORGameplayStatics::DisablePlayerInput(UObject* WorldContextObject, bool bDisableMovement, bool bDisableCamera, bool bDisableAbilities, bool bSetInSkippableNarrative) {
}

void UORGameplayStatics::DisableActor(AActor* Actor) {
}

void UORGameplayStatics::DebugBreak() {
}

void UORGameplayStatics::DeactivateArmRig(UObject* WorldContextObject, bool bShowGun) {
}

AActor* UORGameplayStatics::CreateZipline(UObject* WorldContextObject, TSubclassOf<AActor> ZiplineType, FVector StartingLocation, FVector EndingLocation, float MinClampDistance, float MaxClampDistanceOffset) {
    return NULL;
}

UORGlobalEventPayload* UORGameplayStatics::CreateEventPayloadObject(TSubclassOf<UORGlobalEventPayload> PayloadType, UObject* Outer) {
    return NULL;
}

void UORGameplayStatics::CopyActorPropertiesAndComponents(UObject* WorldContextObject, AActor* Source, AActor* Destination, const TMap<FName, FName>& ComponentNameMappings, bool bOnlyCopyComponentNameMappings, bool bSkipRerunConstructionScript, bool bApplyRootComponentOffset) {
}

float UORGameplayStatics::ConvertToHFOV(float VFOV) {
    return 0.0f;
}

FVector UORGameplayStatics::ComputeReflectedProjectileVelocity(UObject* WorldContextObject, const FVector& ProjectileVelocity) {
    return FVector{};
}

void UORGameplayStatics::ClearPlayerDebugPathVisual(const UObject* WorldContextObject) {
}

void UORGameplayStatics::ClearObjectOutline(AActor* Actor) {
}

bool UORGameplayStatics::AdjustAimDirection(FVector& OutLocation, ACharacter* AimSource, const FVector& LookSource, const FVector& LookDirection, float AimDistance, float AimMaxAngle, UCurveFloat* AdjustmentModCurve, bool AllowKeyboardMouse) {
    return false;
}

UActorComponent* UORGameplayStatics::AddComponentToActor(AActor* Actor, TSubclassOf<UActorComponent> ComponentClass, bool bManualAttachment, const FTransform& RelativeTransform) {
    return NULL;
}

void UORGameplayStatics::ActivateArmRig(UObject* WorldContextObject, bool bHideGun) {
}

FVector UORGameplayStatics::AccelDecelTowardsVector(FVector CurrentValue, FVector TargetValue, FVector& Velocity, float MaxSpeed, float Acceleration, float Deceleration, float DeltaTime, float AcceptedErrorTolerance, bool bForceDeceleration) {
    return FVector{};
}

FVector UORGameplayStatics::AccelDecelTowardsAngleVector(FVector CurrentValue, FVector TargetValue, float& Speed, float MaxSpeed, float Acceleration, float Deceleration, float DeltaTime, bool bForceDeceleration) {
    return FVector{};
}

float UORGameplayStatics::AccelDecelTowardsAngle(float CurrentValue, float TargetValue, float& Speed, float MaxSpeed, float Acceleration, float Deceleration, float DeltaTime, bool bForceDeceleration) {
    return 0.0f;
}

float UORGameplayStatics::AccelDecelTowards(float CurrentValue, float TargetValue, float& Speed, float MaxSpeed, float Acceleration, float Deceleration, float DeltaTime, float AcceptedErrorTolerance, bool bForceDeceleration) {
    return 0.0f;
}

UORGameplayStatics::UORGameplayStatics() {
}

