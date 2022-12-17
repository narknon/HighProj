#include "LowEntryLatentActionNone.h"

class UObject;

void ULowEntryLatentActionNone::WaitTillDone(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

bool ULowEntryLatentActionNone::IsDone() {
    return false;
}

void ULowEntryLatentActionNone::Done() {
}

ULowEntryLatentActionNone::ULowEntryLatentActionNone() {
    this->Finished = false;
    this->KeepAliveCount = 1;
}

