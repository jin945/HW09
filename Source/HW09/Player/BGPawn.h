// BGPawn.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BGPawn.generated.h"

UCLASS()
class HW09_API ABGPawn : public APawn
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

	virtual void PossessedBy(AController* NewController) override;

};
