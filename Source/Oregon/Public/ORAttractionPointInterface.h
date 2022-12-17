#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ORAttractionPointInterface.generated.h"

class AActor;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UORAttractionPointInterface : public UInterface {
    GENERATED_BODY()
};

class IORAttractionPointInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool HasRightCornerLineOfSight() const PURE_VIRTUAL(HasRightCornerLineOfSight, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasRightCornerCover() const PURE_VIRTUAL(HasRightCornerCover, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasLowCoverLineOfSight() const PURE_VIRTUAL(HasLowCoverLineOfSight, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasLowCover() const PURE_VIRTUAL(HasLowCover, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasLeftCornerLineOfSight() const PURE_VIRTUAL(HasLeftCornerLineOfSight, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasLeftCornerCover() const PURE_VIRTUAL(HasLeftCornerCover, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasHighCover() const PURE_VIRTUAL(HasHighCover, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasAnyCoverAvailable() const PURE_VIRTUAL(HasAnyCoverAvailable, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual float GetTimeWithAnyLineOfSight() const PURE_VIRTUAL(GetTimeWithAnyLineOfSight, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual float GetTimeSinceLostLineOfSight() const PURE_VIRTUAL(GetTimeSinceLostLineOfSight, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual FTransform GetCoverPointTransform() const PURE_VIRTUAL(GetCoverPointTransform, return FTransform{};);
    
    UFUNCTION(BlueprintCallable)
    virtual AActor* GetClaimantActor() const PURE_VIRTUAL(GetClaimantActor, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual FVector GetAttractionPointLocation() const PURE_VIRTUAL(GetAttractionPointLocation, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    virtual void EnableAttractionPoint() PURE_VIRTUAL(EnableAttractionPoint,);
    
    UFUNCTION(BlueprintCallable)
    virtual void DisableAttractionPoint() PURE_VIRTUAL(DisableAttractionPoint,);
    
};

