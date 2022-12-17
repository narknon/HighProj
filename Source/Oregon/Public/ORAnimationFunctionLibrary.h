#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "ORSkeletalMeshMergeParams.h"
#include "ORAnimationFunctionLibrary.generated.h"

class UObject;
class AActor;
class APawn;
class USkeletalMeshComponent;
class USkeletalMesh;
class UORAnchoredAnimationActivity;
class UAnimationAsset;

UCLASS(Blueprintable)
class OREGON_API UORAnimationFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UORAnimationFunctionLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USkeletalMesh* MergeMeshes(UObject* WorldContextObject, const FORSkeletalMeshMergeParams& Params);
    
    UFUNCTION(BlueprintCallable)
    static void GetSkeletalMeshVertexBySectionIndex(USkeletalMeshComponent* SkeletalMeshComp, int32 SectionIndex, int32 VertexIndex, FVector& OutVertexPosition, FVector& OutVertexNormal);
    
    UFUNCTION(BlueprintCallable)
    static void GetSkeletalMeshVertexByPosition(USkeletalMeshComponent* SkeletalMeshComp, const FVector& Position, int32& OutSectionIndex, int32& OutVertexIndex);
    
    UFUNCTION(BlueprintCallable)
    static void GetBoneOffsetForAnimationRange(USkeletalMeshComponent* SkeletalMeshComp, const AActor* AnchorActor, UAnimationAsset* Animation, FName BoneName, FVector& OutStartBonePos, FVector& OutEndBonePos, FVector& OutBoneOffset, FVector& OutWorldNavLocation);
    
    UFUNCTION(BlueprintCallable)
    static UORAnchoredAnimationActivity* DoAnchoredAnimation(APawn* Pawn, FName AnimationEnterAction, FName AnimationExitAction, FName BoneName, AActor* OverrideAnchorActor, float PreAnimationRotateSpeed, float PreLerpAnimationDelay, float AnimationAnchorLerpSpeed, float AnimationHoldTime, float PostLerpDuration, bool bSkipPathing, bool bFindNearestAnchor, bool bConstrainToGroundPlane, bool bRetryOnFailedPathing, float MoveToAcceptanceRadius, bool bSkipAnimationAnchorLerp);
    
    UFUNCTION(BlueprintCallable)
    static void ClosestPointToBone(USkeletalMeshComponent* SkeletalMeshComp, const FName& BoneName, FVector& OutVertexPosition, FVector& OutVertexNormal);
    
};

