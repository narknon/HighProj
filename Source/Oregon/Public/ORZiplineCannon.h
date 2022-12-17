#pragma once
#include "CoreMinimal.h"
#include "ORStationaryPawn.h"
#include "UObject/NoExportTypes.h"
#include "EZiplineCannonState.h"
#include "ORZiplineCannon.generated.h"

class AActor;

UCLASS(Blueprintable)
class OREGON_API AORZiplineCannon : public AORStationaryPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TempZiplineOffset;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> ActiveZipline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZiplineExtensionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinClampDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxClampDistanceOffset;
    
public:
    AORZiplineCannon();
    UFUNCTION(BlueprintCallable)
    void ZiplineFired(AActor* NewZipline);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearExistingZipline();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ZiplineCannonStateChanged(TEnumAsByte<EZiplineCannonState> OldState, TEnumAsByte<EZiplineCannonState> NewState);
    
};

