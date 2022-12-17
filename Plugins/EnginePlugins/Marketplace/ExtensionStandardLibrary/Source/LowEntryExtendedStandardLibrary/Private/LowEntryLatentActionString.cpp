#include "LowEntryLatentActionString.h"

class UObject;

void ULowEntryLatentActionString::WaitTillDone(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString& Result_) {
}

bool ULowEntryLatentActionString::IsDone() {
    return false;
}

void ULowEntryLatentActionString::GetResult(FString& Result_) {
}

void ULowEntryLatentActionString::Done(const FString& Result_) {
}

ULowEntryLatentActionString::ULowEntryLatentActionString() {
    this->Finished = false;
    this->KeepAliveCount = 1;
}

