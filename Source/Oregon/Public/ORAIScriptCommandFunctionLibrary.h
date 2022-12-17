#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LatentActionManager.h"
#include "GameplayTagContainer.h"
#include "EORAIScriptCommandLatentActionOutput.h"
#include "ORAIScriptCommandFunctionLibrary.generated.h"

class UObject;
class AActor;
class UGameplayAbility;
class UAnimMontage;

UCLASS(Blueprintable)
class OREGON_API UORAIScriptCommandFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UORAIScriptCommandFunctionLibrary();
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void AIScriptCommandUseAbilityWithCallbacks(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EORAIScriptCommandLatentActionOutput& Out, AActor* AIActor, FGameplayTag AbilityTag, TSubclassOf<UGameplayAbility> AbilityClass, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    static void AIScriptCommandUseAbility(AActor* AIActor, FGameplayTag AbilityTag, TSubclassOf<UGameplayAbility> AbilityClass, float Timeout);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void AIScriptCommandStandAndShootWithCallbacks(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EORAIScriptCommandLatentActionOutput& Out, AActor* AIActor, float Time, FGameplayTag AttackTag);
    
    UFUNCTION(BlueprintCallable)
    static void AIScriptCommandStandAndShoot(AActor* AIActor, float Time, FGameplayTag AttackTag);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void AIScriptCommandStandAndLookWithCallbacks(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EORAIScriptCommandLatentActionOutput& Out, AActor* AIActor, AActor* LookAtTarget, float Time);
    
    UFUNCTION(BlueprintCallable)
    static void AIScriptCommandStandAndLook(AActor* AIActor, AActor* LookAtTarget, float Time);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void AIScriptCommandPlayMontageWithCallbacks(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EORAIScriptCommandLatentActionOutput& Out, AActor* AIActor, UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    static void AIScriptCommandPlayMontage(AActor* AIActor, UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void AIScriptCommandMoveToSplineWithCallbacks(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EORAIScriptCommandLatentActionOutput& Out, AActor* AIActor, AActor* TargetActor, const float SplineMoveSpeed, const bool ReverseSplineDirection, const bool ForceSplineRotation, const bool ProjectSplineToMesh, const float NavMeshWaitTime);
    
    UFUNCTION(BlueprintCallable)
    static void AIScriptCommandMoveToSpline(AActor* AIActor, AActor* TargetActor, const float SplineMoveSpeed, const bool ReverseSplineDirection, const bool ForceSplineRotation, const bool ProjectSplineToMesh, const float NavMeshWaitTime);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void AIScriptCommandMoveToLocationWithCallbacks(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EORAIScriptCommandLatentActionOutput& Out, AActor* AIActor, const FVector& TargetLocation, const float AcceptanceRadius, const bool bAllowPartialPathing, const float NavMeshWaitTime);
    
    UFUNCTION(BlueprintCallable)
    static void AIScriptCommandMoveToLocation(AActor* AIActor, const FVector& TargetLocation, const float AcceptanceRadius, const bool bAllowPartialPathing, const float NavMeshWaitTime);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void AIScriptCommandMoveToActorWithCallbacks(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EORAIScriptCommandLatentActionOutput& Out, AActor* AIActor, AActor* TargetActor, const float AcceptanceRadius, const bool bAllowPartialPathing, const float NavMeshWaitTime);
    
    UFUNCTION(BlueprintCallable)
    static void AIScriptCommandMoveToActor(AActor* AIActor, AActor* TargetActor, const float AcceptanceRadius, const bool bAllowPartialPathing, const float NavMeshWaitTime);
    
    UFUNCTION(BlueprintCallable)
    static void AIScriptCommandDispatchGlobalEvent(AActor* AIActor, const FGameplayTag GlobalEventTag);
    
    UFUNCTION(BlueprintCallable)
    static void AIScriptCommandClearQueue(AActor* AIActor);
    
    UFUNCTION(BlueprintCallable)
    static void AIScriptCommandCancelAbilityByClass(AActor* AIActor, TSubclassOf<UGameplayAbility> AbilityClass);
    
};

