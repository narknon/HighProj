#pragma once
#include "CoreMinimal.h"
#include "GlobalEventDelegateOneParamDelegate.h"
#include "GlobalEventDelegateDelegate.h"
#include "ORGlobalEventListener.generated.h"

class UObject;
class UFunction;

USTRUCT(BlueprintType)
struct FORGlobalEventListener {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UObject> WorldContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFunction* Function;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalEventDelegate Delegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalEventDelegateOneParam DelegateOneParam;
    
    OREGON_API FORGlobalEventListener();
};

