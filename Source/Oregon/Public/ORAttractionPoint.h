#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORAttractionPoint.generated.h"

class UORAttractionPointComponent;

UCLASS(Abstract, Blueprintable)
class OREGON_API AORAttractionPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORAttractionPointComponent* AttractionPointComponent;
    
    AORAttractionPoint();
};

