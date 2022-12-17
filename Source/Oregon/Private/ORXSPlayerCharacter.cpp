#include "ORXSPlayerCharacter.h"
#include "Components/SceneCaptureComponent2D.h"

AORXSPlayerCharacter::AORXSPlayerCharacter() {
    this->SceneCapture = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("CameraCapture"));
}

