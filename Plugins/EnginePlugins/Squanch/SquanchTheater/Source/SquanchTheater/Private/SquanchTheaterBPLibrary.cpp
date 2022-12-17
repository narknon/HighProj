#include "SquanchTheaterBPLibrary.h"
#include "Templates/SubclassOf.h"

class UObject;
class AActor;
class USTDispatcher;
class USTCondition;
class ULevelSequence;
class APlayerCameraManager;
class UEdGraphNode;

void USquanchTheaterBPLibrary::STTrigger(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<USTCondition*> InConditions) {
}

void USquanchTheaterBPLibrary::STResumeBySpeaker(UObject* WorldContextObject, FGameplayTag SpeakerTag) {
}

void USquanchTheaterBPLibrary::STResumeByName(UObject* WorldContextObject, FName Name) {
}

void USquanchTheaterBPLibrary::STResumeByChannel(UObject* WorldContextObject, ESTGroup Channel) {
}

void USquanchTheaterBPLibrary::STRemoveFromQueue(UObject* WorldContextObject, ESTGroup Channel, FName SequenceToRemove) {
}

void USquanchTheaterBPLibrary::STPlayPossessed(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ULevelSequence* Sequence, TArray<ULevelSequence*> SegueSequences, TEnumAsByte<ERandomMethod::Type> InMethod, float SegueProbability, ESTPlayOutput& Out, TMap<FString, UObject*>& PossessMap, FSequenceState& AsideBinding) {
}

void USquanchTheaterBPLibrary::STPlay(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ULevelSequence* Sequence, TArray<ULevelSequence*> SegueSequences, TEnumAsByte<ERandomMethod::Type> InMethod, float SegueProbability, float EndOffset, ESTPlayOutput& Out, TMap<FString, UObject*>& PossessMap, FSequenceState& AsideBinding, AActor* TransformOrigin) {
}

void USquanchTheaterBPLibrary::STPauseBySpeaker(UObject* WorldContextObject, FGameplayTag SpeakerTag) {
}

void USquanchTheaterBPLibrary::STPauseByName(UObject* WorldContextObject, FName Name) {
}

void USquanchTheaterBPLibrary::STPauseByChannel(UObject* WorldContextObject, ESTGroup Channel) {
}

void USquanchTheaterBPLibrary::STKillOthers(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void USquanchTheaterBPLibrary::STKillAll(UObject* WorldContextObject, UEdGraphNode* Node) {
}

bool USquanchTheaterBPLibrary::STIsPlaying(UObject* WorldContextObject, FName Name) {
    return false;
}

bool USquanchTheaterBPLibrary::STIsChannelActive(ESTGroup Channel) {
    return false;
}

void USquanchTheaterBPLibrary::STInterruptEvent(UObject* WorldContextObject, FGameplayTag EventTag, FName SequenceToInterrupt) {
}

void USquanchTheaterBPLibrary::STInterruptByName(UObject* WorldContextObject, FName Name, UEdGraphNode* Node) {
}

void USquanchTheaterBPLibrary::STInterruptByChannel(UObject* WorldContextObject, ESTGroup Channel, UEdGraphNode* Node) {
}

void USquanchTheaterBPLibrary::STInterruptAllWithSpeaker(UObject* WorldContextObject, FGameplayTag SpeakerTag, UEdGraphNode* Node) {
}

void USquanchTheaterBPLibrary::STInterruptAll(UObject* WorldContextObject, UEdGraphNode* Node) {
}

void USquanchTheaterBPLibrary::STHeadGestureResponse(bool Value) {
}

void USquanchTheaterBPLibrary::STHeadGesture(UObject* WorldContextObject, FLatentActionInfo LatentInfo, APlayerCameraManager* CameraManager, float Duration, EHeadGestureResult& Result, FHeadGestureDebugData& OutDebugData) {
}

void USquanchTheaterBPLibrary::STGetSpeakerTimestamp(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FGameplayTag SpeakerTag, float& SpeakTime) {
}

void USquanchTheaterBPLibrary::STGate(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EGateInput Input) {
}

void USquanchTheaterBPLibrary::STFlush(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void USquanchTheaterBPLibrary::STFastForward(UObject* WorldContextObject, ESTGroup Channel) {
}

void USquanchTheaterBPLibrary::STEvent(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TSubclassOf<USTDispatcher> Class, USTDispatcher*& Dispatcher, uint8& Data) {
}

void USquanchTheaterBPLibrary::STEnd(UObject* WorldContextObject, FLatentActionInfo LatentInfo, bool bMarkAsCompleted) {
}

void USquanchTheaterBPLibrary::STDuplicateData(UObject* WorldContextObject, FLatentActionInfo LatentInfo, uint8 NumData) {
}

void USquanchTheaterBPLibrary::STDelay(UObject* WorldContextObject, FLatentActionInfo LatentInfo, float Duration, bool ResetOnPause) {
}

void USquanchTheaterBPLibrary::STConsume() {
}

void USquanchTheaterBPLibrary::STClearQueue(UObject* WorldContextObject, ESTGroup Channel) {
}

void USquanchTheaterBPLibrary::STClearPlayOnce() {
}

void USquanchTheaterBPLibrary::STClearAllQueues(UObject* WorldContextObject) {
}

void USquanchTheaterBPLibrary::STChoiceGate(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FSTChoiceData ChoiceData, EGateInput Input, ESTChoiceOutput& Out, int32& ChoiceIndex, FGameplayTagContainer& ChoiceTags) {
}

void USquanchTheaterBPLibrary::STBranch(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FName Name, FGameplayTag Tag, FName BranchName, FGameplayTag BranchTag, ESTBranchOutput& Out, bool bResumeFromStart, bool bKillOnInterrupt) {
}

void USquanchTheaterBPLibrary::STBegin(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ESTBeginInput Input, ESTGroup Channel, FName Name, FInterruptEventContainer InterruptEventContainer, ESTBeginOutput& Out, ESTBeginType Type, bool InterruptSamePriority, bool FinishOnInterrupt, bool CanBeQueued, float MaxWaitTime) {
}

void USquanchTheaterBPLibrary::STAsideEnd(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void USquanchTheaterBPLibrary::STAsideActor(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AActor* Actor, ESTAsideInput Input, bool StartClosed, TArray<FSequenceState> PlayBindings) {
}

void USquanchTheaterBPLibrary::STAside(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ESTAsideInput Input, bool StartClosed, TArray<FSequenceState> PlayBindings) {
}

bool USquanchTheaterBPLibrary::STAnySequencePlayingInChannel(ESTGroup Channel) {
    return false;
}

void USquanchTheaterBPLibrary::SetHeadGestureValues(int32 Significance, int32 GestureTolerance, int32 MaxAngle, int32 IdleFrames, float IdleThreshold, float DeteriorationRate) {
}

void USquanchTheaterBPLibrary::SetGameModeActive(bool InGameModeActive) {
}

void USquanchTheaterBPLibrary::ResetHeadGestureValues() {
}

USquanchTheaterBPLibrary::USquanchTheaterBPLibrary() {
}

