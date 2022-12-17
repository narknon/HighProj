#pragma once
#include "CoreMinimal.h"
#include "ORSenseConfigOverride.h"
#include "ORTargetRememberSetupData.h"
#include "ORCombatSetupData.h"
#include "ORPatrolSetupData.h"
#include "EORAIHostileAwareness.h"
#include "ORAIControllerSetupData.generated.h"

class UAISenseConfig;

USTRUCT(BlueprintType)
struct FORAIControllerSetupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAISenseConfig*> OverrideDefaultSensesConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EORAIHostileAwareness, FORSenseConfigOverride> AwarenessSenseOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORTargetRememberSetupData TargetRememberData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORCombatSetupData CombatData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORPatrolSetupData PatrolData;
    
    OREGON_API FORAIControllerSetupData();
};

