#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ORSightTrackingData.h"
#include "Perception/AIPerceptionTypes.h"
#include "ORAISystemBPLibrary.generated.h"

class AActor;
class AORAIController;
class UAISense;
class UAIPerceptionComponent;

UCLASS(Blueprintable)
class OREGON_API UORAISystemBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UORAISystemBPLibrary();
    UFUNCTION(BlueprintCallable)
    static void UpdateSightTrackingSightAndTimes(UPARAM(Ref) FORSightTrackingData& SightData, bool HasLineOfSight, float GameTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SightTrackingHasLineOfSightMinTimeCheck(const FORSightTrackingData& SightData, float MinTimeSeenTarget, float GameTime);
    
    UFUNCTION(BlueprintCallable)
    static void SetAllSensesEnabled(UAIPerceptionComponent* PerceptionComp, const bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStimulusExpired(const FAIStimulus& InStimulus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasAnyKnownStimulusForActor(UAIPerceptionComponent* PerceptionComp, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasAnyCurrentStimulusForActor(UAIPerceptionComponent* PerceptionComp, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AORAIController* GetORAIController(AActor* ControlledActor);
    
    UFUNCTION(BlueprintCallable)
    static bool GetActorsPerceptionForSense(UAIPerceptionComponent* PerceptionComp, AActor* Actor, const TSubclassOf<UAISense> SenseToUse, FAIStimulus& OutSenseStimulusData);
    
};

