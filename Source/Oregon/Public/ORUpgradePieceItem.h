#pragma once
#include "CoreMinimal.h"
#include "ORUpgradePieceItemInfo.h"
#include "ORCurrencyItem.h"
#include "ORUpgradePieceItem.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORUpgradePieceItem : public AORCurrencyItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORUpgradePieceItemInfo> Upgrades;
    
    AORUpgradePieceItem();
};

