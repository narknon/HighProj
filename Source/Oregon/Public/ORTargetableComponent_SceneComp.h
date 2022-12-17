#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORTargetableComponent.h"
#include "ORTargetableComponent_SceneComp.generated.h"

class USceneComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORTargetableComponent_SceneComp : public UORTargetableComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<USceneComponent> CachedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USceneComponent> SearchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Sockets;
    
public:
    UORTargetableComponent_SceneComp();
};

