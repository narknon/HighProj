#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SubtitleStruct.h"
#include "SubtitleBPLibrary.generated.h"

UCLASS(Blueprintable)
class SUBTITLETRACK_API USubtitleBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USubtitleBPLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSubtitle(FSubtitleStruct Subtitle);
    
};

