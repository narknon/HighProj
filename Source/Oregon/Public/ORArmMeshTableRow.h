#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ORArmMeshTableRow.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct OREGON_API FORArmMeshTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* LeftArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* RightArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* RightArmWithRemote;
    
    FORArmMeshTableRow();
};

