#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "SQGameplayStatics.generated.h"

class UObject;

UCLASS(Blueprintable)
class SQUANCHSTATICS_API USQGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USQGameplayStatics();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRegisteredGameplayTagName(FName TagName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGameplayTagValidAndRegistered(FGameplayTag GameplayTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> GetSupportedRefreshRates();
    
    UFUNCTION(BlueprintCallable)
    static bool BPAssertValid_Object(UObject* Object, const UObject* Other, const FString& AssertMsg, bool BreakAssert);
    
    UFUNCTION(BlueprintCallable)
    static bool BPAssertNotEqual_Vector(UObject* Object, const FVector& Value, const FVector& Expected, const FString& AssertMsg, bool BreakAssert);
    
    UFUNCTION(BlueprintCallable)
    static bool BPAssertNotEqual_Transform(UObject* Object, const FTransform& Value, const FTransform& Expected, const FString& AssertMsg, bool BreakAssert);
    
    UFUNCTION(BlueprintCallable)
    static bool BPAssertNotEqual_String(UObject* Object, const FString& Value, const FString& Expected, const FString& AssertMsg, bool BreakAssert);
    
    UFUNCTION(BlueprintCallable)
    static bool BPAssertNotEqual_Rotator(UObject* Object, const FRotator& Value, const FRotator& Expected, const FString& AssertMsg, bool BreakAssert);
    
    UFUNCTION(BlueprintCallable)
    static bool BPAssertNotEqual_Name(UObject* Object, const FName& Value, const FName& Expected, const FString& AssertMsg, bool BreakAssert);
    
    UFUNCTION(BlueprintCallable)
    static bool BPAssertNotEqual_Int(UObject* Object, const int32 Value, const int32 Expected, const FString& AssertMsg, bool BreakAssert);
    
    UFUNCTION(BlueprintCallable)
    static bool BPAssertNotEqual_Float(UObject* Object, const float Value, const float Expected, const FString& AssertMsg, bool BreakAssert);
    
    UFUNCTION(BlueprintCallable)
    static bool BPAssertNotEqual_Bool(UObject* Object, const bool Value, const bool Expected, const FString& AssertMsg, bool BreakAssert);
    
    UFUNCTION(BlueprintCallable)
    static bool BPAssertEqual_Vector(UObject* Object, const FVector& Value, const FVector& Expected, const FString& AssertMsg, bool BreakAssert);
    
    UFUNCTION(BlueprintCallable)
    static bool BPAssertEqual_Transform(UObject* Object, const FTransform& Value, const FTransform& Expected, const FString& AssertMsg, bool BreakAssert);
    
    UFUNCTION(BlueprintCallable)
    static bool BPAssertEqual_String(UObject* Object, const FString& Value, const FString& Expected, const FString& AssertMsg, bool BreakAssert);
    
    UFUNCTION(BlueprintCallable)
    static bool BPAssertEqual_Rotator(UObject* Object, const FRotator& Value, const FRotator& Expected, const FString& AssertMsg, bool BreakAssert);
    
    UFUNCTION(BlueprintCallable)
    static bool BPAssertEqual_Name(UObject* Object, const FName& Value, const FName& Expected, const FString& AssertMsg, bool BreakAssert);
    
    UFUNCTION(BlueprintCallable)
    static bool BPAssertEqual_Int(UObject* Object, const int32 Value, const int32 Expected, const FString& AssertMsg, bool BreakAssert);
    
    UFUNCTION(BlueprintCallable)
    static bool BPAssertEqual_Float(UObject* Object, const float Value, const float Expected, const FString& AssertMsg, bool BreakAssert);
    
    UFUNCTION(BlueprintCallable)
    static bool BPAssertEqual_Bool(UObject* Object, const bool Value, const bool Expected, const FString& AssertMsg, bool BreakAssert);
    
};

