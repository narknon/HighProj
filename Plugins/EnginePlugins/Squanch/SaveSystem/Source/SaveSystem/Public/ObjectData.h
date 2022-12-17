#pragma once
#include "CoreMinimal.h"
#include "ObjectData.generated.h"

USTRUCT(BlueprintType)
struct FObjectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Data;
    
    SAVESYSTEM_API FObjectData();
};

