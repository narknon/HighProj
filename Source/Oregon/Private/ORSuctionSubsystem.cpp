#include "ORSuctionSubsystem.h"
#include "Templates/SubclassOf.h"

class AActor;
class UGameplayEffect;
class UORSuctionComponent;

void UORSuctionSubsystem::UpdateSuctionLocation(AActor* SuctionPoint, FVector LocationOffset) {
}

void UORSuctionSubsystem::UpdateSuctionForce(AActor* SuctionPoint, float ItemForce, float ProjectileForce, float SmallCharacterForce, float LargeCharacterForce, float SuctionRange, float SuctionAngle) {
}

void UORSuctionSubsystem::UpdateBurstSuction(AActor* SuctionPoint, float SuctionRange, float SuctionAngle) {
}

void UORSuctionSubsystem::UnRegisterSuctionPoint(AActor* SuctionPoint) {
}

void UORSuctionSubsystem::UnRegisterSuctionObject(UORSuctionComponent* SuctionObject) {
}

void UORSuctionSubsystem::ToggleSuctionPoint(AActor* SuctionPoint, bool IsPointActive) {
}

void UORSuctionSubsystem::TickSuctionPoint(AActor* SuctionPoint) {
}

void UORSuctionSubsystem::StopSuctionFromActor(AActor* SuctionPoint) {
}

void UORSuctionSubsystem::StopAllSuction() {
}

void UORSuctionSubsystem::RegisterSuctionPoint(AActor* SuctionPoint, FVector LocationOffset, float ItemForce, float ProjectileForce, float SmallCharacterForce, float LargeCharacterForce, float SuctionRange, float SuctionAngle, bool StopCharacterAtPoint, bool UseLOS, TSubclassOf<UGameplayEffect> StartingSuctionEffect, bool AffectCharacterMovement) {
}

bool UORSuctionSubsystem::RegisterSuctionObject(UORSuctionComponent* SuctionObject) {
    return false;
}

void UORSuctionSubsystem::RegisterBurstSuctionPoint(AActor* SuctionPoint, FVector LocationOffset, float SuctionRange, float SuctionAngle, bool UseLOS, float MaxBurstLevel, bool bContinuousBurst) {
}

void UORSuctionSubsystem::ActivateBurstSuction(AActor* SuctionPoint, float CurrentBurstLevel, TSubclassOf<UGameplayEffect> SmallCharEffect, TSubclassOf<UGameplayEffect> LargeCharEffect, float SmallCharForce, float LargeCharForce) {
}

UORSuctionSubsystem::UORSuctionSubsystem() {
}

