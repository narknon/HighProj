#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MerOctreeEditorSettings.h"
#include "MerGridEditorSettings.h"
#include "MerEditorSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class MERCUNA_API UMerEditorSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableExtraLogging;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMerOctreeEditorSettings OctreeEditorSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMerGridEditorSettings GridEditorSettings;
    
    UMerEditorSettings();
};

