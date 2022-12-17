#pragma once
#include "CoreMinimal.h"
#include "SQProjectileTeleportInterface.h"
#include "Components/StaticMeshComponent.h"
#include "ORStreamingPortalCollisionComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORStreamingPortalCollisionComponent : public UStaticMeshComponent, public ISQProjectileTeleportInterface {
    GENERATED_BODY()
public:
    UORStreamingPortalCollisionComponent();
    
    // Fix for true pure virtual functions not being implemented
};

