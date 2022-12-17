#pragma once
#include "CoreMinimal.h"
#include "Engine/SceneCapture2D.h"
#include "SkrendelAcidSceneCapture2D.generated.h"

class AActor;

UCLASS(Blueprintable)
class OREGON_API ASkrendelAcidSceneCapture2D : public ASceneCapture2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> AcidActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HorzCellCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VertCellCount;
    
    ASkrendelAcidSceneCapture2D();
};

