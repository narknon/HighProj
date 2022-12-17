#pragma once
#include "CoreMinimal.h"
#include "ORStreamingPortalProxyInfo.generated.h"

class USkeletalMeshComponent;
class UORStreamingPortalProxyComponent;

USTRUCT(BlueprintType)
struct FORStreamingPortalProxyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORStreamingPortalProxyComponent* Proxy;
    
    OREGON_API FORStreamingPortalProxyInfo();
};

