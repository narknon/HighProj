#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SyncedMovieLocalization.generated.h"

USTRUCT(BlueprintType)
struct FSyncedMovieLocalization : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    OREGON_API FSyncedMovieLocalization();
};

