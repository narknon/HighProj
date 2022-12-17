#pragma once
#include "CoreMinimal.h"
#include "ORWidget_AnimatingBar.h"
#include "ORWidget_BossHealthBar.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORWidget_BossHealthBar : public UORWidget_AnimatingBar {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BossName;
    
public:
    UORWidget_BossHealthBar();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TurnOnHealthBar(FName CharacterRowName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TurnOffHealthBar();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateHealthBar();
    
    UFUNCTION(BlueprintCallable)
    void ActivateHealthBar(FName CharacterRowName);
    
};

