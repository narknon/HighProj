#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "UObject/NoExportTypes.h"
#include "STSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, NotPlaceable, Config=SquanchTheater)
class USTSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath SoundClass;
    
    USTSettings();
};

