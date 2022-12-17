#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORPreviewActor.generated.h"

class UORAbilityPreview;

UCLASS(Blueprintable)
class OREGON_API AORPreviewActor : public AActor {
    GENERATED_BODY()
public:
    AORPreviewActor();
    UFUNCTION(BlueprintCallable)
    void SetAbilityPreviewComponent(UORAbilityPreview* NewAbilityPreviewComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UORAbilityPreview* GetAbilityPreviewComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void EnablePreview();
    
    UFUNCTION(BlueprintCallable)
    void DisablePreview();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdatePreview();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_EnablePreview();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_DisablePreview();
    
};

