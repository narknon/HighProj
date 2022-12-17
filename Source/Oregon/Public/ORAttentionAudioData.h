#pragma once
#include "CoreMinimal.h"
#include "ORAttentionAudioData.generated.h"

class UAkComponent;

USTRUCT(BlueprintType)
struct FORAttentionAudioData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLowPriority;
    
    OREGON_API FORAttentionAudioData();
};

