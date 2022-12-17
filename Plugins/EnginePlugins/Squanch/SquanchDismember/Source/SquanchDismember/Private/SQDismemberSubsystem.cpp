#include "SQDismemberSubsystem.h"

class AActor;

void USQDismemberSubsystem::RegisterSpawnedGib(AActor* Gib) {
}

void USQDismemberSubsystem::OnGibDestroyed(AActor* DestroyedGib) {
}

bool USQDismemberSubsystem::CanSpawnNewGib() {
    return false;
}

USQDismemberSubsystem::USQDismemberSubsystem() {
}

