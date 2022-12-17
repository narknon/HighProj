#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ORStylizedDestroyerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORStylizedDestroyerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestroyDelay;
    
    UORStylizedDestroyerComponent();
    UFUNCTION(BlueprintCallable)
    void DoDestroy();
    
    UFUNCTION(BlueprintCallable)
    void CancelDestroy();
    
};

