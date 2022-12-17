#include "SaveSystemBPLibrary.h"

class UObject;
class USaveSystemBindableSetState;

bool USaveSystemBPLibrary::SetStateTransient(UObject* WorldContextObject, FName Key, EState State) {
    return false;
}

bool USaveSystemBPLibrary::SetStateRaw_Tag(UObject* WorldContextObject, FGameplayTag Key, int32 State, TEnumAsByte<ESaveLevel> SaveLevel) {
    return false;
}

bool USaveSystemBPLibrary::SetStateRaw(UObject* WorldContextObject, FName Key, int32 State, TEnumAsByte<ESaveLevel> SaveLevel) {
    return false;
}

bool USaveSystemBPLibrary::SetState_Tag(UObject* WorldContextObject, FGameplayTag Tag, EState State, TEnumAsByte<ESaveLevel> SaveLevel) {
    return false;
}

bool USaveSystemBPLibrary::SetState(UObject* WorldContextObject, FName Key, EState State, TEnumAsByte<ESaveLevel> SaveLevel) {
    return false;
}

void USaveSystemBPLibrary::SetSaveFileWindowMode(UObject* WorldContextObject, TEnumAsByte<EWindowMode::Type> WindowMode) {
}

void USaveSystemBPLibrary::SetSaveFileVSyncEnabled(UObject* WorldContextObject, bool VSyncEnabled) {
}

void USaveSystemBPLibrary::SetSaveFileViewDistanceQuality(UObject* WorldContextObject, EGraphicsQuality ViewDistanceQuality) {
}

void USaveSystemBPLibrary::SetSaveFileTextureQuality(UObject* WorldContextObject, EGraphicsQuality TextureQuality) {
}

void USaveSystemBPLibrary::SetSaveFileSoundFXolume(UObject* WorldContextObject, float SoundFXVolume) {
}

void USaveSystemBPLibrary::SetSaveFileShowSubtitles(UObject* WorldContextObject, bool ShowSubtitles) {
}

void USaveSystemBPLibrary::SetSaveFileShowSpeakingIndicator(UObject* WorldContextObject, bool ShowSpeakingIndicator) {
}

void USaveSystemBPLibrary::SetSaveFileShadowQuality(UObject* WorldContextObject, EGraphicsQuality ShadowQuality) {
}

void USaveSystemBPLibrary::SetSaveFileShadingQuality(UObject* WorldContextObject, EGraphicsQuality ShadingQuality) {
}

void USaveSystemBPLibrary::SetSaveFileScreenResolution(UObject* WorldContextObject, int32 ScreenResolutionX, int32 ScreenResolutionY) {
}

void USaveSystemBPLibrary::SetSaveFileRefreshRate(UObject* WorldContextObject, int32 RefreshRate) {
}

void USaveSystemBPLibrary::SetSaveFilePostProcessQuality(UObject* WorldContextObject, EGraphicsQuality PostProcesQuality) {
}

void USaveSystemBPLibrary::SetSaveFileMusicVolume(UObject* WorldContextObject, float MusicVolume) {
}

void USaveSystemBPLibrary::SetSaveFileMouseSensitivity(UObject* WorldContextObject, float Sensitivity) {
}

void USaveSystemBPLibrary::SetSaveFileMotionBlur(UObject* WorldContextObject, bool MotionBlur) {
}

void USaveSystemBPLibrary::SetSaveFileMeshQuality(UObject* WorldContextObject, EGraphicsQuality MeshQuality) {
}

void USaveSystemBPLibrary::SetSaveFileMasterVolume(UObject* WorldContextObject, float MasterVolume) {
}

void USaveSystemBPLibrary::SetSaveFileLanguageId(UObject* WorldContextObject, const FString& LanguageId) {
}

void USaveSystemBPLibrary::SetSaveFileInvertMouseY(UObject* WorldContextObject, bool InvertY) {
}

void USaveSystemBPLibrary::SetSaveFileInvertGamepadY(UObject* WorldContextObject, bool InvertY) {
}

void USaveSystemBPLibrary::SetSaveFileGraphicsQuality(UObject* WorldContextObject, EGraphicsQuality GraphicsQuality) {
}

void USaveSystemBPLibrary::SetSaveFileGamma(UObject* WorldContextObject, float Gamma) {
}

void USaveSystemBPLibrary::SetSaveFileGamepadSensitivity(UObject* WorldContextObject, float Sensitivity) {
}

void USaveSystemBPLibrary::SetSaveFileFOV(UObject* WorldContextObject, float FOV) {
}

void USaveSystemBPLibrary::SetSaveFileFoliageQuality(UObject* WorldContextObject, EGraphicsQuality FoliageQuality) {
}

void USaveSystemBPLibrary::SetSaveFileEnableVibration(UObject* WorldContextObject, bool EnableControllerVibration) {
}

void USaveSystemBPLibrary::SetSaveFileEffectsQuality(UObject* WorldContextObject, EGraphicsQuality EffectsQuality) {
}

