#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SquanchPubSubBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class SQUANCHPUBSUB_API USquanchPubSubBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USquanchPubSubBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static FString GetCurrentTimestamp();
    
    UFUNCTION(BlueprintCallable)
    static void FlushAnalyticsMessages();
    
};

