#include "ORAnimationFunctionLibrary.h"

class UObject;
class AActor;
class APawn;
class USkeletalMeshComponent;
class USkeletalMesh;
class UORAnchoredAnimationActivity;
class UAnimationAsset;

USkeletalMesh* UORAnimationFunctionLibrary::MergeMeshes(UObject* WorldContextObject, const FORSkeletalMeshMergeParams& Params) {
    return NULL;
}

void UORAnimationFunctionLibrary::GetSkeletalMeshVertexBySectionIndex(USkeletalMeshComponent* SkeletalMeshComp, int32 SectionIndex, int32 VertexIndex, FVector& OutVertexPosition, FVector& OutVertexNormal) {
}

void UORAnimationFunctionLibrary::GetSkeletalMeshVertexByPosition(USkeletalMeshComponent* SkeletalMeshComp, const FVector& Position, int32& OutSectionIndex, int32& OutVertexIndex) {
}

void UORAnimationFunctionLibrary::GetBoneOffsetForAnimationRange(USkeletalMeshComponent* SkeletalMeshComp, const AActor* AnchorActor, UAnimationAsset* Animation, FName BoneName, FVector& OutStartBonePos, FVector& OutEndBonePos, FVector& OutBoneOffset, FVector& OutWorldNavLocation) {
}

UORAnchoredAnimationActivity* UORAnimationFunctionLibrary::DoAnchoredAnimation(APawn* Pawn, FName AnimationEnterAction, FName AnimationExitAction, FName BoneName, AActor* OverrideAnchorActor, float PreAnimationRotateSpeed, float PreLerpAnimationDelay, float AnimationAnchorLerpSpeed, float AnimationHoldTime, float PostLerpDuration, bool bSkipPathing, bool bFindNearestAnchor, bool bConstrainToGroundPlane, bool bRetryOnFailedPathing, float MoveToAcceptanceRadius, bool bSkipAnimationAnchorLerp) {
    return NULL;
}

void UORAnimationFunctionLibrary::ClosestPointToBone(USkeletalMeshComponent* SkeletalMeshComp, const FName& BoneName, FVector& OutVertexPosition, FVector& OutVertexNormal) {
}

UORAnimationFunctionLibrary::UORAnimationFunctionLibrary() {
}

