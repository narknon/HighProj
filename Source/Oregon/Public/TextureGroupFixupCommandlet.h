#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "TextureGroupFixupCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class UTextureGroupFixupCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AssetsToSkip;
    
    UTextureGroupFixupCommandlet();
};

