#pragma once
#include "CoreMinimal.h"
#include "ORFireLoop_EnemyBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DifficultyFloat -FallbackName=DifficultyFloat
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DifficultyInt -FallbackName=DifficultyInt
#include "ORFireLoop_Enemy.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORFireLoop_Enemy : public UORFireLoop_EnemyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyInt FiringResultCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyInt FiringResultCountUpperBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyFloat TimeBetweenResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyFloat TimeBetweenResultsUpperBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyFloat InitialDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyFloat InitialDelayUpperBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 FiresLeft;
    
public:
    UORFireLoop_Enemy();
};

