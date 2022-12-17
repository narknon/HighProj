#pragma once
#include "CoreMinimal.h"
#include "ORBaseDamageable.h"
#include "ORDamageable_Luglox.generated.h"

class USkeletalMeshComponentBudgeted;

UCLASS(Blueprintable)
class OREGON_API AORDamageable_Luglox : public AORBaseDamageable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<USkeletalMeshComponentBudgeted> BudgetedMesh;
    
public:
    AORDamageable_Luglox();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USkeletalMeshComponentBudgeted* GetBudgetedMesh();
    
};

