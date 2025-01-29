// Copyright Yao Zhoubo


#include "Character/SuanMiaoCharacterBase.h"

ASuanMiaoCharacterBase::ASuanMiaoCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

UAbilitySystemComponent* ASuanMiaoCharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UAttributeSet* ASuanMiaoCharacterBase::GetAttributeSet() const
{
	return AttributeSet;
}

void ASuanMiaoCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}