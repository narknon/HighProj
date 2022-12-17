#include "ORAttackTokenSubsystem.h"

class UObject;
class AActor;

bool UORAttackTokenSubsystem::UnregisterFromTokenControl(AActor* TokenActor) {
    return false;
}

FAttackTokenHandle UORAttackTokenSubsystem::TryReserveTargetToken(AActor* TargetTokenActor, UObject* Attacker, const FGameplayTag AttackTypeTag) {
    return FAttackTokenHandle{};
}

bool UORAttackTokenSubsystem::RequiresTokenToBeAttacked(const AActor* TargetTokenActor) const {
    return false;
}

void UORAttackTokenSubsystem::ReleaseTargetTokenByHandle(FAttackTokenHandle& Handle) {
}

bool UORAttackTokenSubsystem::RegisterForTokenControl(AActor* TokenActor, TMap<FGameplayTag, int32> InitialTokens) {
    return false;
}

bool UORAttackTokenSubsystem::HasAvailableTargetToken(const AActor* TargetTokenActor, const FGameplayTag AttackTypeTag) const {
    return false;
}

UORAttackTokenSubsystem::UORAttackTokenSubsystem() {
}

