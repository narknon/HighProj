#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "GameplayTagContainer.h"
#include "EGraphicsQuality.h"
#include "ESaveLevel.h"
#include "EState.h"
#include "Rendering/RenderingCommon.h"
#include "GameFramework/GameUserSettings.h"
#include "WackyPacksData.h"
#include "SaveSystemBPLibrary.generated.h"

class UObject;
class USaveSystemBindableSetState;

UCLASS(Blueprintable)
class SAVESYSTEM_API USaveSystemBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USaveSystemBPLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetStateTransient(UObject* WorldContextObject, FName Key, EState State);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetStateRaw_Tag(UObject* WorldContextObject, FGameplayTag Key, int32 State, TEnumAsByte<ESaveLevel> SaveLevel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetStateRaw(UObject* WorldContextObject, FName Key, int32 State, TEnumAsByte<ESaveLevel> SaveLevel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetState_Tag(UObject* WorldContextObject, FGameplayTag Tag, EState State, TEnumAsByte<ESaveLevel> SaveLevel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetState(UObject* WorldContextObject, FName Key, EState State, TEnumAsByte<ESaveLevel> SaveLevel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileWindowMode(UObject* WorldContextObject, TEnumAsByte<EWindowMode::Type> WindowMode);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileVSyncEnabled(UObject* WorldContextObject, bool VSyncEnabled);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileViewDistanceQuality(UObject* WorldContextObject, EGraphicsQuality ViewDistanceQuality);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileTextureQuality(UObject* WorldContextObject, EGraphicsQuality TextureQuality);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileSoundFXolume(UObject* WorldContextObject, float SoundFXVolume);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileShowSubtitles(UObject* WorldContextObject, bool ShowSubtitles);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileShowSpeakingIndicator(UObject* WorldContextObject, bool ShowSpeakingIndicator);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileShadowQuality(UObject* WorldContextObject, EGraphicsQuality ShadowQuality);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileShadingQuality(UObject* WorldContextObject, EGraphicsQuality ShadingQuality);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileScreenResolution(UObject* WorldContextObject, int32 ScreenResolutionX, int32 ScreenResolutionY);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileRefreshRate(UObject* WorldContextObject, int32 RefreshRate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFilePostProcessQuality(UObject* WorldContextObject, EGraphicsQuality PostProcesQuality);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileMusicVolume(UObject* WorldContextObject, float MusicVolume);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileMouseSensitivity(UObject* WorldContextObject, float Sensitivity);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileMotionBlur(UObject* WorldContextObject, bool MotionBlur);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileMeshQuality(UObject* WorldContextObject, EGraphicsQuality MeshQuality);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileMasterVolume(UObject* WorldContextObject, float MasterVolume);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileLanguageId(UObject* WorldContextObject, const FString& LanguageId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileInvertMouseY(UObject* WorldContextObject, bool InvertY);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileInvertGamepadY(UObject* WorldContextObject, bool InvertY);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileGraphicsQuality(UObject* WorldContextObject, EGraphicsQuality GraphicsQuality);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileGamma(UObject* WorldContextObject, float Gamma);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileGamepadSensitivity(UObject* WorldContextObject, float Sensitivity);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileFOV(UObject* WorldContextObject, float FOV);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileFoliageQuality(UObject* WorldContextObject, EGraphicsQuality FoliageQuality);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileEnableVibration(UObject* WorldContextObject, bool EnableControllerVibration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileEffectsQuality(UObject* WorldContextObject, EGraphicsQuality EffectsQuality);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileDialogueVolume(UObject* WorldContextObject, float DialogueVolume);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileDepthOfField(UObject* WorldContextObject, bool DepthOfField);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileColorCorrectionSeverity(UObject* WorldContextObject, float ColorCorrectionSeverity);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileColorCorrection(UObject* WorldContextObject, EColorVisionDeficiency ColorCorrectionType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileAntiAliasingQuality(UObject* WorldContextObject, EGraphicsQuality AntiAliasingQuality);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetKeybindForAction(UObject* WorldContextObject, FKey KeyToBind, FGameplayTag ActionTag, bool IsPrimaryBind);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SaveProfileData(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SaveObject(UObject* WorldContextObject, UObject* Object, bool bSpawned, TEnumAsByte<ESaveLevel> SaveLevel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SaveGameAndWriteToDisk(UObject* WorldContextObject, bool bAsync);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SaveGame(UObject* WorldContextObject, bool bAsync);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetVideoSaveFileSettings(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetRuntimeSaveData(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetControlsSaveFileSettings(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetAudioSaveFileSettings(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetAdvancedVideoSaveFileSettings(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LoadObject(UObject* WorldContextObject, UObject* Object);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool HasSaveStates(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FWackyPacksData GetWackyPacksData(UObject* WorldContextObject, int32 CollectorID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<int32> GetWackyPackCollectorIDs(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EState GetStateTransient(UObject* WorldContextObject, FName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetStateRaw_Tag(UObject* WorldContextObject, FGameplayTag Key);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetStateRaw(UObject* WorldContextObject, FName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EState GetState_Tag(UObject* WorldContextObject, FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EState GetState(UObject* WorldContextObject, FName Key);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FKey GetSecondaryKeybindForTag(UObject* WorldContextObject, FGameplayTag ActionTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TEnumAsByte<EWindowMode::Type> GetSaveFileWindowMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSaveFileVSyncEnabled(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EGraphicsQuality GetSaveFileViewDistanceQuality(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EGraphicsQuality GetSaveFileTextureQuality(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetSaveFileSoundFXVolume(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSaveFileShowSubtitles(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSaveFileShowSpeakingIndicator(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EGraphicsQuality GetSaveFileShadowQuality(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EGraphicsQuality GetSaveFileShadingQuality(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSaveFileScreenResolution(UObject* WorldContextObject, int32& OutResolutionX, int32& OutResolutionY);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetSaveFileRefreshRate(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EGraphicsQuality GetSaveFilePostProcessQuality(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetSaveFileMusicVolume(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetSaveFileMouseSensitivity(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSaveFileMotionBlur(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EGraphicsQuality GetSaveFileMeshQuality(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetSaveFileMasterVolume(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FString GetSaveFileLanguageId(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSaveFileInvertMouseY(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSaveFileInvertGamepadY(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EGraphicsQuality GetSaveFileGraphicsQuality(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetSaveFileGamma(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetSaveFileGamepadSensitivity(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetSaveFileFOV(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EGraphicsQuality GetSaveFileFoliageQuality(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSaveFileEnableVibration(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EGraphicsQuality GetSaveFileEffectsQuality(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetSaveFileDialogueVolume(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSaveFileDepthOfField(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetSaveFileColorCorrectionSeverity(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EColorVisionDeficiency GetSaveFileColorCorrection(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EGraphicsQuality GetSaveFileAntiAliasingQuality(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FKey GetPrimaryKeybindForTag(UObject* WorldContextObject, FGameplayTag ActionTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USaveSystemBindableSetState* GetBindableSetState(UObject* WorldContextObject, FName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool DoesStateKeyRawExist_Tag(UObject* WorldContextObject, FGameplayTag Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool DoesStateKeyRawExist(UObject* WorldContextObject, FName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool DoesStateKeyExist_Tag(UObject* WorldContextObject, FGameplayTag Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool DoesStateKeyExist(UObject* WorldContextObject, FName Key);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DisableSave(UObject* WorldContextObject, bool Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DisableLoad(UObject* WorldContextObject, bool Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DeleteSaveStates(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CreateAsset(UObject* WorldContextObject, UClass* Class, const FString& Path, FName Name);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ApplySaveFileSettings(UObject* WorldContextObject);
    
};

