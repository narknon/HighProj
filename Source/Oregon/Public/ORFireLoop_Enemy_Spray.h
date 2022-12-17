#pragma once
#include "CoreMinimal.h"
#include "ORFireLoop_EnemyBase.h"
#include "ORFireLoopEnemy_Spray_Pattern.h"
#include "ORFireLoop_Enemy_Spray.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORFireLoop_Enemy_Spray : public UORFireLoop_EnemyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORFireLoopEnemy_Spray_Pattern> Patterns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 FiresLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 FiresLeftMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PatternIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNewPattern;
    
public:
    UORFireLoop_Enemy_Spray();
};

