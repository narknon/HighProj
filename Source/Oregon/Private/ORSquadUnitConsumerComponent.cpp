#include "ORSquadUnitConsumerComponent.h"

class UObject;
class AORCharacter;
class AORAICharacter;

void UORSquadUnitConsumerComponent::ResetConsumedSquadMember(AORAICharacter* SquadMember) {
}

void UORSquadUnitConsumerComponent::OnConsumedMemberDied(UObject* Killer, AORCharacter* Killed, const FHitResult& HitResult, const FGameplayTagContainer& DamageTags) {
}

TArray<AORAICharacter*> UORSquadUnitConsumerComponent::GetSquadMemberQueue() {
    return TArray<AORAICharacter*>();
}

AORAICharacter* UORSquadUnitConsumerComponent::GetNextSquadMember() {
    return NULL;
}

AORAICharacter* UORSquadUnitConsumerComponent::ConsumeSquadMember(AORAICharacter* SquadMember) {
    return NULL;
}

AORAICharacter* UORSquadUnitConsumerComponent::ConsumeNextSquadMember() {
    return NULL;
}

UORSquadUnitConsumerComponent::UORSquadUnitConsumerComponent() {
    this->QueueRefreshInteval = 1.00f;
    this->MaxMembersInQueue = 0;
    this->MaxTargetingRadius = 500.00f;
    this->ConsumedMemberGrantedEffect = NULL;
    this->bIncludeSelf = false;
    this->bConsiderReachable = false;
}

