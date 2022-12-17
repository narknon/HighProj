#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "TextureGroupFixupCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient, Config=Editor)
class UTextureGroupFixupCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true), Category="TextureGroupFixupCommandlet")
    TArray<FName> AssetsToSkip;
    
    UTextureGroupFixupCommandlet();
};

