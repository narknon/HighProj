#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "SQTargetListComponent.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class SQUANCHINVENTORY_API USQTargetListComponent : public UObject {
    GENERATED_BODY()
public:
    USQTargetListComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetHitResults(TArray<FHitResult>& OutResults, const TArray<AActor*>& IgnoreActorsList, const FVector& AimStart, const FVector& AimEnd);
    
};

