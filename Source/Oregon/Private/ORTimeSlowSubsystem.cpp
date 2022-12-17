#include "ORTimeSlowSubsystem.h"

void UORTimeSlowSubsystem::SetAnimNotifySlowTimeHandle(FTimeSlowHandle Handle) {
}

FTimeSlowHandle UORTimeSlowSubsystem::GetAnimNotifySlowTimeHandle() {
    return FTimeSlowHandle{};
}

void UORTimeSlowSubsystem::EndTimeSlowForHandle(FTimeSlowHandle& Handle) {
}

void UORTimeSlowSubsystem::CreateTimeSlowSpecificDuration(float TimeSlowFactor, float EaseIn, float EaseOut, float Duration, bool bAffectsAudio) {
}

FTimeSlowHandle UORTimeSlowSubsystem::CreateTimeSlowDynamicDuration(float TimeSlowFactor, float EaseIn, float EaseOut, bool bAffectsAudio) {
    return FTimeSlowHandle{};
}

void UORTimeSlowSubsystem::CreateTimeSlowCurve(const FRuntimeFloatCurve& Curve, bool bAffectsAudio) {
}

void UORTimeSlowSubsystem::AdjustTimeSlowValue(const FTimeSlowHandle& Handle, float NewValue, float EaseIn) {
}

UORTimeSlowSubsystem::UORTimeSlowSubsystem() {
}

