#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UObject/NoExportTypes.h"
#include "MercunaClampToNavigableResultDelegate.h"
#include "MercunaOctreeClampToNavigableProxy.generated.h"

class UObject;
class UMercunaOctreeClampToNavigableProxy;

UCLASS(Blueprintable, MinimalAPI)
class UMercunaOctreeClampToNavigableProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercunaClampToNavigableResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercunaClampToNavigableResult OnFailure;
    
    UMercunaOctreeClampToNavigableProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMercunaOctreeClampToNavigableProxy* ClampToNavigable(UObject* WorldContextObject, FVector Position, float NavigationRadius, float SearchRadius);
    
};

