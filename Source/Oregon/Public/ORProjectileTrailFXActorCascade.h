#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORProjectileTrailFXActorCascade.generated.h"

class USceneComponent;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class OREGON_API AORProjectileTrailFXActorCascade : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* VFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FollowActor;
    
    AORProjectileTrailFXActorCascade();
    UFUNCTION(BlueprintCallable)
    void StopVFX();
    
};

