#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "KeyCombo.generated.h"

USTRUCT(BlueprintType)
struct FKeyCombo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FKey> Combo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FKey> PressedKeys;
    
    SQUANCHINPUT_API FKeyCombo();
};

