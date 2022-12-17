#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LCutWordCompleteDelegate.h"
#include "STLCutWorker.generated.h"

class UAudioComponent;
class USTAkComponent;

UCLASS(Blueprintable)
class USTLCutWorker : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLCutWordComplete OnLCutWordComplete;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAudioComponent*> AudioComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USTAkComponent*> AkAudioComponents;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> AkPlayingIds;
    
public:
    USTLCutWorker();
};

