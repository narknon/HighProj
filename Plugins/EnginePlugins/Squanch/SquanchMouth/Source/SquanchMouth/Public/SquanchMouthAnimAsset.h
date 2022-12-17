#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SquanchMouthPhoneme.h"
#include "SquanchMouthEmotionRange.h"
#include "SquanchMouthAnimAsset.generated.h"

class USquanchMouthPhonemeKey;

UCLASS(Blueprintable)
class SQUANCHMOUTH_API USquanchMouthAnimAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USquanchMouthPhonemeKey*> SortedPhonemeKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSquanchMouthEmotionRange> EmotionRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AudioPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AudioText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultBlendIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultBlendOut;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CustomEdit;
    
public:
    USquanchMouthAnimAsset();
    UFUNCTION(BlueprintCallable)
    void UnmarkEdited();
    
    UFUNCTION(BlueprintCallable)
    void SortPhonemeKeys();
    
    UFUNCTION(BlueprintCallable)
    void MarkEdited();
    
    UFUNCTION(BlueprintCallable)
    bool IsEdited();
    
    UFUNCTION(BlueprintCallable)
    void DeletePhonemeKey(USquanchMouthPhonemeKey* Key);
    
    UFUNCTION(BlueprintCallable)
    void AddPhonemeKey(SquanchMouthPhoneme Phoneme, float NewTime);
    
};

