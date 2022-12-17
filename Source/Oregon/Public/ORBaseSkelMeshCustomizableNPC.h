#pragma once
#include "CoreMinimal.h"
#include "ORBaseSkeletalMeshNPC.h"
#include "ORBaseSkelMeshCustomizableNPC.generated.h"

class USQDeformerComponent;
class UORMeshRandomizerComponent;

UCLASS(Blueprintable)
class OREGON_API AORBaseSkelMeshCustomizableNPC : public AORBaseSkeletalMeshNPC {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORMeshRandomizerComponent* MeshRandomizerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQDeformerComponent* DeformerComponent;
    
    AORBaseSkelMeshCustomizableNPC();
};

