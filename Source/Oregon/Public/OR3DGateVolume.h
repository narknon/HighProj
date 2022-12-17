#pragma once
#include "CoreMinimal.h"
#include "ORTriggerVolume.h"
#include "OR3DGateVolume.generated.h"

class AOR3DMapVolume;
class UStaticMeshComponent;
class UMaterialInterface;
class UStaticMesh;

UCLASS(Blueprintable)
class OREGON_API AOR3DGateVolume : public AORTriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* GateMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* GateMeshMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AOR3DMapVolume*> ConnectedMapVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComp;
    
    AOR3DGateVolume();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMeshComponent* GetStaticMeshComponent() const;
    
};

