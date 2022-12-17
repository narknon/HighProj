#pragma once
#include "CoreMinimal.h"
#include "ORProjectile.h"
#include "ORGarmProjectile.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class OREGON_API AORGarmProjectile : public AORProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* FXComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraSystem*> FXAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraSystem*> Part2FxAssets;
    
    AORGarmProjectile();
    UFUNCTION(BlueprintCallable)
    void AttemptActivation();
    
};

