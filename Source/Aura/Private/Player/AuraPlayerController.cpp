// Spiros Zervos


#include "Player/AuraPlayerController.h"

#include "EnhancedInputSubsystems.h"

AAuraPlayerController::AAuraPlayerController()
{
	// Making sure the PC replicates
	bReplicates = true;
}

void AAuraPlayerController::BeginPlay()
{
	Super::BeginPlay();

	check(AuraContext);

	UEnhancedInputLocalPlayerSubsystem* EnhancedInputSubsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	check(EnhancedInputSubsystem);
	EnhancedInputSubsystem->AddMappingContext(AuraContext, 0);

	// Top-down game so the cursor needs to be always shown
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;

	// Setup input from keyboard/mouse to affect player but also UI properly
	FInputModeGameAndUI InputMode;
	InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	InputMode.SetHideCursorDuringCapture(false);
	SetInputMode(InputMode);
}
