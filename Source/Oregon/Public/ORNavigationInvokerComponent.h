#pragma once
#include "CoreMinimal.h"
#include "NavigationInvokerComponent.h"
#include "ORNavigationInvokerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORNavigationInvokerComponent : public UNavigationInvokerComponent {
    GENERATED_BODY()
public:
    UORNavigationInvokerComponent();
};

