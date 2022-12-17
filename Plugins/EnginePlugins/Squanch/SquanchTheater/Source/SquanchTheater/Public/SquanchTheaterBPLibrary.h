#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EHeadGestureResult.h"
#include "ESTGroup.h"
#include "ESTBeginType.h"
#include "ESTBeginOutput.h"
#include "ESTPlayOutput.h"
#include "ESTAsideInput.h"
#include "ESTBranchOutput.h"
#include "EGateInput.h"
#include "ESTBeginInput.h"
#include "ERandomMethod.h"
#include "ESTChoiceOutput.h"
#include "HeadGestureDebugData.h"
#include "STChoiceData.h"
#include "InterruptEventContainer.h"
#include "SequenceState.h"
#include "SquanchTheaterBPLibrary.generated.h"

class UObject;
class AActor;
class USTDispatcher;
class USTCondition;
class ULevelSequence;
class APlayerCameraManager;
class UEdGraphNode;

UCLASS(Blueprintable)
class USquanchTheaterBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USquanchTheaterBPLibrary();
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void STTrigger(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<USTCondition*> InConditions);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void STResumeBySpeaker(UObject* WorldContextObject, FGameplayTag SpeakerTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void STResumeByName(UObject* WorldContextObject, FName Name);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void STResumeByChannel(UObject* WorldContextObject, ESTGroup Channel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void STRemoveFromQueue(UObject* WorldContextObject, ESTGroup Channel, FName SequenceToRemove);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void STPlayPossessed(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ULevelSequence* Sequence, TArray<ULevelSequence*> SegueSequences, TEnumAsByte<ERandomMethod::Type> InMethod, float SegueProbability, ESTPlayOutput& Out, UPARAM(Ref) TMap<FString, UObject*>& PossessMap, FSequenceState& AsideBinding);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void STPlay(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ULevelSequence* Sequence, TArray<ULevelSequence*> SegueSequences, TEnumAsByte<ERandomMethod::Type> InMethod, float SegueProbability, float EndOffset, ESTPlayOutput& Out, UPARAM(Ref) TMap<FString, UObject*>& PossessMap, FSequenceState& AsideBinding, AActor* TransformOrigin);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void STPauseBySpeaker(UObject* WorldContextObject, FGameplayTag SpeakerTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void STPauseByName(UObject* WorldContextObject, FName Name);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void STPauseByChannel(UObject* WorldContextObject, ESTGroup Channel);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void STKillOthers(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void STKillAll(UObject* WorldContextObject, UEdGraphNode* Node);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool STIsPlaying(UObject* WorldContextObject, FName Name);
    
    UFUNCTION(BlueprintCallable)
    static bool STIsChannelActive(ESTGroup Channel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void STInterruptEvent(UObject* WorldContextObject, FGameplayTag EventTag, FName SequenceToInterrupt);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void STInterruptByName(UObject* WorldContextObject, FName Name, UEdGraphNode* Node);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void STInterruptByChannel(UObject* WorldContextObject, ESTGroup Channel, UEdGraphNode* Node);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void STInterruptAllWithSpeaker(UObject* WorldContextObject, FGameplayTag SpeakerTag, UEdGraphNode* Node);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void STInterruptAll(UObject* WorldContextObject, UEdGraphNode* Node);
    
    UFUNCTION(BlueprintCallable)
    static void STHeadGestureResponse(bool Value);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void STHeadGesture(UObject* WorldContextObject, FLatentActionInfo LatentInfo, APlayerCameraManager* CameraManager, float Duration, EHeadGestureResult& Result, FHeadGestureDebugData& OutDebugData);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void STGetSpeakerTimestamp(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FGameplayTag SpeakerTag, float& SpeakTime);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void STGate(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EGateInput Input);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void STFlush(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void STFastForward(UObject* WorldContextObject, ESTGroup Channel);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void STEvent(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TSubclassOf<USTDispatcher> Class, USTDispatcher*& Dispatcher, uint8& Data);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void STEnd(UObject* WorldContextObject, FLatentActionInfo LatentInfo, bool bMarkAsCompleted);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void STDuplicateData(UObject* WorldContextObject, FLatentActionInfo LatentInfo, uint8 NumData);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void STDelay(UObject* WorldContextObject, FLatentActionInfo LatentInfo, float Duration, bool ResetOnPause);
    
    UFUNCTION(BlueprintCallable)
    static void STConsume();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void STClearQueue(UObject* WorldContextObject, ESTGroup Channel);
    
    UFUNCTION(BlueprintCallable)
    static void STClearPlayOnce();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void STClearAllQueues(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void STChoiceGate(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FSTChoiceData ChoiceData, EGateInput Input, ESTChoiceOutput& Out, int32& ChoiceIndex, FGameplayTagContainer& ChoiceTags);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void STBranch(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FName Name, FGameplayTag Tag, FName BranchName, FGameplayTag BranchTag, ESTBranchOutput& Out, bool bResumeFromStart, bool bKillOnInterrupt);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void STBegin(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ESTBeginInput Input, ESTGroup Channel, FName Name, FInterruptEventContainer InterruptEventContainer, ESTBeginOutput& Out, ESTBeginType Type, bool InterruptSamePriority, bool FinishOnInterrupt, bool CanBeQueued, float MaxWaitTime);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void STAsideEnd(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void STAsideActor(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AActor* Actor, ESTAsideInput Input, bool StartClosed, TArray<FSequenceState> PlayBindings);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void STAside(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ESTAsideInput Input, bool StartClosed, TArray<FSequenceState> PlayBindings);
    
    UFUNCTION(BlueprintCallable)
    static bool STAnySequencePlayingInChannel(ESTGroup Channel);
    
    UFUNCTION(BlueprintCallable)
    static void SetHeadGestureValues(int32 Significance, int32 GestureTolerance, int32 MaxAngle, int32 IdleFrames, float IdleThreshold, float DeteriorationRate);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameModeActive(bool InGameModeActive);
    
    UFUNCTION(BlueprintCallable)
    static void ResetHeadGestureValues();
    
};

