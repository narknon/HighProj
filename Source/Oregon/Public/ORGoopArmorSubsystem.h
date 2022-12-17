#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ORGoopArmorData.h"
#include "ORGoopArmorSubsystem.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORGoopArmorSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FORGoopArmorData> DataList;
    
public:
    UORGoopArmorSubsystem();
};

