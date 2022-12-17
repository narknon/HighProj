#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ORTriggerVolumeComponentInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EORTriggerSystemShape.h"
#include "ORDetachedTriggerSubsystemComponentBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORDetachedTriggerSubsystemComponentBase : public UActorComponent, public IORTriggerVolumeComponentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORTriggerSystemShape Shape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Orientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CapsuleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoxExtents;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor ShapeColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawOnlyIfSelected: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawSolid: 1;
    
    UORDetachedTriggerSubsystemComponentBase();
    UFUNCTION(BlueprintCallable)
    void SetSphereRadius(float InSphereRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetShape(EORTriggerSystemShape InShape);
    
    UFUNCTION(BlueprintCallable)
    void SetCapsuleRadius(float InCapsuleRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetCapsuleHalfHeight(float InCapsuleHalfHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetBoxExtents(const FVector& InBoxExtents);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EORTriggerSystemShape GetShape() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

