#pragma once
#include "CoreMinimal.h"
#include "Mercuna3DQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryTest_Mercuna3D_Project.generated.h"

UCLASS(Blueprintable)
class MERCUNA_API UEnvQueryTest_Mercuna3D_Project : public UMercuna3DQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue MaxSearchRadius;
    
    UEnvQueryTest_Mercuna3D_Project();
};

