#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AIActivityLoopDelegateDelegate.h"
#include "AIActivityInterruptDelegateDelegate.h"
#include "AIActivityEndDelegateDelegate.h"
#include "AIActivityBeginDelegateDelegate.h"
#include "ORActivityBase.generated.h"

class AActor;
class APawn;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class OREGON_API UORActivityBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunInParallel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoopCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* HomeBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumRetriesOnFail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RetryCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldRetryOnInterrupt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIActivityBeginDelegate OnActivityBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIActivityEndDelegate OnActivityEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIActivityInterruptDelegate OnActivityInterrupt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIActivityLoopDelegate OnActivityLoop;
    
    UORActivityBase();
    UFUNCTION(BlueprintCallable)
    void ResetProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InterruptActivity();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndActivity();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BeginActivity();
    
};

