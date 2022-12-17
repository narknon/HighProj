#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ORTextLoggingSubsystem.generated.h"

UCLASS(Blueprintable)
class UORTextLoggingSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UORTextLoggingSubsystem();
    UFUNCTION(BlueprintCallable)
    void SetLoggingEnabled(bool bInIsEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFileBeingWrittenTo(FName LogName);
    
    UFUNCTION(BlueprintCallable)
    void EndLogging(FName LogName);
    
    UFUNCTION(BlueprintCallable)
    bool CreateLoggingFile(FName LogName, bool bAppendDateAndTime);
    
    UFUNCTION(BlueprintCallable)
    void AddLine(FName LogName, const FString& LogEntry, bool bIncludeTimeStamp);
    
};

