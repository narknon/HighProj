#include "SQDetachedMemberGib.h"
#include "Components/SkeletalMeshComponent.h"
#include "SQDismemberComponent.h"
#include "Components/PoseableMeshComponent.h"

class AActor;

void ASQDetachedMemberGib::OnMemberSpawned_Implementation(AActor* MemberOwner) {
}

void ASQDetachedMemberGib::OnDismembered_Implementation() {
}

ASQDetachedMemberGib::ASQDetachedMemberGib() {
    this->PhysicsSleepDelay = 0.00f;
    this->SkeletalMeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CollisionMeshComp"));
    this->PoseableMeshComp = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("VisibleMeshComponent"));
    this->DismembermentComp = CreateDefaultSubobject<USQDismemberComponent>(TEXT("DismemberComponent"));
    this->MemberGoreCap = NULL;
}

