#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "ORAIBlueprintLibrary.generated.h"

class AActor;
class AORAICharacter;

UCLASS(Blueprintable)
class OREGON_API UORAIBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UORAIBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static AORAICharacter* GetFirstHealableCandidate(const TArray<AORAICharacter*>& Candidates, const FGameplayTagQuery& ExclusionQuery, AActor* SelfObject, bool bCheckIsReachable, const FVector& ReachableOffset);
    
    UFUNCTION(BlueprintCallable)
    static AORAICharacter* GetBestHealableCandidate(const TArray<AORAICharacter*>& Candidates, const FGameplayTagQuery& ExclusionQuery, AActor* SelfObject, bool bCheckMinimumDistance, bool bCheckIsReachable, const FVector& ReachableOffset);
    
};

