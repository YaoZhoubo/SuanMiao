// Copyright Yao Zhoubo


#include "Player/SuanMiaoPlayerState.h"

#include "Character/SuanMiaoCharacter.h"
#include "AbilitySystem/SuanMiaoAbilitySystemComponent.h"
#include "AbilitySystem/SuanMiaoAttributeSet.h"

ASuanMiaoPlayerState::ASuanMiaoPlayerState()
{
	// ���������¿ͻ��˵�Ƶ��
	NetUpdateFrequency = 100.f;

	AbilitySystemComponent = CreateDefaultSubobject<USuanMiaoAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<USuanMiaoAttributeSet>("AttributeSet");

	ASuanMiaoCharacter* SuanMiaoCharacter = GetPawn<ASuanMiaoCharacter>();
	if (SuanMiaoCharacter)
	{
		
	}
}

UAbilitySystemComponent* ASuanMiaoPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UAttributeSet* ASuanMiaoPlayerState::GetAttributeSet() const
{
	return AttributeSet;
}
