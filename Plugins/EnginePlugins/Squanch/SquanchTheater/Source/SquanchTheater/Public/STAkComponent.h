#pragma once
#include "CoreMinimal.h"
#include "AkComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "STAkComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SQUANCHTHEATER_API USTAkComponent : public UAkComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    USTAkComponent();
    UFUNCTION(BlueprintCallable)
    void RemovePlayingId(int32 PlayingID);
    
    UFUNCTION(BlueprintCallable)
    void AddPlayingId(int32 PlayingID);
    
};

