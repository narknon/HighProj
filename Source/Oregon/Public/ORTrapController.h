#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORTrapSequenceData.h"
#include "ORTrapSequenceLevelData.h"
#include "ScalableFloat.h"
#include "OnTrapSequenceEndDelegate.h"
#include "ORTrapController.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORTrapController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ControllerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoRunTrapSequences;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTrapSequenceEnd OnTrapSequenceEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FORTrapSequenceData> AllTrapSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TimeBetweenSequenceActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORTrapSequenceData CurrentSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AutoRunAllSequenceNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORTrapSequenceLevelData> TrapSequencesPerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CurrentAutoRunSequenceNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrapsUpdateLimit;
    
public:
    AORTrapController();
};

