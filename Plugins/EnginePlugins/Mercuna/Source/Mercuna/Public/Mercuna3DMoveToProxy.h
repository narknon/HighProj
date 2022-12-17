#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UObject/NoExportTypes.h"
#include "MercunaNavigationResultDelegate.h"
#include "AITypes.h"
#include "EMercunaMoveResult.h"
#include "Mercuna3DMoveToProxy.generated.h"

class UObject;
class AActor;
class APawn;
class UMercuna3DMoveToProxy;

UCLASS(Blueprintable, MinimalAPI)
class UMercuna3DMoveToProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercunaNavigationResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercunaNavigationResult OnFailure;
    
    UMercuna3DMoveToProxy();
private:
    UFUNCTION(BlueprintCallable)
    void OnMoveComplete(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMercuna3DMoveToProxy* MoveToLocations(UObject* WorldContextObject, APawn* Pawn, const TArray<FVector>& Destinations, float EndDistance, float Speed, bool UsePartialPath);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMercuna3DMoveToProxy* MoveToLocation(UObject* WorldContextObject, APawn* Pawn, const FVector& Destination, float EndDistance, float Speed, bool UsePartialPath);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMercuna3DMoveToProxy* MoveToActor(UObject* WorldContextObject, APawn* Pawn, AActor* Actor, float EndDistance, float Speed, bool UsePartialPath);
    
};

