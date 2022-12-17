#pragma once
#include "CoreMinimal.h"
#include "OR3DMapMarker.h"
#include "OR3DMapStaticMeshMarker.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class OREGON_API AOR3DMapStaticMeshMarker : public AOR3DMapMarker {
    GENERATED_BODY()
public:
    AOR3DMapStaticMeshMarker();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMeshComponent* GetStaticMeshComponent() const;
    
};

