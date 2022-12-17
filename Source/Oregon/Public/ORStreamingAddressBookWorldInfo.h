#pragma once
#include "CoreMinimal.h"
#include "ORStreamingAddressBookLevelInfo.h"
#include "ORStreamingAddressBookWorldInfo.generated.h"

USTRUCT(BlueprintType)
struct FORStreamingAddressBookWorldInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WorldName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PackageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WorldAssetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WorldAssetSubPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORStreamingAddressBookLevelInfo> Levels;
    
    OREGON_API FORStreamingAddressBookWorldInfo();
};

