// Spiros Zervos

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HighlightInterface.generated.h"

#define CUSTOM_DEPTH_RED 250

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UHighlightInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class AURA_API IHighlightInterface
{
	GENERATED_BODY()

public:

	virtual void HighlightActor() = 0;

	virtual void UnhighlightActor() = 0;
};
