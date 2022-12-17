#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Mercuna3DQueryTest.h"
#include "EnvQueryTest_Mercuna3D_NavRaycast.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class MERCUNA_API UEnvQueryTest_Mercuna3D_NavRaycast : public UMercuna3DQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Context;
    
    UEnvQueryTest_Mercuna3D_NavRaycast();
};

