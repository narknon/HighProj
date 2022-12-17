#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORGameplayAbility.h"
#include "ORGameplayAbility_FireZiplineCannon.generated.h"

class AActor;

UCLASS(Blueprintable)
class OREGON_API UORGameplayAbility_FireZiplineCannon : public UORGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ZiplineType;
    
public:
    UORGameplayAbility_FireZiplineCannon();
};

