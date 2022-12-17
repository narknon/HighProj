#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "ORStreamingPortalProxyComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORStreamingPortalProxyComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* TargetComponent;
    
    UORStreamingPortalProxyComponent();
};

