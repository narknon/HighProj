#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ORAlignToGroundComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORAlignToGroundComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlignSpeed;
    
    UORAlignToGroundComponent();
};

