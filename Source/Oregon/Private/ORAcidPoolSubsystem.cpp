#include "ORAcidPoolSubsystem.h"

class AActor;
class APawn;
class ASQExplosionActor;
class UItemImpactResult;

void UORAcidPoolSubsystem::RemoveAcidAtLocation(const FVector& Location, float Radius) {
}

void UORAcidPoolSubsystem::HandleProjectileImpact(AActor* SourceActor, UItemImpactResult* ImpactResult, const FHitResult& HitResult) {
}

void UORAcidPoolSubsystem::HandleExplosionImpact(ASQExplosionActor* Explosion) {
}

void UORAcidPoolSubsystem::CreateAcidRingAtLocation(const FVector& Location, float innerRadius, float Radius, APawn* Instigator) {
}

void UORAcidPoolSubsystem::CreateAcidAtLocation(const FVector& Location, float Radius, APawn* Instigator) {
}

UORAcidPoolSubsystem::UORAcidPoolSubsystem() {
}

