#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FireMode.generated.h"

class USQFiringResultComponent;
class USQFireLoopComponent;
class USQFireableItemComponent;
class USQResourceComponent;

USTRUCT(BlueprintType)
struct FFireMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USQFireableItemComponent>> ItemComponentClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USQFireableItemComponent*> ItemComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USQFireableItemComponent*> TickableComponents;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<USQFireLoopComponent> FireLoop;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<USQFiringResultComponent> FiringResult;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<USQResourceComponent> Resource;
    
    SQUANCHINVENTORY_API FFireMode();
};

