#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FiringComponentList.generated.h"

class USQFireableItemComponent;

USTRUCT(BlueprintType)
struct FFiringComponentList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USQFireableItemComponent>> ItemComponentList;
    
    OREGON_API FFiringComponentList();
};

