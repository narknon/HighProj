#include "LowEntryParsedHashcash.h"

FString ULowEntryParsedHashcash::ToString() {
    return TEXT("");
}

FString ULowEntryParsedHashcash::GetResource() {
    return TEXT("");
}

FDateTime ULowEntryParsedHashcash::GetDate() {
    return FDateTime{};
}

int32 ULowEntryParsedHashcash::GetBits() {
    return 0;
}

ULowEntryParsedHashcash::ULowEntryParsedHashcash() {
    this->Valid = false;
    this->Bits = 0;
}

