#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "STOnExitedSequenceEventDelegate.h"
#include "STOnEnteredSequenceEventDelegate.h"
#include "STOnTalkingChangedSignatureDelegate.h"
#include "STPossessableComponent.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SQUANCHTHEATER_API USTPossessableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSTOnTalkingChangedSignature OnTalkingChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSTOnEnteredSequenceEvent OnEnteredSequenceEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSTOnExitedSequenceEvent OnExitedSequenceEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubtitleExempt;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpeakerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInActiveSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CurrentSequenceName;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UAkAudioEvent> CurrentAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeLeftInAkEvent;
    
public:
    USTPossessableComponent();
    UFUNCTION(BlueprintCallable)
    void SetSpeakerTag(const FGameplayTag& InSpeakerTag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsTalking(bool bInIsTalking);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInActiveSequence(bool bInIsInActiveSequence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTalking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInActiveSequence() const;
    
    UFUNCTION(BlueprintCallable)
    void Interrupt();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetSpeakerTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentSequenceName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentPhoneme() const;
    
};

