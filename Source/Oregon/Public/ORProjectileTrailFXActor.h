#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORProjectileTrailFXActor.generated.h"

class USceneComponent;
class UNiagaraComponent;
class UNiagaraSystem;

UCLASS(Blueprintable)
class OREGON_API AORProjectileTrailFXActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* VFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FollowActor;
    
    AORProjectileTrailFXActor();
    UFUNCTION(BlueprintCallable)
    void StopVFX();
    
};

