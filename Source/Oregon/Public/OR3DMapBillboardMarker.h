#pragma once
#include "CoreMinimal.h"
#include "OR3DMapMarker.h"
#include "OR3DMapBillboardMarker.generated.h"

class UMaterialBillboardComponent;

UCLASS(Blueprintable)
class OREGON_API AOR3DMapBillboardMarker : public AOR3DMapMarker {
    GENERATED_BODY()
public:
    AOR3DMapBillboardMarker();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialBillboardComponent* GetMaterialBillboardComponent() const;
    
};

