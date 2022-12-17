#pragma once
#include "CoreMinimal.h"
#include "EFaceAnimType.h"
#include "CharacterListData.generated.h"

class UBlueprint;

USTRUCT(BlueprintType)
struct LEVELPLANNER_API FCharacterListData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaceAnimType FaceAnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlueprint> Blueprint;
    
    FCharacterListData();
};

