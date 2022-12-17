#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "NavRelevantComponent.h"
#include "UObject/NoExportTypes.h"
#include "ORNavModifierComponent.generated.h"

class UNavArea;

UCLASS(Blueprintable, DefaultConfig, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORNavModifierComponent : public UNavRelevantComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> AreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FailsafeExtent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIncludeAgentHeight: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOffsetByAgentHeight: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCollisionMustBeEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMonitorComponentTransforms: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ComponentMonitorNames;
    
    UORNavModifierComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateNavigationData(bool bRefreshBounds);
    
    UFUNCTION(BlueprintCallable)
    void SetAreaClass(TSubclassOf<UNavArea> NewAreaClass);
    
};

