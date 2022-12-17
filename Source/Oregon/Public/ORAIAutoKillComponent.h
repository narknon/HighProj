#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Perception/AIPerceptionTypes.h"
#include "ORAIAutoKillComponent.generated.h"

class AActor;
class AORAIController;
class AORCharacter;
class AORAICharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORAIAutoKillComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AORAICharacter* OwningAICharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AORAIController* OwningAIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NoLOSAutoKillEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoLOSAutoKillTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle NoLOSAutoKillTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceAutoKillEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceAutoKillTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle ForceAutoKillTimerHandle;
    
public:
    UORAIAutoKillComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void TargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetNoLOSAutoKillEnabled(const bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetForceAutoKillEnabled(const bool Enabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void KillOwningCharacter();
    
public:
    UFUNCTION(BlueprintCallable)
    void AICharacterSpawnedFromPool(AORCharacter* SpawnedCharacter);
    
    UFUNCTION(BlueprintCallable)
    void AICharacterReturnedToPool(AORCharacter* SpawnedCharacter);
    
};

