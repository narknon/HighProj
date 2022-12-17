#pragma once
#include "CoreMinimal.h"
#include "ORDamageHandlerComponent_Character.h"
#include "ORDamageHandlerComponent_NPCCharacter.generated.h"

class AORNPCCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORDamageHandlerComponent_NPCCharacter : public UORDamageHandlerComponent_Character {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysSendDamageEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HackCurrentHealthForNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HackCurrentHealthMaxForNPCs;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AORNPCCharacter* NPC;
    
public:
    UORDamageHandlerComponent_NPCCharacter();
};

