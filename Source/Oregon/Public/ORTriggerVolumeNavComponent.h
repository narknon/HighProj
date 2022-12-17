#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "NavRelevantComponent.h"
#include "UObject/NoExportTypes.h"
#include "ORTriggerVolumeNavComponent.generated.h"

class UNavArea;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORTriggerVolumeNavComponent : public UNavRelevantComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> AreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FailsafeExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIncludeAgentHeight: 1;
    
    UORTriggerVolumeNavComponent();
    UFUNCTION(BlueprintCallable)
    void SetAreaClass(TSubclassOf<UNavArea> NewAreaClass);
    
};

