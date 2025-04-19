// Spiros Zervos


#include "Character/AuraEnemy.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(AuraEnemy)

AAuraEnemy::AAuraEnemy()
{
	// Setting Collision so that cursor collision effects are registered
	
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Ignore);
}

void AAuraEnemy::HighlightActor()
{
	GetMesh()->SetRenderCustomDepth(true);
	GetMesh()->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);

	Weapon->SetRenderCustomDepth(true);
	Weapon->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
}

void AAuraEnemy::UnhighlightActor()
{
	GetMesh()->SetRenderCustomDepth(false);

	Weapon->SetRenderCustomDepth(false);
}
