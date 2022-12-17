#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SaveSystemSetStateRawDelegateDelegate.h"
#include "SaveSystemSetStateDelegateDelegate.h"
#include "SaveSystemBindableSetState.generated.h"

UCLASS(Blueprintable)
class SAVESYSTEM_API USaveSystemBindableSetState : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveSystemSetStateDelegate SetStateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveSystemSetStateRawDelegate SetStateRawDelegate;
    
    USaveSystemBindableSetState();
};

