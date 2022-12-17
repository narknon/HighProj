#pragma once
#include "CoreMinimal.h"
#include "SQItemAttachment.h"
#include "ORItemAttach_CharacterProxy.generated.h"

class AORCharacter;

UCLASS(Blueprintable)
class OREGON_API AORItemAttach_CharacterProxy : public ASQItemAttachment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AORCharacter> CachedCharacter;
    
public:
    AORItemAttach_CharacterProxy();
};

