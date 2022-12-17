#include "ORIKUpdateSubsystem.h"

class AActor;
class USkeletalMeshComponent;

void UORIKUpdateSubsystem::UnsetDirectIKRotation(USkeletalMeshComponent* Skelmesh, EActorIKTraceType IKType) {
}

void UORIKUpdateSubsystem::UnsetDirectIKLocation(USkeletalMeshComponent* Skelmesh, EActorIKTraceType IKType) {
}

void UORIKUpdateSubsystem::UnregisterIKDataProvider(AActor* Object) {
}

void UORIKUpdateSubsystem::SetDirectIKRotation(USkeletalMeshComponent* Skelmesh, const FRotator& NewRotation, EActorIKTraceType IKType, bool bInWorldSpace) {
}

void UORIKUpdateSubsystem::SetDirectIKLocation(USkeletalMeshComponent* Skelmesh, const FVector& NewLocation, EActorIKTraceType IKType, bool bInWorldSpace) {
}

void UORIKUpdateSubsystem::RegisterIKDataProvider(AActor* Object) {
}

UORIKUpdateSubsystem::UORIKUpdateSubsystem() {
}

