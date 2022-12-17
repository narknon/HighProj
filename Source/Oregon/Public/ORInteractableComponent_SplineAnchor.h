#pragma once
#include "CoreMinimal.h"
#include "ORInteractableComponent_AnchorPoint.h"
#include "UObject/NoExportTypes.h"
#include "SplineAnchorShapeInfo.h"
#include "ORInteractableComponent_SplineAnchor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORInteractableComponent_SplineAnchor : public UORInteractableComponent_AnchorPoint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RestrictTangentToExitDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ExitTangentDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSplineAnchorShapeInfo> GeneratedCylinderInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinIntendedCylinderLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CylinderSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TanDotThreshold;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinClampDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxClampDistance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineLength;
    
public:
    UORInteractableComponent_SplineAnchor();
protected:
    UFUNCTION(BlueprintCallable)
    void BuildIfUnbuilt();
    
    UFUNCTION(BlueprintCallable)
    void BuildCylinderList();
    
};

