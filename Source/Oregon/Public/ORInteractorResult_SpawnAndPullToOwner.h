#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORInteractorResult_AnchorReaction.h"
#include "UObject/NoExportTypes.h"
#include "ORInteractorResult_SpawnAndPullToOwner.generated.h"

class AActor;

UCLASS(Blueprintable)
class OREGON_API UORInteractorResult_SpawnAndPullToOwner : public UORInteractorResult_AnchorReaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SpawnableClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PullSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpawnedGrabbable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InitialPullLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurrentTargetLocation;
    
    UORInteractorResult_SpawnAndPullToOwner();
};

