#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EEmotionState.h"
#include "EmotionInterface.generated.h"

UINTERFACE(Blueprintable)
class EMOTIONSYSTEM_API UEmotionInterface : public UInterface {
    GENERATED_BODY()
};

class EMOTIONSYSTEM_API IEmotionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Stop();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEmotionAllowed(bool bIsAllowed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEmotion(EEmotionState Emotion, float Duration);
    
};

