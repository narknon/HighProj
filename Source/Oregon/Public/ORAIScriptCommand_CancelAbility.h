#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORAIScriptCommandBase.h"
#include "ORAIScriptCommand_CancelAbility.generated.h"

class UGameplayAbility;

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORAIScriptCommand_CancelAbility : public UORAIScriptCommandBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> AbilityClass;
    
    UORAIScriptCommand_CancelAbility();
};

