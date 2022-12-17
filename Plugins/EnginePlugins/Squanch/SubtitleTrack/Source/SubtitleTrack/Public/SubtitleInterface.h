#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SubtitleInterface.generated.h"

UINTERFACE(Blueprintable)
class SUBTITLETRACK_API USubtitleInterface : public UInterface {
    GENERATED_BODY()
};

class SUBTITLETRACK_API ISubtitleInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Stop();
    
};

