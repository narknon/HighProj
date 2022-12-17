#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "ORSpeakingIndicatorComponent.generated.h"

class UORPossessableComponent;
class UORVocalizationComponent;
class UMaterialBillboardComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORSpeakingIndicatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UORPossessableComponent* CachedPossessableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UORVocalizationComponent* CachedVocalizationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMaterialBillboardComponent* SpeakingIndicatorIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector IconOffset;
    
    UORSpeakingIndicatorComponent();
    UFUNCTION(BlueprintCallable)
    void SetIndicatorIcon(UMaterialBillboardComponent* NewSpeakingIndicatorIcon);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bEnable);
    
};

