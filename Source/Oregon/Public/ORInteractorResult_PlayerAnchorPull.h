#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORInteractorResult_AnchorReaction.h"
#include "ORInteractorResult_PlayerAnchorPull.generated.h"

class USkeletalMeshComponent;
class UORInteractorResult;

UCLASS(Blueprintable)
class OREGON_API UORInteractorResult_PlayerAnchorPull : public UORInteractorResult_AnchorReaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UORInteractorResult> PostAnchorActionClass;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<USkeletalMeshComponent> KnifeyMesh;
    
    UORInteractorResult_PlayerAnchorPull();
protected:
    UFUNCTION(BlueprintCallable)
    void SwitchToLeftArm();
    
public:
    UFUNCTION(BlueprintCallable)
    void AnchorSwingComplete(bool bCancelled);
    
};

