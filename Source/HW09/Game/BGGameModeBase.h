// BGGameModeBase.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BGGameModeBase.generated.h"

class ABGPlayerController;
/**
 *
 */
UCLASS()
class HW09_API ABGGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;
	
	void PrintChatMessageString(ABGPlayerController* InChattingPlayerController, const FString& InChatMessageString);

	virtual void OnPostLogin(AController* NewPlayer) override;

	FString GenerateSecretNumber();

	bool IsGuessNumberString(const FString& InNumberString);

	FString JudgeResult(const FString& InSecretNumberString, const FString& InGuessNumberString);

	void IncreaseGuessCount(ABGPlayerController* InChattingPlayerController);
	
		void ResetGame();
    
    	void JudgeGame(ABGPlayerController* InChattingPlayerController, int InStrikeCount);
protected:
	FString SecretNumberString;

	TArray<TObjectPtr<ABGPlayerController>> AllPlayerControllers;
};
