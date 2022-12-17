#pragma once
#include "CoreMinimal.h"
#include "ActorsHitByShotList.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorsHitByShotList {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TWeakObjectPtr<AActor>> HitActors;
    
    SQUANCHINVENTORY_API FActorsHitByShotList();
};

