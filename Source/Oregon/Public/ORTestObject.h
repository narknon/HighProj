#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DifficultyFloat -FallbackName=DifficultyFloat
#include "ORTestObject.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORTestObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyFloat Value;
    
    UORTestObject();
};

