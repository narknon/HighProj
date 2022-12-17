#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ORSaveSystemStatics.generated.h"

class UObject;

UCLASS(Blueprintable)
class OREGON_API UORSaveSystemStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UORSaveSystemStatics();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileSprintToggle(UObject* WorldContextObject, bool NewValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFilePowerSlideToggle(UObject* WorldContextObject, bool NewValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileMultigunModeToggle(UObject* WorldContextObject, bool NewValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileMouseADSSensitivity(UObject* WorldContextObject, float Sensitivity);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileJetpackRiseToggle(UObject* WorldContextObject, bool NewValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileJetpackHoverToggle(UObject* WorldContextObject, bool NewValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileInfoScanToggle(UObject* WorldContextObject, bool NewValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileGunChatterRate(UObject* WorldContextObject, float NewValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileGamepadADSSensitivity(UObject* WorldContextObject, float Sensitivity);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileEnemyChatterRate(UObject* WorldContextObject, float NewValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileDodgeToggle(UObject* WorldContextObject, bool NewValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileChromaticAberration(UObject* WorldContextObject, bool NewValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileBigEyeModeToggle(UObject* WorldContextObject, bool NewValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveFileAltFireToggle(UObject* WorldContextObject, bool NewValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetTogglesToDefaults(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetGeneralToDefaults(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetAccessibilityToDefaults(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSaveFileSprintToggle(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSaveFilePowerSlideToggle(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSaveFileMultigunModeToggle(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetSaveFileMouseADSSensitivity(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSaveFileJetpackRiseToggle(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSaveFileJetpackHoverToggle(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSaveFileInfoScanToggle(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetSaveFileGunChatterRate(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetSaveFileGamepadADSSensitivity(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetSaveFileEnemyChatterRate(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSaveFileDodgeToggle(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSaveFileChromaticAberration(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSaveFileBigEyeModeToggle(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSaveFileAltFireToggle(UObject* WorldContextObject);
    
};

