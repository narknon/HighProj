#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "UObject/NoExportTypes.h"
#include "ORInteractionStationComponent.generated.h"

class USceneComponent;
class UORWidget_InteractStationCanvas;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORInteractionStationComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator ViewAngleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDefaultFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveToCamera;
    
    UORInteractionStationComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitedStation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnteredStationComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnteredStation();
    
    UFUNCTION(BlueprintCallable)
    UORWidget_InteractStationCanvas* GetInteractionCanvasWidget();
    
};

