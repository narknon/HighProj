#pragma once
#include "CoreMinimal.h"
#include "OROnSkeletalMeshMergedDelegate.generated.h"

class USkeletalMesh;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOROnSkeletalMeshMerged, USkeletalMesh*, MergedMesh);

