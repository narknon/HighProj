#pragma once
#include "CoreMinimal.h"
#include "ORInteractorResult_AnchorReaction.h"
#include "UObject/NoExportTypes.h"
#include "ORInteractorResult_PullToOwner.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORInteractorResult_PullToOwner : public UORInteractorResult_AnchorReaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InitialPullLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurrentTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PullSpeed;
    
    UORInteractorResult_PullToOwner();
};

