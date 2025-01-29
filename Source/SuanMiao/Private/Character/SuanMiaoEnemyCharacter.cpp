// Copyright Yao Zhoubo


#include "Character/SuanMiaoEnemyCharacter.h"

#include "SuanMiao/SuanMiao.h"
#include "AbilitySystem/SuanMiaoAbilitySystemComponent.h"
#include "AbilitySystem/SuanMiaoAttributeSet.h"

void ASuanMiaoEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	AbilitySystemComponent->InitAbilityActorInfo(this, this);
}

ASuanMiaoEnemyCharacter::ASuanMiaoEnemyCharacter()
{
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

	AbilitySystemComponent = CreateDefaultSubobject<USuanMiaoAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<USuanMiaoAttributeSet>("AttributeSet");
}

void ASuanMiaoEnemyCharacter::HighlightActor()
{
	GetMesh()->SetRenderCustomDepth(true);
	GetMesh()->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
	Weapon->SetRenderCustomDepth(true);
	Weapon->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
}

void ASuanMiaoEnemyCharacter::UnHighlightActor()
{
	GetMesh()->SetRenderCustomDepth(false);
	Weapon->SetRenderCustomDepth(false);
}
