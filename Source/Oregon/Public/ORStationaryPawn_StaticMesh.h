#pragma once
#include "CoreMinimal.h"
#include "ORStationaryPawn.h"
#include "ORStationaryPawn_StaticMesh.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class OREGON_API AORStationaryPawn_StaticMesh : public AORStationaryPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    AORStationaryPawn_StaticMesh();
};

