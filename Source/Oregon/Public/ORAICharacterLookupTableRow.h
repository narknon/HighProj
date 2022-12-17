#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ORAICharacterLookupTableRow.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct OREGON_API FORAICharacterLookupTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> AICharacterClass;
    
    FORAICharacterLookupTableRow();
};

