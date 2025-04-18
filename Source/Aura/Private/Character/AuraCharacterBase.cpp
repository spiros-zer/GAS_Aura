// Spiros Zervos


#include "Character/AuraCharacterBase.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(AuraCharacterBase)

AAuraCharacterBase::AAuraCharacterBase()
{
	// Base class doesn't need to tick
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Weapon"));
	Weapon->SetupAttachment(GetMesh(), FName(TEXT("WeaponHandSocket")));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AAuraCharacterBase::BeginPlay()
{
	Super::BeginPlay();
}
