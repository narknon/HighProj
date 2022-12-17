#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EAkCurveInterpolation.h"
#include "ORAkGameObjectStatics.generated.h"

class UObject;

UCLASS(Blueprintable)
class OREGON_API UORAkGameObjectStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UORAkGameObjectStatics();
    UFUNCTION(BlueprintCallable)
    static void UnRegisterGameObject(const UObject* GameObject);
    
    UFUNCTION(BlueprintCallable)
    static void StopSoundOnGameObject(const UObject* GameObject);
    
    UFUNCTION(BlueprintCallable)
    static void StopAudioFromID(UPARAM(Ref) int32& PlayingID, int32 TransitionDuration, EAkCurveInterpolation FadeCurve);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterGameObject(const UObject* GameObject);
    
    UFUNCTION(BlueprintCallable)
    static void PostEventToGameObject(const UObject* GameObject, const FString& AkEvent);
    
};

