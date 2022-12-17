#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "EORGameRange.h"
#include "ORGameRangeParameters.generated.h"

UCLASS(Blueprintable, DefaultConfig, NotPlaceable, Config=Squanch)
class OREGON_API UORGameRangeParameters : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float CloseAverage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float CloseMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float MidAverage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float MidMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float LongAverage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float LongMax;
    
    UORGameRangeParameters();
    UFUNCTION(BlueprintCallable)
    static float GetGameRange(EORGameRange Range);
    
};