void USaveSystemBPLibrary::SetSaveFileDialogueVolume(UObject* WorldContextObject, float DialogueVolume) {
}

void USaveSystemBPLibrary::SetSaveFileDepthOfField(UObject* WorldContextObject, bool DepthOfField) {
}

void USaveSystemBPLibrary::SetSaveFileColorCorrectionSeverity(UObject* WorldContextObject, float ColorCorrectionSeverity) {
}

void USaveSystemBPLibrary::SetSaveFileColorCorrection(UObject* WorldContextObject, EColorVisionDeficiency ColorCorrectionType) {
}

void USaveSystemBPLibrary::SetSaveFileAntiAliasingQuality(UObject* WorldContextObject, EGraphicsQuality AntiAliasingQuality) {
}

void USaveSystemBPLibrary::SetKeybindForAction(UObject* WorldContextObject, FKey KeyToBind, FGameplayTag ActionTag, bool IsPrimaryBind) {
}

bool USaveSystemBPLibrary::SaveProfileData(UObject* WorldContextObject) {
    return false;
}

void USaveSystemBPLibrary::SaveObject(UObject* WorldContextObject, UObject* Object, bool bSpawned, TEnumAsByte<ESaveLevel> SaveLevel) {
}

bool USaveSystemBPLibrary::SaveGameAndWriteToDisk(UObject* WorldContextObject, bool bAsync) {
    return false;
}

bool USaveSystemBPLibrary::SaveGame(UObject* WorldContextObject, bool bAsync) {
    return false;
}

void USaveSystemBPLibrary::ResetVideoSaveFileSettings(UObject* WorldContextObject) {
}

void USaveSystemBPLibrary::ResetRuntimeSaveData(UObject* WorldContextObject) {
}

void USaveSystemBPLibrary::ResetControlsSaveFileSettings(UObject* WorldContextObject) {
}

void USaveSystemBPLibrary::ResetAudioSaveFileSettings(UObject* WorldContextObject) {
}

void USaveSystemBPLibrary::ResetAdvancedVideoSaveFileSettings(UObject* WorldContextObject) {
}

void USaveSystemBPLibrary::LoadObject(UObject* WorldContextObject, UObject* Object) {
}

bool USaveSystemBPLibrary::HasSaveStates(UObject* WorldContextObject) {
    return false;
}

FWackyPacksData USaveSystemBPLibrary::GetWackyPacksData(UObject* WorldContextObject, int32 CollectorID) {
    return FWackyPacksData{};
}

TArray<int32> USaveSystemBPLibrary::GetWackyPackCollectorIDs(UObject* WorldContextObject) {
    return TArray<int32>();
}

EState USaveSystemBPLibrary::GetStateTransient(UObject* WorldContextObject, FName Key) {
    return EState::Inactive;
}

int32 USaveSystemBPLibrary::GetStateRaw_Tag(UObject* WorldContextObject, FGameplayTag Key) {
    return 0;
}

int32 USaveSystemBPLibrary::GetStateRaw(UObject* WorldContextObject, FName Key) {
    return 0;
}

EState USaveSystemBPLibrary::GetState_Tag(UObject* WorldContextObject, FGameplayTag Tag) {
    return EState::Inactive;
}

EState USaveSystemBPLibrary::GetState(UObject* WorldContextObject, FName Key) {
    return EState::Inactive;
}

FKey USaveSystemBPLibrary::GetSecondaryKeybindForTag(UObject* WorldContextObject, FGameplayTag ActionTag) {
    return FKey{};
}

TEnumAsByte<EWindowMode::Type> USaveSystemBPLibrary::GetSaveFileWindowMode(UObject* WorldContextObject) {
    return EWindowMode::Fullscreen;
}

bool USaveSystemBPLibrary::GetSaveFileVSyncEnabled(UObject* WorldContextObject) {
    return false;
}

EGraphicsQuality USaveSystemBPLibrary::GetSaveFileViewDistanceQuality(UObject* WorldContextObject) {
    return EGraphicsQuality::Low;
}

EGraphicsQuality USaveSystemBPLibrary::GetSaveFileTextureQuality(UObject* WorldContextObject) {
    return EGraphicsQuality::Low;
}

float USaveSystemBPLibrary::GetSaveFileSoundFXVolume(UObject* WorldContextObject) {
    return 0.0f;
}

bool USaveSystemBPLibrary::GetSaveFileShowSubtitles(UObject* WorldContextObject) {
    return false;
}

bool USaveSystemBPLibrary::GetSaveFileShowSpeakingIndicator(UObject* WorldContextObject) {
    return false;
}

EGraphicsQuality USaveSystemBPLibrary::GetSaveFileShadowQuality(UObject* WorldContextObject) {
    return EGraphicsQuality::Low;
}

EGraphicsQuality USaveSystemBPLibrary::GetSaveFileShadingQuality(UObject* WorldContextObject) {
    return EGraphicsQuality::Low;
}

