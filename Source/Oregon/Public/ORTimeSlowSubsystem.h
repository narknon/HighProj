#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "Subsystems/WorldSubsystem.h"
#include "TimeSlowHandle.h"
#include "ORTimeSlowSubsystem.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class OREGON_API UORTimeSlowSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCurveFloat*> Curves;
    
public:
    UORTimeSlowSubsystem();
    UFUNCTION(BlueprintCallable)
    void SetAnimNotifySlowTimeHandle(FTimeSlowHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    FTimeSlowHandle GetAnimNotifySlowTimeHandle();
    
    UFUNCTION(BlueprintCallable)
    void EndTimeSlowForHandle(UPARAM(Ref) FTimeSlowHandle& Handle);
    
    UFUNCTION(BlueprintCallable)
    void CreateTimeSlowSpecificDuration(float TimeSlowFactor, float EaseIn, float EaseOut, float Duration, bool bAffectsAudio);
    
    UFUNCTION(BlueprintCallable)
    FTimeSlowHandle CreateTimeSlowDynamicDuration(float TimeSlowFactor, float EaseIn, float EaseOut, bool bAffectsAudio);
    
    UFUNCTION(BlueprintCallable)
    void CreateTimeSlowCurve(const FRuntimeFloatCurve& Curve, bool bAffectsAudio);
    
    UFUNCTION(BlueprintCallable)
    void AdjustTimeSlowValue(const FTimeSlowHandle& Handle, float NewValue, float EaseIn);
    
};

