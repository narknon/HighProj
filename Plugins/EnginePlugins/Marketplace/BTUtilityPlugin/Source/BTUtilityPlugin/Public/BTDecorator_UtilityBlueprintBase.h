#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_UtilityFunction.h"
#include "BTDecorator_UtilityBlueprintBase.generated.h"

class AActor;
class APawn;
class AAIController;

UCLASS(Abstract, Blueprintable)
class BTUTILITYPLUGIN_API UBTDecorator_UtilityBlueprintBase : public UBTDecorator_UtilityFunction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIController* AIOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ActorOwner;
    
public:
    UBTDecorator_UtilityBlueprintBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalculateUtility(AAIController* OwnerController, APawn* ControlledPawn) const;
    
};

