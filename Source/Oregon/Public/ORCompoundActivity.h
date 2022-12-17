#pragma once
#include "CoreMinimal.h"
#include "ORActivityBase.h"
#include "EActivityExecutionMode.h"
#include "ORCompoundActivity.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORCompoundActivity : public UORActivityBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UORActivityBase*> Activities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActivityExecutionMode ExecutionMode;
    
    UORCompoundActivity();
protected:
    UFUNCTION(BlueprintCallable)
    void OnProfileActivityEnd(UORActivityBase* Activity);
    
    UFUNCTION(BlueprintCallable)
    void OnProfileActivityBegin(UORActivityBase* Activity);
    
    UFUNCTION(BlueprintCallable)
    void BeginNextActivity();
    
};

