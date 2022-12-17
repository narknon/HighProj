#include "ORAIScriptCommandFunctionLibrary.h"
#include "Templates/SubclassOf.h"

class UObject;
class AActor;
class UGameplayAbility;
class UAnimMontage;

void UORAIScriptCommandFunctionLibrary::AIScriptCommandUseAbilityWithCallbacks(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EORAIScriptCommandLatentActionOutput& Out, AActor* AIActor, FGameplayTag AbilityTag, TSubclassOf<UGameplayAbility> AbilityClass, float Timeout) {
}

void UORAIScriptCommandFunctionLibrary::AIScriptCommandUseAbility(AActor* AIActor, FGameplayTag AbilityTag, TSubclassOf<UGameplayAbility> AbilityClass, float Timeout) {
}

void UORAIScriptCommandFunctionLibrary::AIScriptCommandStandAndShootWithCallbacks(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EORAIScriptCommandLatentActionOutput& Out, AActor* AIActor, float Time, FGameplayTag AttackTag) {
}

void UORAIScriptCommandFunctionLibrary::AIScriptCommandStandAndShoot(AActor* AIActor, float Time, FGameplayTag AttackTag) {
}

void UORAIScriptCommandFunctionLibrary::AIScriptCommandStandAndLookWithCallbacks(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EORAIScriptCommandLatentActionOutput& Out, AActor* AIActor, AActor* LookAtTarget, float Time) {
}

void UORAIScriptCommandFunctionLibrary::AIScriptCommandStandAndLook(AActor* AIActor, AActor* LookAtTarget, float Time) {
}

void UORAIScriptCommandFunctionLibrary::AIScriptCommandPlayMontageWithCallbacks(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EORAIScriptCommandLatentActionOutput& Out, AActor* AIActor, UAnimMontage* Montage) {
}

void UORAIScriptCommandFunctionLibrary::AIScriptCommandPlayMontage(AActor* AIActor, UAnimMontage* Montage) {
}

void UORAIScriptCommandFunctionLibrary::AIScriptCommandMoveToSplineWithCallbacks(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EORAIScriptCommandLatentActionOutput& Out, AActor* AIActor, AActor* TargetActor, const float SplineMoveSpeed, const bool ReverseSplineDirection, const bool ForceSplineRotation, const bool ProjectSplineToMesh, const float NavMeshWaitTime) {
}

void UORAIScriptCommandFunctionLibrary::AIScriptCommandMoveToSpline(AActor* AIActor, AActor* TargetActor, const float SplineMoveSpeed, const bool ReverseSplineDirection, const bool ForceSplineRotation, const bool ProjectSplineToMesh, const float NavMeshWaitTime) {
}

void UORAIScriptCommandFunctionLibrary::AIScriptCommandMoveToLocationWithCallbacks(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EORAIScriptCommandLatentActionOutput& Out, AActor* AIActor, const FVector& TargetLocation, const float AcceptanceRadius, const bool bAllowPartialPathing, const float NavMeshWaitTime) {
}

void UORAIScriptCommandFunctionLibrary::AIScriptCommandMoveToLocation(AActor* AIActor, const FVector& TargetLocation, const float AcceptanceRadius, const bool bAllowPartialPathing, const float NavMeshWaitTime) {
}

void UORAIScriptCommandFunctionLibrary::AIScriptCommandMoveToActorWithCallbacks(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EORAIScriptCommandLatentActionOutput& Out, AActor* AIActor, AActor* TargetActor, const float AcceptanceRadius, const bool bAllowPartialPathing, const float NavMeshWaitTime) {
}

void UORAIScriptCommandFunctionLibrary::AIScriptCommandMoveToActor(AActor* AIActor, AActor* TargetActor, const float AcceptanceRadius, const bool bAllowPartialPathing, const float NavMeshWaitTime) {
}

void UORAIScriptCommandFunctionLibrary::AIScriptCommandDispatchGlobalEvent(AActor* AIActor, const FGameplayTag GlobalEventTag) {
}

void UORAIScriptCommandFunctionLibrary::AIScriptCommandClearQueue(AActor* AIActor) {
}

void UORAIScriptCommandFunctionLibrary::AIScriptCommandCancelAbilityByClass(AActor* AIActor, TSubclassOf<UGameplayAbility> AbilityClass) {
}

UORAIScriptCommandFunctionLibrary::UORAIScriptCommandFunctionLibrary() {
}

