#pragma once
#include "CoreMinimal.h"
#include "ORSuctionComponent.h"
#include "ORSuctionObjectComponent.generated.h"

class USQProjectileMovementComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORSuctionObjectComponent : public UORSuctionComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ObjectMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USQProjectileMovementComponent* ProjMovementComp;
    
public:
    UORSuctionObjectComponent();
};

