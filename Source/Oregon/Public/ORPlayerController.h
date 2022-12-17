#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerController.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BossIntroCompleteEventDelegate.h"
#include "Camera/PlayerCameraManager.h"
#include "ORPlayerController.generated.h"

class AActor;
class APawn;
class AORTargetablesManager;

UCLASS(Blueprintable)
class AORPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat CachedViewQuat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator PossessionStartRotation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossIntroCompleteEvent OnBossIntroFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform CachedPlayerBossIntroTransform;
    
    UPROPERTY(EditAnywhere)
    TArray<TWeakObjectPtr<AActor>> CachedDisableCollisionActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* CachedPlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHUDHiddenByPossessionSwap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWeaponHiddenByPossessionSwap;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AORTargetablesManager> TargetablesManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AORTargetablesManager* TargetablesManager;
    
public:
    AORPlayerController();
    UFUNCTION(BlueprintCallable)
    void SetViewTargetTransitionParamsOverride(FViewTargetTransitionParams NewOverrideTransitionParams);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerLocationFocus(UPARAM(Ref) FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerActorFocus(AActor* FocusTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetPauseMenuActiveState(bool bIsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeaponHiddenByPossessionSwap();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleControllerDisconnect(bool Connected);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPauseMenuActiveState();
    
    UFUNCTION(BlueprintCallable)
    void EndPossessionSwap(bool bCalculateNewPawnLocation);
    
    UFUNCTION(BlueprintCallable)
    void EndPlayerFocus();
    
    UFUNCTION(BlueprintCallable)
    void EndBossIntro();
    
    UFUNCTION(BlueprintCallable)
    void ClearViewTargetTransitionParamsOverride();
    
    UFUNCTION(BlueprintCallable)
    void BossIntroReturnToPlayerStarted();
    
    UFUNCTION(BlueprintCallable)
    void BossIntroCameraCutComplete();
    
    UFUNCTION(BlueprintCallable)
    void ActivatePossessionSwap(APawn* NewPawn);
    
};

