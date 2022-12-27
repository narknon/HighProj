#pragma once
#include "CoreMinimal.h"
#include "ORAIScriptCommandBase.h"
#include "UObject/NoExportTypes.h"
#include "ORAIScriptCommand_MoveTo.generated.h"

class AActor;
class UAITask;

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORAIScriptCommand_MoveTo : public UORAIScriptCommandBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowPartialPathing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavMeshWaitTime;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAITask* MoveTask;
    
    UORAIScriptCommand_MoveTo();
};

