#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ORLightProbeSettings.generated.h"

class UMaterialInstance;
class UTexture2D;

UCLASS(Blueprintable, DefaultConfig, NotPlaceable, Config=Squanch)
class OREGON_API UORLightProbeSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FName AOInfluenceParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FName SubsurfaceIntensityParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float AOInfluence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float SubsurfaceIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float LGLightMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> WhiteSquare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInstance>> LightProbe64HighPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInstance>> LightProbe64LowPP;
    
    UORLightProbeSettings();
};

