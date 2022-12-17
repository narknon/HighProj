#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemComponentAttributeData.generated.h"

class UAttributeSet;
class UDataTable;

USTRUCT(BlueprintType)
struct FItemComponentAttributeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAttributeSet> AttributeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AttributeDefaults;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UAttributeSet> CachedAttributes;
    
    SQUANCHINVENTORY_API FItemComponentAttributeData();
};

