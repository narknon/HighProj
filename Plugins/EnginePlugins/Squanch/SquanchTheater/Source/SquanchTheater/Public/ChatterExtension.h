#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ChatterCondition.h"
#include "ChatterExtension.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class UChatterExtension : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChatterCondition> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelSequence*> Chatter;
    
    UChatterExtension();
};

