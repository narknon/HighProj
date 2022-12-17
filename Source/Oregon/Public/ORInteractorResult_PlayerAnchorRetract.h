#pragma once
#include "CoreMinimal.h"
#include "ORInteractorResult_AnchorReaction.h"
#include "UObject/NoExportTypes.h"
#include "ORInteractorResult_PlayerAnchorRetract.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class OREGON_API UORInteractorResult_PlayerAnchorRetract : public UORInteractorResult_AnchorReaction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<USkeletalMeshComponent> KnifeyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector VFXOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RetractSpeed;
    
public:
    UORInteractorResult_PlayerAnchorRetract();
};

