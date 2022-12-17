#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "GameplayTagContainer.h"
#include "EORServiceScopeGameplayTagChangeAction.h"
#include "BTService_ORScopedASCGameplayTag.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTService_ORScopedASCGameplayTag : public UBTService_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORServiceScopeGameplayTagChangeAction EnterAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORServiceScopeGameplayTagChangeAction ExitAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CachedGameplayTagsDescription;
    
public:
    UBTService_ORScopedASCGameplayTag();
};

