#pragma once
#include "CoreMinimal.h"
#include "LevelReferenceList.generated.h"

USTRUCT(BlueprintType)
struct FLevelReferenceList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LevelReferenceList;
    
    OREGON_API FLevelReferenceList();
};

