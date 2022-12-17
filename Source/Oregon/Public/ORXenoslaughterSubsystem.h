#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ORStreamingPreloadInterface.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "OnXenoslaughterDiedDelegate.h"
#include "OnXenoslaughterResetDelegate.h"
#include "OnXenoslaughterUnloadedDelegate.h"
#include "OnXenoslaughterLoadedDelegate.h"
#include "ORXenoslaughterSubsystem.generated.h"

class UObject;
class AActor;
class APawn;
class AORCharacter;
class APlayerController;
class UMaterialInterface;

UCLASS(Blueprintable)
class OREGON_API UORXenoslaughterSubsystem : public UGameInstanceSubsystem, public IORStreamingPreloadInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnXenoslaughterLoaded OnXenoslaughterLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnXenoslaughterUnloaded OnXenoslaughterUnloaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnXenoslaughterReset OnXenoslaughterReset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnXenoslaughterDied OnXenoslaughterPlayerDied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActiveXenoslaughterMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* CachedXenoslaughterController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* CachedXenoslaughterPawn;
    
    UORXenoslaughterSubsystem();
    UFUNCTION(BlueprintCallable)
    void UnloadXenoslaughter();
    
    UFUNCTION(BlueprintCallable)
    void ResetXenoslaughter();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OwnerDiedEventFired(UObject* Killer, AORCharacter* Killed, const FHitResult& HitResult, const FGameplayTagContainer& DamageTags);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadXenoslaughter(AActor* XenoslaughterMachine);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable)
    UMaterialInterface* GetXSRenderMaterial();
    
    
    // Fix for true pure virtual functions not being implemented
};

