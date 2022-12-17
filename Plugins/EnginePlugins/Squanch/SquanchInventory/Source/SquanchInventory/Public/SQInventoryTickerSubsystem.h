#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "SQInventoryTickerSubsystem.generated.h"

class USQFireableItemComponent;
class ASQItemAttachment;
class ASQEquippableInventoryItem;

UCLASS(Blueprintable)
class SQUANCHINVENTORY_API USQInventoryTickerSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASQEquippableInventoryItem*> ActiveItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USQFireableItemComponent*> ActiveItemComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASQItemAttachment*> ActiveItemAttachments;
    
public:
    USQInventoryTickerSubsystem();
};

