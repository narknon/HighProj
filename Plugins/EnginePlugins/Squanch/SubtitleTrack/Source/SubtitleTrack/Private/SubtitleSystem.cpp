#include "SubtitleSystem.h"

class AActor;

void USubtitleSystem::SubtitleAutoTimer(FSubtitleSlot& SubSlot, TSoftObjectPtr<AActor> Speaker, FGameplayTag SpeakerTag, FSlateColor TextColorOverride, FSlateFontInfo FontOverride, int32 SubtitleSlotIndex) {
}

void USubtitleSystem::SetSubtitleAutomaticTimer(AActor* Speaker, FText Subtitle, float MaxDuration, FFrameRate TickRes, FSlateColor TextColorOverride, FSlateFontInfo FontOverride) {
}

void USubtitleSystem::SetSubtitle(AActor* Speaker, FText Subtitle, FFrameNumber SeqTime, float MaxDuration, FFrameRate TickRes, FSlateColor TextColorOverride, FSlateFontInfo FontOverride, bool bOverrideDistance) {
}

bool USubtitleSystem::IsAnySubtitleActive() const {
    return false;
}

FText USubtitleSystem::GetWholeSubtitle(int32 SubtitleSlot) const {
    return FText::GetEmpty();
}

int32 USubtitleSystem::GetSubtitleSlotIndex(AActor* Speaker, ESTGroup& OutSpeakerPriority, FGameplayTag& OutSpeakerTag) {
    return 0;
}

FText USubtitleSystem::GetSubtitle(int32 SubtitleSlot) const {
    return FText::GetEmpty();
}

void USubtitleSystem::ChopSubtitle(FSubtitleSlot& SubtitleSlot, FText Subtitle, float MaxDuration, FFrameRate TickResolution) {
}

bool USubtitleSystem::AreSubtitlesAllowed() {
    return false;
}

USubtitleSystem::USubtitleSystem() {
}

