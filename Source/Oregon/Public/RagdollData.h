#pragma once
#include "CoreMinimal.h"
#include "RagdollData.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct OREGON_API FRagdollData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ElapsedLifetime;
    
    FRagdollData();
};

