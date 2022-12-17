#pragma once
#include "CoreMinimal.h"
#include "OR3PAnimInstance_Henchman.h"
#include "EAttractionPointCoverType.h"
#include "EAttractionPointCornerCoverType.h"
#include "OR3PAnimInstance_Merk.generated.h"

class UAimOffsetBlendSpace;

UCLASS(Blueprintable, NonTransient)
class OREGON_API UOR3PAnimInstance_Merk : public UOR3PAnimInstance_Henchman {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMovingOrCovering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttractionPointCoverType AttractionPointCoverType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttractionPointCornerCoverType AttractionPointCornerCoverType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAimOffsetBlendSpace* ActiveAimOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAimOffsetBlendSpace* StandingAimOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAimOffsetBlendSpace* LowCoverAimOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAttractionPointCornerCoverType, UAimOffsetBlendSpace*> HighCoverAimOffsets;
    
public:
    UOR3PAnimInstance_Merk();
};

