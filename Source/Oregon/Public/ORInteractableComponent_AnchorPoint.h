#pragma once
#include "CoreMinimal.h"
#include "ORInteractableComponent.h"
#include "UObject/NoExportTypes.h"
#include "EPostAnchorResult.h"
#include "ORInteractableComponent_AnchorPoint.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORInteractableComponent_AnchorPoint : public UORInteractableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GoalLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPostAnchorResult> PostAnchorResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ExitVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExitVelocityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowIndicatorOnMesh;
    
    UORInteractableComponent_AnchorPoint();
};

