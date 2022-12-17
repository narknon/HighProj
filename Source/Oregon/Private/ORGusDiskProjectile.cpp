#include "ORGusDiskProjectile.h"

class AActor;

void AORGusDiskProjectile::ResetDiskLaunch(AActor* MeleeCharacter, int64 RichochetCount, FVector LaunchOffset) {
}

void AORGusDiskProjectile::OnSoftSurfaceImpact_Implementation(const FHitResult& ImpactResult) {
}

void AORGusDiskProjectile::OnHardSurfaceImpact_Implementation(const FHitResult& ImpactResult) {
}

void AORGusDiskProjectile::OnDiscExhausted_Implementation(const FHitResult& ImpactResult) {
}

void AORGusDiskProjectile::OnCharacterReflectImpact_Implementation(const FHitResult& ImpactResult) {
}

void AORGusDiskProjectile::OnCharacterKilledImpact_Implementation(const FHitResult& ImpactResult) {
}

AORGusDiskProjectile::AORGusDiskProjectile() {
    this->StaticDiskType = NULL;
    this->RotatingMeleeDiskType = NULL;
    this->MaxCharacterReflects = 3;
    this->MaxCharacterRicochets = 3;
    this->SoftWallImpactResult = NULL;
    this->bShouldSliceThroughEnemies = false;
    this->FinalCharacterImpactExtraEffect = NULL;
    this->LOSCollisionChannel = ECC_WorldStatic;
    this->CharacterReflectCount = 0;
    this->VisibilityTraceCount = 0;
    this->bSpawnedDisk = false;
}

