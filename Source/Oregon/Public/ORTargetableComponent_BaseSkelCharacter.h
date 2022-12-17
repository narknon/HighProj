#pragma once
#include "CoreMinimal.h"
#include "ORTargetableComponent.h"
#include "ORTargetableComponent_BaseSkelCharacter.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORTargetableComponent_BaseSkelCharacter : public UORTargetableComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<USkeletalMeshComponent> CachedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Sockets;
    
public:
    UORTargetableComponent_BaseSkelCharacter();
};

