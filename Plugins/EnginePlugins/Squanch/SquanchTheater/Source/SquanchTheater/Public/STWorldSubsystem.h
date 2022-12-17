#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "OROnNewSpeakerRegisteredDelegate.h"
#include "OROnSequencePlayedDelegateDelegate.h"
#include "OROnDialogueChoiceResolvedSignatureDelegate.h"
#include "OROnDialogueChoiceRequestedSignatureDelegate.h"
#include "ESTGroup.h"
#include "ESTChoiceOutput.h"
#include "STWorldSubsystem.generated.h"

class USTPossessableComponent;

UCLASS(Blueprintable)
class SQUANCHTHEATER_API USTWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOROnDialogueChoiceRequestedSignature OnDialogueChoiceRequested;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOROnDialogueChoiceResolvedSignature OnDialogueChoiceResolvedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOROnSequencePlayedDelegate OnSequncePlayedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOROnNewSpeakerRegistered OnNewSpeakerRegisteredEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOROnNewSpeakerRegistered OnSpeakerUnregisteredEvent;
    
protected:
    UPROPERTY(EditAnywhere, Export)
    TArray<TWeakObjectPtr<USTPossessableComponent>> RegisteredSpeakers;
    
public:
    USTWorldSubsystem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpeakerTalking(FGameplayTag SpeakerTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChannelActive(ESTGroup CHannelToCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDialogueChoice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeLeftInDialogueChoice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeakerTimeLeft(FGameplayTag SpeakerTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USTPossessableComponent* GetPossessableComponentForTag(FGameplayTag SpeakerTag, bool bTryFindNonTalking) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetDialogueChoiceID() const;
    
    UFUNCTION(BlueprintCallable)
    void ChooseDialogueChoice(ESTChoiceOutput Choice, int32 ChoiceIndex);
    
};

