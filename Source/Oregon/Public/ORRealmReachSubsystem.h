#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "Engine/EngineTypes.h"
#include "ORRealmReachSubsystem.generated.h"

class AActor;
class AORRealmReachActor;

UCLASS(Blueprintable)
class OREGON_API UORRealmReachSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UORRealmReachSubsystem();
    UFUNCTION(BlueprintCallable)
    void UnregisterRealmReachActor(AORRealmReachActor* RealmReachActor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterRealmReachActor(AORRealmReachActor* RealmReachActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStreamedHLODRemoved(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

