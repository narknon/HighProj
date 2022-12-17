#include "ORCompoundActivity.h"

class UORActivityBase;

void UORCompoundActivity::OnProfileActivityEnd(UORActivityBase* Activity) {
}

void UORCompoundActivity::OnProfileActivityBegin(UORActivityBase* Activity) {
}

void UORCompoundActivity::BeginNextActivity() {
}

UORCompoundActivity::UORCompoundActivity() {
    this->ExecutionMode = EActivityExecutionMode::ForwardSequential;
}

