#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "ORTriggerVolumeComponentInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EORTriggerSystemShape.h"
#include "ORInnerOuterVolumeInterpolatorComponentCallbackDelegate.h"
#include "ORInnerOuterVolumeInterpolatorComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORInnerOuterVolumeInterpolatorComponent : public UActorComponent, public IORTriggerVolumeComponentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Orientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORTriggerSystemShape InnerShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORTriggerSystemShape OuterShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerSphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterSphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerCapsuleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterCapsuleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerCapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterCapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InnerBoxExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OuterBoxExtents;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor InnerShapeColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor OuterShapeColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerLineThickness;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterLineThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawOnlyIfSelected: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawSolid: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORInnerOuterVolumeInterpolatorComponentCallback OnValueChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerOnly;
    
public:
    UORInnerOuterVolumeInterpolatorComponent();
    UFUNCTION(BlueprintCallable)
    void SetOuterSphereRadius(float InSphereRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetOuterShape(EORTriggerSystemShape InShape);
    
    UFUNCTION(BlueprintCallable)
    void SetOuterCapsuleRadius(float InCapsuleRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetOuterCapsuleHalfHeight(float InCapsuleHalfHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetOuterBoxExtents(const FVector& InBoxExtents);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPlayerOnly(bool bInPlayerOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetInnerSphereRadius(float InSphereRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetInnerShape(EORTriggerSystemShape InShape);
    
    UFUNCTION(BlueprintCallable)
    void SetInnerCapsuleRadius(float InCapsuleRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetInnerCapsuleHalfHeight(float InCapsuleHalfHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetInnerBoxExtents(const FVector& InBoxExtents);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bNewEnabled);
    
    UFUNCTION(BlueprintCallable)
    float GetSignedDistanceToOuterEdge(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    float GetSignedDistanceToInnerEdge(const FVector& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EORTriggerSystemShape GetOuterShape() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EORTriggerSystemShape GetInnerShape() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetActorsInVolume(TSubclassOf<AActor> ClassFilter);
    
    
    // Fix for true pure virtual functions not being implemented
};

