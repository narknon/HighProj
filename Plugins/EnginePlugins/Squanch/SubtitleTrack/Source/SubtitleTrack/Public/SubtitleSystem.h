#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "Fonts/SlateFontInfo.h"
#include "Styling/SlateColor.h"
#include "ESTGroup.h"
#include "SubtitleUpdatedDelegate.h"
#include "SubtitleSlot.h"
#include "SubtitleSystem.generated.h"

class AActor;

UCLASS(Blueprintable)
class SUBTITLETRACK_API USubtitleSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubtitleUpdated SubtitleUpdatedDelegate;
    
    USubtitleSystem();
protected:
    UFUNCTION(BlueprintCallable)
    void SubtitleAutoTimer(FSubtitleSlot& SubSlot, TSoftObjectPtr<AActor> Speaker, FGameplayTag SpeakerTag, FSlateColor TextColorOverride, FSlateFontInfo FontOverride, int32 SubtitleSlotIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSubtitleAutomaticTimer(AActor* Speaker, FText Subtitle, float MaxDuration, FFrameRate TickRes, FSlateColor TextColorOverride, FSlateFontInfo FontOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitle(AActor* Speaker, FText Subtitle, FFrameNumber SeqTime, float MaxDuration, FFrameRate TickRes, FSlateColor TextColorOverride, FSlateFontInfo FontOverride, bool bOverrideDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnySubtitleActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetWholeSubtitle(int32 SubtitleSlot) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 GetSubtitleSlotIndex(AActor* Speaker, ESTGroup& OutSpeakerPriority, FGameplayTag& OutSpeakerTag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSubtitle(int32 SubtitleSlot) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChopSubtitle(FSubtitleSlot& SubtitleSlot, FText Subtitle, float MaxDuration, FFrameRate TickResolution);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreSubtitlesAllowed();
    
};

