#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OR3DMapMarker.generated.h"

class AOR3DMapCaptureActor;

UCLASS(Blueprintable)
class OREGON_API AOR3DMapMarker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FocusHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxFrameDelay;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AOR3DMapCaptureActor> CaptureActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerToCaptureDot;
    
    AOR3DMapMarker();
    UFUNCTION(BlueprintCallable)
    void Unfocus();
    
    UFUNCTION(BlueprintCallable)
    void Focus();
    
};

