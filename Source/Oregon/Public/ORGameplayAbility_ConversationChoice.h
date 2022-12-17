#pragma once
#include "CoreMinimal.h"
#include "ORGameplayAbility.h"
#include "ORGameplayAbility_ConversationChoice.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORGameplayAbility_ConversationChoice : public UORGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChoiceIndex;
    
    UORGameplayAbility_ConversationChoice();
};

