#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "ORAttractionPointInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AttractionPointCoverQuery.h"
#include "GameplayTagContainer.h"
#include "EORAttractionPointPathfindingGroup.h"
#include "AttractionPointClaimedDelegateDelegate.h"
#include "ORAttractionPointComponent.generated.h"

class AActor;
class UBillboardComponent;
class UTexture2D;
class UTextRenderComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORAttractionPointComponent : public UPrimitiveComponent, public IORAttractionPointInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BillboardTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform CoverPointTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LocationTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORAttractionPointPathfindingGroup PathfindingGroup;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttractionPointClaimedDelegate OnClaimed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Claimant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* DebugText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBillboardComponent* Billboard;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoEnableOnBeginPlay;
    
    UORAttractionPointComponent();
    UFUNCTION(BlueprintCallable)
    bool SetAttractionPointClaimed(bool bClaimed, AActor* AIActor);
    
    UFUNCTION(BlueprintCallable)
    bool NotifyAttractionPointMoveFailed(AActor* Notifier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttractionPointClaimed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRightCornerLineOfSight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRightCornerCover() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLowCoverLineOfSight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLowCover() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLeftCornerLineOfSight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLeftCornerCover() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHighCover() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyCoverAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeWithAnyLineOfSight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceLostLineOfSight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAttractionPointCoverQuery GetCoverInfo(const FVector& ToLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetClaimantActor() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableAttractionPoint();
    
    UFUNCTION(BlueprintCallable)
    void DisableAttractionPoint();
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    FTransform GetCoverPointTransform() const override PURE_VIRTUAL(GetCoverPointTransform, return FTransform{};);
    
    UFUNCTION(BlueprintCallable)
    FVector GetAttractionPointLocation() const override PURE_VIRTUAL(GetAttractionPointLocation, return FVector{};);
    
};

