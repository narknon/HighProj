#pragma once
#include "CoreMinimal.h"
#include "FiringVFX.h"
#include "FiringResultFX.generated.h"

class UAkAudioEvent;
class UNiagaraSystem;
class UParticleSystem;
class USoundCue;

USTRUCT(BlueprintType)
struct FFiringResultFX {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NiagaraFiringVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFiringVFX> NiagaraFiringVFXList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* FiringVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* FiringSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FireSFX;
    
    SQUANCHINVENTORY_API FFiringResultFX();
};

