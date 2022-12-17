#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AkGenerateSettingsPerUser.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class AKAUDIO_API UAkGenerateSettingsPerUser : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UAkAudioEvent>> EventsToBuild;
    
    UAkGenerateSettingsPerUser();
};

