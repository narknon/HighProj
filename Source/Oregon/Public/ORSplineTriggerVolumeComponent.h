#pragma once
#include "CoreMinimal.h"
#include "ORDetachedTriggerComponent.h"
#include "SplineTriggerShapeInfo.h"
#include "ORSplineTriggerVolumeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORSplineTriggerVolumeComponent : public UORDetachedTriggerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSplineTriggerShapeInfo> GeneratedCylinderInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinIntendedCylinderLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CylinderSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TanDotThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineLength;
    
public:
    UORSplineTriggerVolumeComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void BuildIfUnbuilt();
    
    UFUNCTION(BlueprintCallable)
    void BuildCylinderList();
    
};

