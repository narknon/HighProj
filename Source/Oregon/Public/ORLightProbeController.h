#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ORLightProbeController.generated.h"

class UTexture;
class AORLightProbe;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class OREGON_API AORLightProbeController : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseGlobalIllumination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AORLightProbe*> LightProbes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AORLightProbe*> HighQualityProbes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AORLightProbe*> LowQualityProbes;
    
public:
    AORLightProbeController();
    UFUNCTION(BlueprintCallable)
    void SetupLight(int32 LightNum, float LightRadius, UPARAM(Ref) FLinearColor& LightColor, UPARAM(Ref) FVector& LightLocation, float LightFalloff, float LightBrightness, UMaterialInstanceDynamic* PPReference, UTexture* SceneTextureTarget);
    
    UFUNCTION(BlueprintCallable)
    void ClearLights(int32 NumLights, UMaterialInstanceDynamic* PPReference);
    
};

