#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MercunaPawnUsageFlags.h"
#include "MercunaNavigationComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMercunaMoveComplete);

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MERCUNA_API UMercunaNavigationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercunaMoveComplete OnMoveCompleted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DynamicAvoidance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercunaPawnUsageFlags UsageFlags;
    
public:
    UMercunaNavigationComponent();
};

