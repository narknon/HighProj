#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SQGameplayAttributeData.generated.h"

USTRUCT(BlueprintType)
struct SQUANCHABILITYSYSTEM_API FSQGameplayAttributeData : public FGameplayAttributeData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxValue;
    
public:
    FSQGameplayAttributeData();
};

