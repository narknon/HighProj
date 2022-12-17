#pragma once
#include "CoreMinimal.h"
#include "ORAIScriptCommandBase.h"
#include "ORAIScriptCommand_RunActivity.generated.h"

class UORActivityBase;

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORAIScriptCommand_RunActivity : public UORAIScriptCommandBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORActivityBase* Activity;
    
    UORAIScriptCommand_RunActivity();
    UFUNCTION(BlueprintCallable)
    void OnActivityEnd(UORActivityBase* EndedActivity);
    
};

