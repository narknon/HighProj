#include "SQProjectile.h"
#include "SQProjectileMovementComponent.h"
#include "Components/SphereComponent.h"

class UObject;
class AActor;
class ASQFireableInventoryItem;

void ASQProjectile::SetProjectileAimingPoint_Implementation(const FVector& AimingPoint) {
}

void ASQProjectile::OnImpact_Implementation(const FHitResult& ImpactResult) {
}

void ASQProjectile::OnBeginShutdown_Implementation(bool bExploded) {
}

void ASQProjectile::NotifyImpactedActor(const FHitResult& ImpactResult) {
}

void ASQProjectile::Init(FGameplayTag InModeType, ASQFireableInventoryItem* InOwningItem, float MaxTravelDistance, int32 InShotNum, int32 InTotalShots) {
}

void ASQProjectile::Impact(const FHitResult& ImpactResult) {
}

float ASQProjectile::GetShotNumPct() {
    return 0.0f;
}

int32 ASQProjectile::GetShotNum() {
    return 0;
}

AActor* ASQProjectile::GetProjectileOwner() {
    return NULL;
}

TArray<AActor*> ASQProjectile::GetIgnoredActors() {
    return TArray<AActor*>();
}

void ASQProjectile::ForceShutdown() {
}

void ASQProjectile::DestroyAllProjectiles(UObject* WorldContextObject) {
}

void ASQProjectile::ClearIgnoredActors() {
}

void ASQProjectile::Bounced(const FHitResult& ImpactResult, const FVector& OldVelocity) {
}

void ASQProjectile::ApplyImpactEffects(const FHitResult& ImpactResult) {
}

void ASQProjectile::AddIgnoredActor(AActor* ActorToIgnore) {
}

ASQProjectile::ASQProjectile() {
    this->CollisionShape = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
    this->bIsAlive = true;
    this->bFullyNormalizeShotPct = false;
    this->ShotNum = 0;
    this->ShotNumPct = 1.00f;
    this->FiringType = EIFT_Unknown;
    this->CollisionProfileName = TEXT("Projectile");
    this->bUseProjectileImpact = false;
    this->bShutdownOnImpact = true;
    this->ProjectileImpactResult = NULL;
    this->MovementComp = CreateDefaultSubobject<USQProjectileMovementComponent>(TEXT("ProjectileComp"));
    this->bUseEffectsOffset = true;
    this->EffectsOffsetLerpTime = 0.05f;
}

