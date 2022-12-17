#pragma once
#include "CoreMinimal.h"
#include "Components/Button.h"
#include "Components/Button.h"
#include "ORButton.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORButton : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnButtonHoverEvent OnFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnButtonHoverEvent OnUnfocused;
    
    UORButton();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleUnhovered();
    
};

