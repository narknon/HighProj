#pragma once
#include "CoreMinimal.h"
#include "SQInputComponent.h"
#include "FrameInputInfo.h"
#include "ScalableFloat.h"
#include "EInputDeviceType.h"
#include "DeviceTypeChangedDelegate.h"
#include "ORPlayerInputComponent.generated.h"

class AActor;
class APawn;
class UORNarrativeFollowHandler;
class UORNarrativeAimHandler;
class AORPlayerCharacter;
class UORRadialAimSensitivityHandler;
class UORRadialAimAssistHandler;

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORPlayerInputComponent : public USQInputComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<APawn> OwnerPawn;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AORPlayerCharacter> OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAbilityFiringEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMovementEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSwapInputDirections;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EInputDeviceType> CurrentDeviceType;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeviceTypeChanged DeviceTypeChangedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORRadialAimAssistHandler* RadialAimAssistHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORRadialAimSensitivityHandler* RadialAimSensitivityHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORNarrativeAimHandler* NarrativeAimHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORNarrativeFollowHandler* NarrativeFollowHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameInputInfo CachedCurrentFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameInputInfo CachedPreviousFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameInputInfo> CachedPastFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RingStartIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RingEndIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMovementInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowCameraInput;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadSensitivity;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxFocusedRotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat FocusedRotationAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCameraFocused;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> FocusTarget;
    
public:
    UORPlayerInputComponent();
    UFUNCTION(BlueprintCallable)
    void SetMouseSensitivity(float NewSensitivity);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadSensitivity(float NewSensitivity);
    
    UFUNCTION(BlueprintCallable)
    void MouseSensitivityChanged(float NewMouseSensitivity);
    
    UFUNCTION(BlueprintCallable)
    void MouseADSSensitivityChanged(float NewMouseSensitivity);
    
    UFUNCTION(BlueprintCallable)
    void InvertMouseYChanged(bool bNewInvertY);
    
    UFUNCTION(BlueprintCallable)
    void InvertGamepadYChanged(bool bNewInvertY);
    
    UFUNCTION(BlueprintCallable)
    void InvertCameraAxes(bool bInvert);
    
    UFUNCTION(BlueprintCallable)
    bool GetActionIsHeld(FName ActionName);
    
    UFUNCTION(BlueprintCallable)
    void GamepadSensitivityChanged(float NewGamepadSensitivity);
    
    UFUNCTION(BlueprintCallable)
    void GamepadADSSensitivityChanged(float NewGamepadSensitivity);
    
};

