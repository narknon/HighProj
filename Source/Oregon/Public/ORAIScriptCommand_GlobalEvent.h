#pragma once
#include "CoreMinimal.h"
#include "ORAIScriptCommandBase.h"
#include "GameplayTagContainer.h"
#include "ORAIScriptCommand_GlobalEvent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORAIScriptCommand_GlobalEvent : public UORAIScriptCommandBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GlobalEventTag;
    
    UORAIScriptCommand_GlobalEvent();
};

