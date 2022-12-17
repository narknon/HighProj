#include "ORAIScriptCommandBase.h"

class AActor;
class AORAIController;

bool UORAIScriptCommandBase::Tick_Implementation(AActor* AI, AORAIController* Controller, float DeltaTime) {
    return false;
}

void UORAIScriptCommandBase::Init_Implementation(AActor* AI, AORAIController* Controller) {
}

void UORAIScriptCommandBase::Cleanup_Implementation(AActor* AI, AORAIController* Controller) {
}

UORAIScriptCommandBase::UORAIScriptCommandBase() {
}

