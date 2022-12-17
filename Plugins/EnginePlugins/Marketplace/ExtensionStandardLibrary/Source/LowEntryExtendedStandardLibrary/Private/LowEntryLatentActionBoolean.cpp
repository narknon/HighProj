#include "LowEntryLatentActionBoolean.h"

class UObject;

void ULowEntryLatentActionBoolean::WaitTillDone(UObject* WorldContextObject, FLatentActionInfo LatentInfo, bool& Result_) {
}

bool ULowEntryLatentActionBoolean::IsDone() {
    return false;
}

void ULowEntryLatentActionBoolean::GetResult(bool& Result_) {
}

void ULowEntryLatentActionBoolean::Done(bool Result_) {
}

ULowEntryLatentActionBoolean::ULowEntryLatentActionBoolean() {
    this->Finished = false;
    this->Result = false;
    this->KeepAliveCount = 1;
}

