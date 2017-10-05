

#include "PluggedInRC.h"
#include "PluggedInRCGameMode.h"
#include "PluggedInRCPlayerController.h"

APluggedInRCGameMode::APluggedInRCGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	PlayerControllerClass = APluggedInRCPlayerController::StaticClass();
}


