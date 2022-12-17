#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UObject/NoExportTypes.h"
#include "MercunaRaycastResultDelegate.h"
#include "MercunaOctreeRaycastProxy.generated.h"

class UObject;
class UMercunaOctreeRaycastProxy;

UCLASS(Blueprintable, MinimalAPI)
class UMercunaOctreeRaycastProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercunaRaycastResult OnNoHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercunaRaycastResult OnHit;
    
    UMercunaOctreeRaycastProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMercunaOctreeRaycastProxy* NavigationRaycast(UObject* WorldContextObject, FVector Start, FVector End, float NavigationRadius);
    
};

