#pragma once
#include "CoreMinimal.h"
#include "EquippableItemData.h"
#include "EquippableItemStack.generated.h"

USTRUCT(BlueprintType)
struct FEquippableItemStack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FEquippableItemData> Items;
    
    OREGON_API FEquippableItemStack();
};

