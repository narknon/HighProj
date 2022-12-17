#pragma once
#include "CoreMinimal.h"
#include "NavLinkCustomComponent.h"
#include "ETraversalTypeFlags.h"
#include "AI/Navigation/NavLinkDefinition.h"
#include "ORSmartLink.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORSmartLink : public UNavLinkCustomComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETraversalTypeFlags TraversalType;
    
public:
    UORSmartLink();
    UFUNCTION(BlueprintCallable)
    void ForceRefreshNavigationChanges();
    
    UFUNCTION(BlueprintCallable)
    void CopyFromSimpleLink(const FNavigationLink& SimpleLink);
    
};

