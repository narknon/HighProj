#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "ORStreamingHavenPortal.generated.h"

class USceneComponent;
class UWorld;
class UORTriggerVolumeComponent;

UCLASS(Blueprintable)
class OREGON_API AORStreamingHavenPortal : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORTriggerVolumeComponent* VolumeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ReturnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> HavenGameplayLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReturnPortal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TeleportedMissionVar;
    
    AORStreamingHavenPortal();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEntered();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleEntered(AActor* Actor, int32 VolumeIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void DoTeleport();
    
};

