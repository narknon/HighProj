#pragma once
#include "CoreMinimal.h"
#include "SQTargetListComponent.h"
#include "TraceSettings.h"
#include "SQTargetList_ExtentTrace.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SQUANCHINVENTORY_API USQTargetList_ExtentTrace : public USQTargetListComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTraceSettings> TraceList;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMultipleTargets;
    
public:
    USQTargetList_ExtentTrace();
};

