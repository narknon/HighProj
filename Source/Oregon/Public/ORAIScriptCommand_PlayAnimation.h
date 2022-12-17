#pragma once
#include "CoreMinimal.h"
#include "ORAIScriptCommandBase.h"
#include "ORAIScriptCommand_PlayAnimation.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORAIScriptCommand_PlayAnimation : public UORAIScriptCommandBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMontageFinished;
    
    UORAIScriptCommand_PlayAnimation();
    UFUNCTION(BlueprintCallable)
    void HandleMontageEnding(UAnimMontage* NewMontage, bool bInterrupted);
    
};

