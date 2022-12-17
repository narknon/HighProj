#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "ORImpactAudioComponent.generated.h"

class AActor;
class UAkAudioEvent;
class UPrimitiveComponent;
class UORAkComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORImpactAudioComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ImpactAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LengthThreshold;
    
    UORImpactAudioComponent();
    UFUNCTION(BlueprintCallable)
    bool SetORAkComponent(UORAkComponent* InORAkComponent);
    
    UFUNCTION(BlueprintCallable)
    bool SetCollidingComponent(UPrimitiveComponent* InCollidingComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    bool Initialize(UPrimitiveComponent* InCollidingComponent, UORAkComponent* InORAkComponent);
    
    UFUNCTION(BlueprintCallable)
    UORAkComponent* GetORAkComponent();
    
    UFUNCTION(BlueprintCallable)
    UPrimitiveComponent* GetCollidingComponent();
    
    UFUNCTION(BlueprintCallable)
    bool EnableCollisionAudio();
    
    UFUNCTION(BlueprintCallable)
    bool DisableCollisionAudio();
    
};

