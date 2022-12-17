#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "LevelPlannerBlueprintLibrary.generated.h"

class USoundBase;
class UDataTable;

UCLASS(Blueprintable)
class LEVELPLANNER_API ULevelPlannerBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULevelPlannerBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void WriteData(UDataTable* Data, FFilePath Path);
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* ReadData(FFilePath Path);
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* CreateDataTable(FName TableName, FName Name, TArray<USoundBase*> Audio);
    
};

