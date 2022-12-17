#pragma once
#include "CoreMinimal.h"
#include "ORTriggerVolumeComponent.h"
#include "MantleSplineShapeInfo.h"
#include "ORMantleableSplineComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORMantleableSplineComponent : public UORTriggerVolumeComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMantleSplineShapeInfo> GeneratedCylinderInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinIntendedCylinderLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CylinderSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TanDotThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineLength;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivateWalkableFloorOverride;
    
    UORMantleableSplineComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OverlapEnd(AActor* OtherActor, int32 VolumeIndex);
    
    UFUNCTION(BlueprintCallable)
    void OverlapBegin(AActor* OtherActor, int32 VolumeIndex);
    
    UFUNCTION(BlueprintCallable)
    void BuildIfUnbuilt();
    
    UFUNCTION(BlueprintCallable)
    void BuildCylinderList();
    
};

