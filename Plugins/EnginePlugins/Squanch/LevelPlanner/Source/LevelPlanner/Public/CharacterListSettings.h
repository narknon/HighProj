#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "CharacterListData.h"
#include "CharacterListSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, NotPlaceable, Config=Squanch)
class LEVELPLANNER_API UCharacterListSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TMap<FString, FCharacterListData> CharacterList;
    
    UCharacterListSettings();
};

