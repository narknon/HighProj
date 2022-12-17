#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "AxisBind.generated.h"

USTRUCT(BlueprintType)
struct FAxisBind {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FInputAxisKeyMapping> Axes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugBind;
    
    SQUANCHINPUT_API FAxisBind();
};

