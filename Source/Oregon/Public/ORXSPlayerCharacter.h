#pragma once
#include "CoreMinimal.h"
#include "ORPlayerCharacter.h"
#include "ORXSPlayerCharacter.generated.h"

class USceneCaptureComponent2D;

UCLASS(Blueprintable)
class OREGON_API AORXSPlayerCharacter : public AORPlayerCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* SceneCapture;
    
public:
    AORXSPlayerCharacter();
};

