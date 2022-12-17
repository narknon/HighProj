#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UObject/NoExportTypes.h"
#include "ORSequenceMoveGroup.h"
#include "ORSequenceMoveSubsystem.generated.h"

class AORSequenceMoveTarget;

UCLASS(Blueprintable)
class OREGON_API UORSequenceMoveSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FORSequenceMoveGroup> Groups;
    
    UORSequenceMoveSubsystem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AORSequenceMoveTarget* FindNextMoveTarget(AORSequenceMoveTarget* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AORSequenceMoveTarget* FindClosestMoveTarget(FName GroupName, const FVector& Location);
    
};

