#include "LowEntryLatentActionObject.h"

class UObject;

void ULowEntryLatentActionObject::WaitTillDone(UObject* WorldContextObject, FLatentActionInfo LatentInfo, UObject*& Result_) {
}

bool ULowEntryLatentActionObject::IsDone() {
    return false;
}

void ULowEntryLatentActionObject::GetResult(UObject*& Result_) {
}

void ULowEntryLatentActionObject::Done(UObject* Result_) {
}

ULowEntryLatentActionObject::ULowEntryLatentActionObject() {
    this->Finished = false;
    this->Result = NULL;
    this->KeepAliveCount = 1;
}

