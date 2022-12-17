#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "AnimNode_SquanchDismember.generated.h"

class USQDismemberComponent;

USTRUCT(BlueprintType)
struct SQUANCHDISMEMBER_API FAnimNode_SquanchDismember : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQDismemberComponent* DismemberComponent;
    
    FAnimNode_SquanchDismember();
};

