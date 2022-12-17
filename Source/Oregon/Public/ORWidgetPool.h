#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORWidgetPool.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct OREGON_API FORWidgetPool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> AllocatedWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> FreeWidgets;
    
    FORWidgetPool();
};

