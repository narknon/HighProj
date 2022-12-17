#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GazeDebugeDelegateDelegate.h"
#include "ORPlayerGazeComponent.generated.h"

class UORGazeTargetComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORPlayerGazeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxGazeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisualizePadding;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGazeDebugeDelegate DebugPlayerDirectGaze;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UORGazeTargetComponent* CurrentTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UORGazeTargetComponent*> AllPossibleTargets;
    
public:
    UORPlayerGazeComponent();
};

