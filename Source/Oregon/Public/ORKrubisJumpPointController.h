#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "ORKrubisJumpPointPair.h"
#include "ORKrubisJumpPointController.generated.h"

class AORKrubisJumpPointActor;

UCLASS(Blueprintable)
class OREGON_API AORKrubisJumpPointController : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AORKrubisJumpPointActor*> ActivePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AORKrubisJumpPointActor*> StartPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AORKrubisJumpPointActor*> TerminalPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PhaseTransitionPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AORKrubisJumpPointActor*> KrubisPathPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> KrubisLaserPointPairs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DigDirectionOffset;
    
public:
    AORKrubisJumpPointController();
    UFUNCTION(BlueprintCallable)
    TArray<FORKrubisJumpPointPair> MakeNewKrubisMultiPointPath(int32 NumPaths);
    
    UFUNCTION(BlueprintCallable)
    AORKrubisJumpPointActor* GetMultiPathPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentPathPointLocation();
    
    UFUNCTION(BlueprintCallable)
    bool FindWallPointNearLocation(FVector TargetLocation, float MaxDistance, UPARAM(Ref) FVector& WallPointLocation);
    
    UFUNCTION(BlueprintCallable)
    AORKrubisJumpPointActor* FindClosestWallJumpPoint(FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable)
    TArray<FORKrubisJumpPointPair> AddKrubisMultiPointPath(int32 NumPaths, float VelocityPrediction);
    
};

