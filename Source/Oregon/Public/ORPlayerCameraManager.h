#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "Camera/PlayerCameraManager.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DamageIndicatorMaterialData.h"
#include "DynamicPostEffect.h"
#include "ORPlayerCameraManagerEventDelegate.h"
#include "Engine/Scene.h"
#include "ORPlayerCameraManager.generated.h"

class AActor;
class UMaterialInstance;
class UCurveFloat;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, NonTransient)
class AORPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORPlayerCameraManagerEvent OnPossessionBlendStartedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORPlayerCameraManagerEvent OnPossessionBlendCompleteEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORPlayerCameraManagerEvent OnCameraFadeInCompleteEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PossessionChangeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PossessionChangeExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* FadeEffectMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* FadeEffectDM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FadeEffectMaterialAlphaParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* LowHealthIndicatorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* LowHealthIndicatorDM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowHealthThresholdPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LowHealthIndicatorMaterialAlphaParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDamageIndicatorMaterialData> DamageIndicatorMaterialInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* DamageIndicatorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* ArmorDamageIndicatorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DamageIndicatorMaterialAlphaParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DamageIndicatorMaterialForwardDotParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DamageIndicatorMaterialDirectionParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve DamageIndicatorAlphaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* TeleportEffectMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* TeleportEffectDM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TeleportEffectMaterialDistortionParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportEffectEasingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* FogEffectMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* FogEffectDM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FogEffectMaterialDistanceParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FogEffectMaterialColorParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* InBubblePostEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstance*> AdditionalPostProcessMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* OutlinePostProcessMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings PostProcessMaterialSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDynamicPostEffect> DynamicPostEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstance*> DynamicPostMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CameraWorldVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CameraLocalVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator CameraRotationalVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator HUDMaxRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator HUDMaxRotationalSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator HUDMaxRotationalAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator HUDMaxRotationalDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator HUDOffsetScale;
    
    AORPlayerCameraManager();
    UFUNCTION(BlueprintCallable)
    void UnsetOutlinePostProcess();
    
    UFUNCTION(BlueprintCallable)
    void SetPreventPossessionBlend(bool bPreventBlend);
    
    UFUNCTION(BlueprintCallable)
    void SetPreventCameraShakes(bool bPreventShakes);
    
    UFUNCTION(BlueprintCallable)
    void SetOutlinePostProcess();
    
    UFUNCTION(BlueprintCallable)
    void SetArmsFollowCamera(bool bFollowCamera);
    
    UFUNCTION(BlueprintCallable)
    void RemovePostEffectsOfType(UMaterialInstance* Material);
    
    UFUNCTION(BlueprintCallable)
    void RemovePostEffectMaterial(UMaterialInstance* Material);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PossessionBlendComplete();
    
public:
    UFUNCTION(BlueprintCallable)
    bool HasActiveCameraAnimation();
    
    UFUNCTION(BlueprintCallable)
    void FadeOut();
    
    UFUNCTION(BlueprintCallable)
    void FadeIn();
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* CreatePostEffectMaterial(UMaterialInstance* Material);
    
    UFUNCTION(BlueprintCallable)
    void AddTeleportEffect();
    
    UFUNCTION(BlueprintCallable)
    void AddPostEffectMaterial(UMaterialInstance* Material);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* AddPostEffect(UMaterialInstance* Material, FName MaterialPropertyName, float Lifetime, UCurveFloat* Curve);
    
    UFUNCTION(BlueprintCallable)
    void AddFogEffect(float Distance, const FLinearColor& Color);
    
    UFUNCTION(BlueprintCallable)
    void AddDamageIndicator(AActor* SourceActor, bool bIsArmorDamage);
    
};

