#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORSequenceMoveTarget.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORSequenceMoveTarget : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroupName;
    
    AORSequenceMoveTarget();
};

