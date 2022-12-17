#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GameplayTagContainer.h"
#include "STCharacterLookup.generated.h"

UCLASS(Blueprintable, DefaultConfig, NotPlaceable, Config=Squanch)
class SQUANCHTHEATER_API USTCharacterLookup : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TMap<FString, FGameplayTag> CharacterList;
    
    USTCharacterLookup();
};

