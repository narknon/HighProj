#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "OnPauseStateChangedDelegate.h"
#include "OnGamemodeShutdownDelegate.h"
#include "Chaos/ChaosEngineInterface.h"
#include "ORGameModeBase.generated.h"

class UAkAudioEvent;
class UWorld;
class UAkSwitchValue;
class USignificanceManager;
class ULevel;

UCLASS(Blueprintable, NonTransient)
class OREGON_API AORGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ResetAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ResetSlomoAudioEvent;
    
protected:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<USignificanceManager> SignificanceManager;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, UAkSwitchValue*> SurfaceToSwitchCacheMap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPauseStateChanged PauseStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGamemodeShutdown ShutdownTriggered;
    
    AORGameModeBase();
    UFUNCTION(BlueprintCallable)
    void TimedFreezeEffect(float FreezeTime);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelAddedToWorld(ULevel* InLevel, UWorld* InWorld);
    
};

