// Spiros Zervos

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AuraCharacterBase.generated.h"

/**
 * @brief Base character class for the Aura project.
 *
 * This class serves as the abstract base class for all character-related entities
 * within the Aura project. It inherits from ACharacter and provides core functionality
 * common to all characters in the game.
 *
 * @note This class is abstract and should not be instantiated directly. Subclass it
 * to create specific character types.
 */
UCLASS(Abstract)
class AURA_API AAuraCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:

	AAuraCharacterBase();

protected:

	virtual void BeginPlay() override;
};
