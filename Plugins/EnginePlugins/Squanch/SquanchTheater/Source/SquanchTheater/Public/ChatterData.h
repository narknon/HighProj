#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ChatterData.generated.h"

class UChatterExtension;
class ULevelSequence;

UCLASS(Blueprintable)
class UChatterData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelSequence*> Chatter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UChatterExtension*> Extensions;
    
    UChatterData();
};

