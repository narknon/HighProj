#pragma once
#include "CoreMinimal.h"
#include "ORTargetableComponent.h"
#include "ORTargetableComponent_Character.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORTargetableComponent_Character : public UORTargetableComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<USkeletalMeshComponent> CachedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Sockets;
    
public:
    UORTargetableComponent_Character();
};

