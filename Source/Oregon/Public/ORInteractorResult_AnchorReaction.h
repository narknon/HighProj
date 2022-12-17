#pragma once
#include "CoreMinimal.h"
#include "ORInteractorResult.h"
#include "ORInteractorResult_AnchorReaction.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable)
class OREGON_API UORInteractorResult_AnchorReaction : public UORInteractorResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* AnchorHandVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* AnchorVFX;
    
    UORInteractorResult_AnchorReaction();
};