bool USaveSystemBPLibrary::GetSaveFileScreenResolution(UObject* WorldContextObject, int32& OutResolutionX, int32& OutResolutionY) {
    return false;
}

int32 USaveSystemBPLibrary::GetSaveFileRefreshRate(UObject* WorldContextObject) {
    return 0;
}

EGraphicsQuality USaveSystemBPLibrary::GetSaveFilePostProcessQuality(UObject* WorldContextObject) {
    return EGraphicsQuality::Low;
}

float USaveSystemBPLibrary::GetSaveFileMusicVolume(UObject* WorldContextObject) {
    return 0.0f;
}

float USaveSystemBPLibrary::GetSaveFileMouseSensitivity(UObject* WorldContextObject) {
    return 0.0f;
}

bool USaveSystemBPLibrary::GetSaveFileMotionBlur(UObject* WorldContextObject) {
    return false;
}

EGraphicsQuality USaveSystemBPLibrary::GetSaveFileMeshQuality(UObject* WorldContextObject) {
    return EGraphicsQuality::Low;
}

float USaveSystemBPLibrary::GetSaveFileMasterVolume(UObject* WorldContextObject) {
    return 0.0f;
}

FString USaveSystemBPLibrary::GetSaveFileLanguageId(UObject* WorldContextObject) {
    return TEXT("");
}

bool USaveSystemBPLibrary::GetSaveFileInvertMouseY(UObject* WorldContextObject) {
    return false;
}

bool USaveSystemBPLibrary::GetSaveFileInvertGamepadY(UObject* WorldContextObject) {
    return false;
}

EGraphicsQuality USaveSystemBPLibrary::GetSaveFileGraphicsQuality(UObject* WorldContextObject) {
    return EGraphicsQuality::Low;
}

float USaveSystemBPLibrary::GetSaveFileGamma(UObject* WorldContextObject) {
    return 0.0f;
}

float USaveSystemBPLibrary::GetSaveFileGamepadSensitivity(UObject* WorldContextObject) {
    return 0.0f;
}

float USaveSystemBPLibrary::GetSaveFileFOV(UObject* WorldContextObject) {
    return 0.0f;
}

EGraphicsQuality USaveSystemBPLibrary::GetSaveFileFoliageQuality(UObject* WorldContextObject) {
    return EGraphicsQuality::Low;
}

bool USaveSystemBPLibrary::GetSaveFileEnableVibration(UObject* WorldContextObject) {
    return false;
}

EGraphicsQuality USaveSystemBPLibrary::GetSaveFileEffectsQuality(UObject* WorldContextObject) {
    return EGraphicsQuality::Low;
}

float USaveSystemBPLibrary::GetSaveFileDialogueVolume(UObject* WorldContextObject) {
    return 0.0f;
}

bool USaveSystemBPLibrary::GetSaveFileDepthOfField(UObject* WorldContextObject) {
    return false;
}

float USaveSystemBPLibrary::GetSaveFileColorCorrectionSeverity(UObject* WorldContextObject) {
    return 0.0f;
}

EColorVisionDeficiency USaveSystemBPLibrary::GetSaveFileColorCorrection(UObject* WorldContextObject) {
    return EColorVisionDeficiency::NormalVision;
}

EGraphicsQuality USaveSystemBPLibrary::GetSaveFileAntiAliasingQuality(UObject* WorldContextObject) {
    return EGraphicsQuality::Low;
}

FKey USaveSystemBPLibrary::GetPrimaryKeybindForTag(UObject* WorldContextObject, FGameplayTag ActionTag) {
    return FKey{};
}

USaveSystemBindableSetState* USaveSystemBPLibrary::GetBindableSetState(UObject* WorldContextObject, FName Key) {
    return NULL;
}

bool USaveSystemBPLibrary::DoesStateKeyRawExist_Tag(UObject* WorldContextObject, FGameplayTag Key) {
    return false;
}

bool USaveSystemBPLibrary::DoesStateKeyRawExist(UObject* WorldContextObject, FName Key) {
    return false;
}

bool USaveSystemBPLibrary::DoesStateKeyExist_Tag(UObject* WorldContextObject, FGameplayTag Key) {
    return false;
}

bool USaveSystemBPLibrary::DoesStateKeyExist(UObject* WorldContextObject, FName Key) {
    return false;
}

void USaveSystemBPLibrary::DisableSave(UObject* WorldContextObject, bool Value) {
}

void USaveSystemBPLibrary::DisableLoad(UObject* WorldContextObject, bool Value) {
}

void USaveSystemBPLibrary::DeleteSaveStates(UObject* WorldContextObject) {
}

bool USaveSystemBPLibrary::CreateAsset(UObject* WorldContextObject, UClass* Class, const FString& Path, FName Name) {
    return false;
}

void USaveSystemBPLibrary::ApplySaveFileSettings(UObject* WorldContextObject) {
}

USaveSystemBPLibrary::USaveSystemBPLibrary() {
}

