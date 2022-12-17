#pragma once
#include "CoreMinimal.h"
#include "FiringVFX.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FFiringVFX {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NiagaraFiringVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttachedToSocket;
    
    SQUANCHINVENTORY_API FFiringVFX();
};

