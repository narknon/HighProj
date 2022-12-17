#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ORAttractionPointSubsystemQuery.h"
#include "ORAttractionPointSubsystem.generated.h"

class UObject;

UCLASS(Blueprintable)
class OREGON_API UORAttractionPointSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UORAttractionPointSubsystem();
    UFUNCTION(BlueprintCallable)
    UObject* QueryBestAttractionPointWithTarget(const FORAttractionPointSubsystemQuery& QueryParams);
    
    UFUNCTION(BlueprintCallable)
    UObject* QueryBestAttractionPointWithoutTarget(const FORAttractionPointSubsystemQuery& QueryParams);
    
};

