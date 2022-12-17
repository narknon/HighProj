#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EEmotionState.h"
#include "EmotionComponent.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class EMOTIONSYSTEM_API UEmotionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* HappyEmotionAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* SarcasticEmotionAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ExcitedEmotionAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* WickedEmotionAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* NeutralEmotionAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ConfusedEmotionAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* DeterminedEmotionAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* SurprisedEmotionAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* SadEmotionAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AngryEmotionAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AfraidEmotionAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* DisgustedEmotionAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ExhaustedEmotionAnim;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EEmotionState CurrentEmotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EEmotionState DefaultEmotion;
    
public:
    UEmotionComponent();
    UFUNCTION(BlueprintCallable)
    void SetDefaultEmotion(EEmotionState NewEmotion);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentEmotion(EEmotionState NewEmotion);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDefaultEmotionOverridden() const;
    
    UFUNCTION(BlueprintCallable)
    static EEmotionState GetEmotionEnumByEmoji(const FString& EmoticonString);
    
    UFUNCTION(BlueprintCallable)
    UAnimSequence* GetEmotionAnim(EEmotionState Emotion);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEmotionState GetDefaultEmotion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEmotionState GetCurrentEmotion() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearCurrentEmotion();
    
};

