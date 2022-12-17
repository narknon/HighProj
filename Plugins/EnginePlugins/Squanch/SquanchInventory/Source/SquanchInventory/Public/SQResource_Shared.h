#pragma once
#include "CoreMinimal.h"
#include "SQResourceComponent.h"
#include "GameplayTagContainer.h"
#include "SQResource_Shared.generated.h"

UCLASS(Blueprintable)
class SQUANCHINVENTORY_API USQResource_Shared : public USQResourceComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SharedResourceMode;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<USQResourceComponent> SharedResource;
    
public:
    USQResource_Shared();
};

