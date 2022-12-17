#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LootDropInfo.generated.h"

class UORLootTableBase;

USTRUCT(BlueprintType)
struct FLootDropInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UORLootTableBase> TableReference;
    
    UPROPERTY(EditAnywhere)
    int64 MaxLootToDrop;
    
    OREGON_API FLootDropInfo();
};

