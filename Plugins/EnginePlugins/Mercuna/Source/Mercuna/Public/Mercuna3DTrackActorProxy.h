#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MercunaNavigationResultDelegate.h"
#include "AITypes.h"
#include "EMercunaMoveResult.h"
#include "Mercuna3DTrackActorProxy.generated.h"

class UObject;
class AActor;
class APawn;
class UMercuna3DTrackActorProxy;

UCLASS(Blueprintable, MinimalAPI)
class UMercuna3DTrackActorProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercunaNavigationResult OnFailure;
    
    UMercuna3DTrackActorProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMercuna3DTrackActorProxy* TrackActor(UObject* WorldContextObject, APawn* Pawn, AActor* Actor, float Distance, float Speed);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMoveComplete(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result);
    
};

