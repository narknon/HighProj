#pragma once
#include "CoreMinimal.h"
#include "LipFlapStruct.generated.h"

class USkeletalMeshComponent;
class UCurveFloat;

USTRUCT(BlueprintType)
struct LIPFLAP_API FLipFlapStruct {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* OurSkelmesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* LipCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MorphTargetName;
    
public:
    FLipFlapStruct();
};

