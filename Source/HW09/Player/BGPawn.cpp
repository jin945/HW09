// BGPawn.cpp


#include "BGPawn.h"
#include "HW09/HW09.h"


void ABGPawn::BeginPlay()
{
	Super::BeginPlay();

	FString NetRoleString = HW09FunctionLibrary::GetRoleString(this);
	FString CombinedString = FString::Printf(TEXT("BGPawn::BeginPlay() %s [%s]"), *HW09FunctionLibrary::GetNetModeString(this), *NetRoleString);
	HW09FunctionLibrary::MyPrintString(this, CombinedString, 10.f);
}

void ABGPawn::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	FString NetRoleString = HW09FunctionLibrary::GetRoleString(this);
	FString CombinedString = FString::Printf(TEXT("BGPawn::PossessedBy() %s [%s]"), *HW09FunctionLibrary::GetNetModeString(this), *NetRoleString);
	HW09FunctionLibrary::MyPrintString(this, CombinedString, 10.f);
}
