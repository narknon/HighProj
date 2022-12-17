#pragma once
#include "CoreMinimal.h"
#include "ORStationaryPawn_StaticMesh.h"
#include "UObject/NoExportTypes.h"
#include "ORTurretPawn.generated.h"

class AActor;

UCLASS(Blueprintable)
class OREGON_API AORTurretPawn : public AORStationaryPawn_StaticMesh {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetingVerticalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPitchPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxYawPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator PreviousRotation;
    
public:
    AORTurretPawn();
    UFUNCTION(BlueprintCallable)
    void RotateTowardsActor(float DeltaTime, AActor* TargetActor);
    
};

