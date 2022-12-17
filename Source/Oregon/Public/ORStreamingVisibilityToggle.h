#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ORStreamingVisibilityToggle.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORStreamingVisibilityToggle : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MasterLevelNames;
    
    UORStreamingVisibilityToggle();
    UFUNCTION(BlueprintCallable)
    void HandleStreamingPressenceChange();
    
};

