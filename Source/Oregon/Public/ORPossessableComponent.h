#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "STPossessableComponent.h"
#include "GameplayTagContainer.h"
#include "SequenceState.h"
#include "ORPossessableComponent.generated.h"

class UObject;
class ULevelSequence;
class UORNarrativeSequenceAsset;
class AORNarrativeDirector;
class UORWidget_HUDPrompt;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UORPossessableComponent : public USTPossessableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UORNarrativeSequenceAsset> NarrativeSequenceAssetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UORNarrativeSequenceAsset* NarrativeSequenceAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanSpeak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSpeakingWhenDead;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSpeakingIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelectSpeakerTagFromSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> SpeakerTagSet;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UORWidget_HUDPrompt> CachedSpeakerWidget;
    
public:
    UORPossessableComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayNDSequence(AORNarrativeDirector* InOwningNarrativeDirector, const FGameplayTag& InSequenceDataTag, ULevelSequence* InLevelSequence, const TMap<FString, UObject*>& PossessionMap, const FName& STBlockName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNDSequenceStart(AORNarrativeDirector* InOwningNarrativeDirector, const FGameplayTag& InSequenceDataTag, ULevelSequence* InLevelSequence);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNDSequenceEnd();
    
    UFUNCTION(BlueprintCallable)
    void ForceAside(FSequenceState& AsideBinding);
    
    UFUNCTION(BlueprintCallable)
    void EndNDSequence();
    
};

