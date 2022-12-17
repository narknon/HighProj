#pragma once
#include "CoreMinimal.h"
#include "ORGlobalEventPayload.h"
#include "ORGlobalEventPayloadWithSkeletalMesh.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class OREGON_API UORGlobalEventPayloadWithSkeletalMesh : public UORGlobalEventPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UORGlobalEventPayloadWithSkeletalMesh();
};

