#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ORSignificanceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UORSignificanceComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Category;
    
public:
    UORSignificanceComponent();
};

