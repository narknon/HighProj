#pragma once
#include "CoreMinimal.h"
#include "ItemSlotDescriptor.h"
#include "GameplayTagContainer.h"
#include "SlotData.generated.h"

USTRUCT(BlueprintType)
struct FSlotData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FItemSlotDescriptor SlotDescriptor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ItemsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> CurrentEquippedItems;
    
    OREGON_API FSlotData();
};

