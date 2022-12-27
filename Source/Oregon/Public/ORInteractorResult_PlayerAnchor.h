#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORInteractorResult.h"
#include "UObject/NoExportTypes.h"
#include "ORInteractorResult_PlayerAnchor.generated.h"

class UNiagaraComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class OREGON_API UORInteractorResult_PlayerAnchor : public UORInteractorResult {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UORInteractorResult> PostAnchorActionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnchorStrainTime;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<USkeletalMeshComponent> KnifeyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* AnchorHandVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* AnchorVFX;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector PreAnchorLocation;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector VFXGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnchorPSCSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingOffset;
    
public:
    UORInteractorResult_PlayerAnchor();
};

