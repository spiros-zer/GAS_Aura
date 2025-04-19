// Spiros Zervos

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/HighlightInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IHighlightInterface
{
	GENERATED_BODY()

public:

	AAuraEnemy();

	//////// IHighlightInterface

	virtual void HighlightActor() override;

	virtual void UnhighlightActor() override;
};
