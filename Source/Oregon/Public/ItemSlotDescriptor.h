#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ItemSlotDescriptor.generated.h"

USTRUCT(BlueprintType)
struct FItemSlotDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag SlotTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 MaxCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 MaxConcurrentEquippables;
    
    OREGON_API FItemSlotDescriptor();
};

