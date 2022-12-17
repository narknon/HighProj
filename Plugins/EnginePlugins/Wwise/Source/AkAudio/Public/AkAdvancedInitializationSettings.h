#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkAdvancedInitializationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 IO_MemorySize;
    
    UPROPERTY(EditAnywhere)
    uint32 IO_Granularity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetAutoStreamBufferLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseStreamCache;
    
    UPROPERTY(EditAnywhere)
    uint32 MaximumPinnedBytesInCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableGameSyncPreparation;
    
    UPROPERTY(EditAnywhere)
    uint32 ContinuousPlaybackLookAhead;
    
    UPROPERTY(EditAnywhere)
    uint32 MonitorQueuePoolSize;
    
    UPROPERTY(EditAnywhere)
    uint32 MaximumHardwareTimeoutMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugOutOfRangeCheckEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugOutOfRangeLimit;
    
    AKAUDIO_API FAkAdvancedInitializationSettings();
};
