#pragma once
#include "CoreMinimal.h"
#include "SQExplosionActor.h"
#include "Engine/EngineTypes.h"
#include "EApplicationType.h"
#include "ORExplosionActor.generated.h"

class AActor;
class UORTriggerVolumeComponent;

UCLASS(Abstract, Blueprintable)
class OREGON_API AORExplosionActor : public ASQExplosionActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORTriggerVolumeComponent* TriggerCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EApplicationType> ApplicationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult HitResult;
    
public:
    AORExplosionActor();
protected:
    UFUNCTION(BlueprintCallable)
    void TriggerOverlapEnd(AActor* OtherActor, int32 VolumeIndex);
    
    UFUNCTION(BlueprintCallable)
    void TriggerOverlapBegin(AActor* OtherActor, int32 VolumeIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHitResult(const FHitResult& NewHitResult);
    
};

