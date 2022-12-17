#pragma once
#include "CoreMinimal.h"
#include "SQFireLoopComponent.h"
#include "ORGlobalEventListener.h"
#include "ORFireLoop_Melee.generated.h"

class UORGlobalEventPayload;

UCLASS(Blueprintable)
class OREGON_API UORFireLoop_Melee : public USQFireLoopComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FORGlobalEventListener MeleeEventListener;
    
public:
    UORFireLoop_Melee();
protected:
    UFUNCTION(BlueprintCallable)
    void OnMeleeAttackEnd(const UORGlobalEventPayload* EventData);
    
};

