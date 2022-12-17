#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ActionBind.h"
#include "AxisBind.h"
#include "SQBindManager.generated.h"

UCLASS(Blueprintable)
class SQUANCHINPUT_API USQBindManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FName, FActionBind> Actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FName, FAxisBind> AxisBinds;
    
    USQBindManager();
};

