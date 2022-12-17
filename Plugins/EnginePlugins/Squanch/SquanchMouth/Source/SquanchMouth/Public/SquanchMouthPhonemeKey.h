#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SquanchMouthPhoneme.h"
#include "AlphaBlend.h"
#include "SquanchMouthPhonemeKey.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class SQUANCHMOUTH_API USquanchMouthPhonemeKey : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    SquanchMouthPhoneme Phoneme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlend BlendIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlend BlendOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> OverrideMontage;
    
    USquanchMouthPhonemeKey();
};

