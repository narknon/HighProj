#pragma once
#include "CoreMinimal.h"
#include "RegisteredRealmReachData.generated.h"

class AORRealmReachActor;

USTRUCT(BlueprintType)
struct OREGON_API FRegisteredRealmReachData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AORRealmReachActor* Actor;
    
    FRegisteredRealmReachData();
};

