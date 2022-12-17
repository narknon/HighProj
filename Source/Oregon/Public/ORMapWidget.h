#pragma once
#include "CoreMinimal.h"
#include "ORWidgetPool.h"
#include "Blueprint/UserWidget.h"
#include "UObject/NoExportTypes.h"
#include "ORMapWidget.generated.h"

class AORMapBoundsVolume;
class UCanvasPanel;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORMapWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AORMapBoundsVolume* BoundsVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* IconParentWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORWidgetPool PlayerWidgetPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORWidgetPool ObjectiveWidgetPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORWidgetPool LootWidgetPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORWidgetPool PortalWidgetPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORWidgetPool CheckpointWidgetPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D MapCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MapZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HorizontalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float VerticalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ZoomOffset;
    
    UORMapWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateWidgets();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMap();
    
    UFUNCTION(BlueprintCallable)
    void HandleZoomOutAxis(float AxisValue);
    
    UFUNCTION(BlueprintCallable)
    void HandleZoomInAxis(float AxisValue);
    
    UFUNCTION(BlueprintCallable)
    void HandleZoomAxis(float AxisValue);
    
    UFUNCTION(BlueprintCallable)
    void HandleVerticalScrollAxis(float AxisValue);
    
    UFUNCTION(BlueprintCallable)
    void HandleHorizontalScrollAxis(float AxisValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetMapTexture();
    
    UFUNCTION(BlueprintCallable)
    void DragMap(const FVector2D& Offset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AttachWidget(UUserWidget* Widget, FVector2D Location);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AttachMap(FVector2D Translation, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void AdjustZoom(float ZoomAmount, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void AdjustMapPosition(const FVector2D& Offset, float DeltaTime);
    
};

