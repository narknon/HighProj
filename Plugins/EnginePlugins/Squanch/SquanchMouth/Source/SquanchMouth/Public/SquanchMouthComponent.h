#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EEmotionState.h"
#include "SquanchMouthViseme.h"
#include "SquanchMouthPhoneme.h"
#include "SquanchMouthComponent.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SQUANCHMOUTH_API USquanchMouthComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<SquanchMouthPhoneme, SquanchMouthViseme> PhonemeToVisemeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSimplifyVisemeMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<SquanchMouthViseme, UAnimMontage*> NeutralVisemeToAnimationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<SquanchMouthViseme, UAnimMontage*> HappyVisemeToAnimationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<SquanchMouthViseme, UAnimMontage*> SarcasticVisemeToAnimationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<SquanchMouthViseme, UAnimMontage*> ExcitedVisemeToAnimationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<SquanchMouthViseme, UAnimMontage*> WickedVisemeToAnimationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<SquanchMouthViseme, UAnimMontage*> ConfusedVisemeToAnimationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<SquanchMouthViseme, UAnimMontage*> DeterminedVisemeToAnimationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<SquanchMouthViseme, UAnimMontage*> SurprisedVisemeToAnimationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<SquanchMouthViseme, UAnimMontage*> SadVisemeToAnimationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<SquanchMouthViseme, UAnimMontage*> AngryVisemeToAnimationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<SquanchMouthViseme, UAnimMontage*> AfraidVisemeToAnimationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<SquanchMouthViseme, UAnimMontage*> DisgustedVisemeToAnimationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultMinimumExposureTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<SquanchMouthViseme, float> VisemeMinimumExposureTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastVisemeUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    SquanchMouthViseme LastViseme;
    
public:
    USquanchMouthComponent();
    UFUNCTION(BlueprintCallable)
    void MarkLastVisemeUpdate(SquanchMouthViseme Vis);
    
    UFUNCTION(BlueprintCallable)
    TMap<SquanchMouthViseme, UAnimMontage*> GetVisemeMapForEmotion(EEmotionState Emotion);
    
    UFUNCTION(BlueprintCallable)
    float GetTimeSinceLastVisemeUpdate();
    
    UFUNCTION(BlueprintCallable)
    SquanchMouthViseme GetLastViseme();
    
};

