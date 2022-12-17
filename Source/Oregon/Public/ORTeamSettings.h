#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ORTeamAttitude.h"
#include "GenericTeamAgentInterface.h"
#include "EFactionTeamIDs.h"
#include "ORTeamSettings.generated.h"

class AORCharacter;

UCLASS(Blueprintable, DefaultConfig, NotPlaceable, Config=Squanch)
class OREGON_API UORTeamSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EFactionTeamIDs>, FORTeamAttitude> TeamAttitudes;
    
    UORTeamSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<ETeamAttitude::Type> GetCharacterAttitude(AORCharacter* A, AORCharacter* B);
    
};

