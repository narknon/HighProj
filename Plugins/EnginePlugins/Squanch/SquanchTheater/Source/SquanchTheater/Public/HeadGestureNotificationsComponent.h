#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HeadGestureNotificationsComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHeadGestureNotificationsDelegate);

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SQUANCHTHEATER_API UHeadGestureNotificationsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHeadGestureNotificationsDelegate HeadGestureBeginDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHeadGestureNotificationsDelegate HeadGestureEndDelegate;
    
    UHeadGestureNotificationsComponent();
};

