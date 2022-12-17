#include "ORTextLoggingSubsystem.h"

void UORTextLoggingSubsystem::SetLoggingEnabled(bool bInIsEnabled) {
}

bool UORTextLoggingSubsystem::IsFileBeingWrittenTo(FName LogName) {
    return false;
}

void UORTextLoggingSubsystem::EndLogging(FName LogName) {
}

bool UORTextLoggingSubsystem::CreateLoggingFile(FName LogName, bool bAppendDateAndTime) {
    return false;
}

void UORTextLoggingSubsystem::AddLine(FName LogName, const FString& LogEntry, bool bIncludeTimeStamp) {
}

UORTextLoggingSubsystem::UORTextLoggingSubsystem() {
}

