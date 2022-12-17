#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ORAnimNotifyState_KnifeyMontage.generated.h"

class AActor;
class USkeletalMeshComponent;
class UAnimMontage;

UCLASS(Blueprintable, CollapseCategories)
class OREGON_API UORAnimNotifyState_KnifeyMontage : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> KnifeyActor;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<USkeletalMeshComponent> KnifeySkelmesh;
    
    UORAnimNotifyState_KnifeyMontage();
};

