#include "ORAbilityTask_TimedTick.h"
#include "Net/UnrealNetwork.h"

class UGameplayAbility;
class UORAbilityTask_TimedTick;

UORAbilityTask_TimedTick* UORAbilityTask_TimedTick::TimedTick(UGameplayAbility* OwningAbility, FName TaskInstanceName, float NewDuration) {
    return NULL;
}

void UORAbilityTask_TimedTick::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UORAbilityTask_TimedTick, Duration);
}

UORAbilityTask_TimedTick::UORAbilityTask_TimedTick() {
    this->Duration = 0.00f;
}

