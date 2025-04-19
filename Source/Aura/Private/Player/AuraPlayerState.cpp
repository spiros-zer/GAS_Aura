// Spiros Zervos


#include "Player/AuraPlayerState.h"

AAuraPlayerState::AAuraPlayerState()
{
	// Make the server update faster since we will be using GAS
	SetNetUpdateFrequency(100.f);
}
