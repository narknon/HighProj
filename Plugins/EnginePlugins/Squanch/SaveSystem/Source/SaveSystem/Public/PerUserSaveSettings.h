#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "PerUserSaveSettings.generated.h"

UCLASS(Blueprintable, NotPlaceable, Config=SquanchEditor)
class UPerUserSaveSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveInEditor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadInEditor;
    
    UPerUserSaveSettings();
};

