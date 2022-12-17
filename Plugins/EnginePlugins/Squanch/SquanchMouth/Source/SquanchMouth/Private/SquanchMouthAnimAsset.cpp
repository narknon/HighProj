#include "SquanchMouthAnimAsset.h"

class USquanchMouthPhonemeKey;

void USquanchMouthAnimAsset::UnmarkEdited() {
}

void USquanchMouthAnimAsset::SortPhonemeKeys() {
}

void USquanchMouthAnimAsset::MarkEdited() {
}

bool USquanchMouthAnimAsset::IsEdited() {
    return false;
}

void USquanchMouthAnimAsset::DeletePhonemeKey(USquanchMouthPhonemeKey* Key) {
}

void USquanchMouthAnimAsset::AddPhonemeKey(SquanchMouthPhoneme Phoneme, float NewTime) {
}

USquanchMouthAnimAsset::USquanchMouthAnimAsset() {
    this->Duration = 0.00f;
    this->DefaultBlendIn = 0.06f;
    this->DefaultBlendOut = 0.07f;
    this->CustomEdit = false;
}

