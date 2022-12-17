#pragma once
#include "CoreMinimal.h"
#include "ORAIScriptCommandBase.h"
#include "ORAIScriptCommand_StandAndLook.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORAIScriptCommand_StandAndLook : public UORAIScriptCommandBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LookAtTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Lifetime;
    
    UORAIScriptCommand_StandAndLook();
};

