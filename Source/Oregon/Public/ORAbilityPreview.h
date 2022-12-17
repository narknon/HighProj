#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORScriptComponent.h"
#include "ORAbilityPreview.generated.h"

class AActor;
class ACharacter;
class AORPreviewActor;

UCLASS(Blueprintable)
class OREGON_API UORAbilityPreview : public UORScriptComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* OwningCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AORPreviewActor> PreviewActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AORPreviewActor* PreviewActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPreviewEnabled;
    
public:
    UORAbilityPreview();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdatePreview();
    
public:
    UFUNCTION(BlueprintCallable)
    void EnablePreview();
    
    UFUNCTION(BlueprintCallable)
    void DisablePreview();
    
    UFUNCTION(BlueprintCallable)
    void ChangePreviewActorClass(const TSubclassOf<AActor> NewPreviewActorClass);
    
};

