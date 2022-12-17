#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "SQFiringSpread.generated.h"

class APawn;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SQUANCHINVENTORY_API USQFiringSpread : public UObject {
    GENERATED_BODY()
public:
    USQFiringSpread();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AddSpread(UPARAM(Ref) FVector& FiringVector, const FVector& TargetLocation, const FVector& SourceLocation, APawn* OwningPawn, float SpreadMod, int32 ShotCount, int32 TotalShots);
    
};

