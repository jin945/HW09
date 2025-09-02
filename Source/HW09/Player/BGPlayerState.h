// BGPlayerState.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "BGPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class HW09_API ABGPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	ABGPlayerState();
	
	UPROPERTY(Replicated)
	FString PlayerNameString;

	UPROPERTY(Replicated)
	int32 CurrentGuessCount;

	UPROPERTY(Replicated)
	int32 MaxGuessCount;

	FString GetPlayerInfoString();
};
