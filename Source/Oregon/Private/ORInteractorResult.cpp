#include "ORInteractorResult.h"

class AORCharacter;
class UORInteractableComponent;

void UORInteractorResult::Tick_Implementation(float DeltaTime) {
}

void UORInteractorResult::Shutdown_Implementation() {
}

bool UORInteractorResult::IsTetherResult_Implementation() {
    return false;
}

void UORInteractorResult::Cancel_Implementation() {
}

bool UORInteractorResult::CanActivateInteraction_Implementation(AORCharacter* Interactor) {
    return false;
}

void UORInteractorResult::Activate_Implementation(UORInteractableComponent* InteractableComponent) {
}

UORInteractorResult::UORInteractorResult() {
}

