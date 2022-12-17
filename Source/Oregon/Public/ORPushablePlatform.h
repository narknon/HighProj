#pragma once
#include "CoreMinimal.h"
#include "ORBaseDamageable.h"
#include "UObject/NoExportTypes.h"
#include "ORPushablePlatform.generated.h"

class AActor;
class USceneComponent;
class AORCharacter;
class UORTriggerVolumeComponent;

UCLASS(Blueprintable)
class OREGON_API AORPushablePlatform : public AORBaseDamageable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORTriggerVolumeComponent* OverlapTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AORCharacter*> OverlappingCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AORCharacter*> LaunchedCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LaunchVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NormalizedLaunchVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchMagnitude;
    
public:
    AORPushablePlatform();
protected:
    UFUNCTION(BlueprintCallable)
    void TriggerRotation(USceneComponent* HitComponent, bool bLeftRotation);
    
    UFUNCTION(BlueprintCallable)
    void TriggerOverlapEnd(AActor* OtherActor, int32 VolumeIndex);
    
    UFUNCTION(BlueprintCallable)
    void TriggerOverlapBegin(AActor* OtherActor, int32 VolumeIndex);
    
};

