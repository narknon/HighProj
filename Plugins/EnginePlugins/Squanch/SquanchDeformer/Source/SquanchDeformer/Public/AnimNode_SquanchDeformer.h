#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "AnimNode_SquanchDeformer.generated.h"

class USQDeformerComponent;

USTRUCT(BlueprintType)
struct SQUANCHDEFORMER_API FAnimNode_SquanchDeformer : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQDeformerComponent* DeformerComponent;
    
    FAnimNode_SquanchDeformer();
};

