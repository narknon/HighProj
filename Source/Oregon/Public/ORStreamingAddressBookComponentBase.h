#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ORStreamingAddressBookComponentBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORStreamingAddressBookComponentBase : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName PreviouslyRegisteredTagName;
    
    UORStreamingAddressBookComponentBase();
};

