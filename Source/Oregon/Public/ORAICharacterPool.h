#pragma once
#include "CoreMinimal.h"
#include "ORAICharacterPool.generated.h"

class AORAICharacter;

USTRUCT(BlueprintType)
struct FORAICharacterPool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AORAICharacter*> AICharacterPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AORAICharacter*> ActiveAICharacters;
    
    OREGON_API FORAICharacterPool();
};

