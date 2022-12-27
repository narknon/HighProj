#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EORAttractionPointPathfindingGroup.h"
#include "EORAIHostileAwareness.h"
#include "CustomEngine/ESQDifficultyComparisionOperation.h"
#include "CustomEngine/ESQDifficultySetting.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESQDifficultySetting -FallbackName=ESQDifficultySetting
#include "ORDefaultSpawnOptions.generated.h"

class AActor;
class AORPatrolRoute;

USTRUCT(BlueprintType)
struct OREGON_API FORDefaultSpawnOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* InitialTargetPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORAIHostileAwareness AwarenessState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool KeyTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AORPatrolRoute* PatrolRoute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IdleMovementEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleMovementAnchorRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatAnchorRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeafAndDumbDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORAttractionPointPathfindingGroup AttractionPointPathfindingGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SpawnEventTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESQDifficultyComparisionOperation RequiredDifficultyComparison;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESQDifficultySetting RequiredDifficultyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> RequiredObjectiveTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> IgnoredObjectiveTags;
    
    FORDefaultSpawnOptions();
};

