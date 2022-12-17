#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ORLootTableBase.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class OREGON_API UORLootTableBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLootToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ItemTable;
    
    UORLootTableBase();
};

