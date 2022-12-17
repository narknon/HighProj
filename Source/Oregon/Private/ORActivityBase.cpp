#include "ORActivityBase.h"

void UORActivityBase::ResetProgress() {
}

bool UORActivityBase::IsRunning() const {
    return false;
}

void UORActivityBase::InterruptActivity_Implementation() {
}

void UORActivityBase::EndActivity_Implementation() {
}

bool UORActivityBase::BeginActivity_Implementation() {
    return false;
}

UORActivityBase::UORActivityBase() {
    this->bRunInParallel = false;
    this->LoopCount = 1;
    this->Progress = 0.00f;
    this->Pawn = NULL;
    this->HomeBounds = NULL;
    this->NumRetriesOnFail = 0;
    this->RetryCooldown = 5.00f;
    this->ShouldRetryOnInterrupt = true;
}

