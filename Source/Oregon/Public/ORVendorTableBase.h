#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ORVendorTableBase.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class OREGON_API UORVendorTableBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ItemTable;
    
    UORVendorTableBase();
};

