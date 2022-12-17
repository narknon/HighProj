#pragma once
#include "CoreMinimal.h"
#include "ORAIFaunaCharacter.h"
#include "ORAIFauna_Enemy_CongaBody.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORAIFauna_Enemy_CongaBody : public AORAIFaunaCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MvmtRustlePlayerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InvalidPlayingID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AORAIFaunaCharacter* HeadMyte;
    
    AORAIFauna_Enemy_CongaBody();
};

