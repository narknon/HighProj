#include "ORStaticRagdollActor.h"
#include "Components/PoseableMeshComponent.h"

AORStaticRagdollActor::AORStaticRagdollActor() {
    this->PoseableMeshComp = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("PoseableMeshComp"));
}

