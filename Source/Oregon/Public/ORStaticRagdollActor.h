#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORStaticRagdollActor.generated.h"

class UPoseableMeshComponent;

UCLASS(Blueprintable)
class OREGON_API AORStaticRagdollActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* PoseableMeshComp;
    
    AORStaticRagdollActor();
};

