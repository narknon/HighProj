#include "LowEntryLatentActionFloat.h"

class UObject;

void ULowEntryLatentActionFloat::WaitTillDone(UObject* WorldContextObject, FLatentActionInfo LatentInfo, float& Result_) {
}

bool ULowEntryLatentActionFloat::IsDone() {
    return false;
}

void ULowEntryLatentActionFloat::GetResult(float& Result_) {
}

void ULowEntryLatentActionFloat::Done(float Result_) {
}

ULowEntryLatentActionFloat::ULowEntryLatentActionFloat() {
    this->Finished = false;
    this->Result = 0.00f;
    this->KeepAliveCount = 1;
}

