#pragma once
#include "CoreMinimal.h"
#include "STPossessableInterface.h"
#include "Animation/SkeletalMeshActor.h"
#include "ORSignificanceInterface.h"
#include "Engine/EngineTypes.h"
#include "OROnSkeletalMeshMergedDelegate.h"
#include "BaseCustomizableCharacterEyesDivertDelegateDelegate.h"
#include "BaseCustomizableCharacterEyesBlinkedDelegateDelegate.h"
#include "ORBaseSkeletalMeshNPC.generated.h"

class UEmotionComponent;
class USTPossessableComponent;
class UMeshComponent;
class USquanchMouthComponent;
class USkeletalMesh;
class UORAkComponent;
class UORAttentionComponent;
class UORBlinkComponent;
class UORGazeTargetComponent;
class UORPossessableComponent;
class UORVocalizationComponent;
class UORTriggerSourceComponent;
class UAnimMontage;

UCLASS(Blueprintable)
class OREGON_API AORBaseSkeletalMeshNPC : public ASkeletalMeshActor, public IORSignificanceInterface, public ISTPossessableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoRuntimeSkeletalMeshMerge;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOROnSkeletalMeshMerged OnSkeletalMeshMerged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* NewMergedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSignificanceManagement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrottledTickRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SignificanceBucket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutOfSightSigBoost;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowIdleFidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAFuckingZombieThatDoesntBlink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlinkDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlinkDelayDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDivertGaze;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DivertFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDivertAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DivertFrequencyDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldNoticePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomizePlayerNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxNoticeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinNoticeDot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxNoticeCooldownDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxNoticeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoticedPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> IdleFidgets;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseCustomizableCharacterEyesBlinkedDelegate EyesBlinkedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseCustomizableCharacterEyesDivertDelegate EyesDivertedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleOverrideStartMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORBlinkComponent* BlinkComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEmotionComponent* EmotionComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USquanchMouthComponent* SquanchMouthComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORGazeTargetComponent* GazeTargetComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORAkComponent* ORAk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORPossessableComponent* ORPossessableComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORAttentionComponent* ORAttentionComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORVocalizationComponent* ORVoclizationComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORTriggerSourceComponent* TriggerSourceComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle BlinkTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle EyeDivertTimer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> ActorMeshComps;
    
public:
    AORBaseSkeletalMeshNPC();
    UFUNCTION(BlueprintCallable)
    void TrySkeletalMeshMerge();
    
    UFUNCTION(BlueprintCallable)
    void StopNoticingPlayer();
    
    UFUNCTION(BlueprintCallable)
    void StartNoticingPlayer();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SignificanceTickStateChanged(bool bTickEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SignificanceReducedTickStateChanged(bool bFullTickRate, float NewTickInterval);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetupSkeletalMeshMerge(bool bAsync);
    
    UFUNCTION(BlueprintCallable)
    void FinalizeSkeletalMeshMerge(USkeletalMesh* MergedMesh);
    
    UFUNCTION(BlueprintCallable)
    void DoSkeletalMeshMerge();
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    USTPossessableComponent* GetPossessableComponent() const override PURE_VIRTUAL(GetPossessableComponent, return NULL;);
    
};

