// Copyright Yao Zhoubo


#include "AbilitySystem/SuanMiaoAttributeSet.h"

#include "AbilitySystemComponent.h"
#include "Net/UnrealNetwork.h"

USuanMiaoAttributeSet::USuanMiaoAttributeSet()
{
}

void USuanMiaoAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// 注册要复制的属性
	DOREPLIFETIME_CONDITION_NOTIFY(USuanMiaoAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USuanMiaoAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USuanMiaoAttributeSet, Mana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USuanMiaoAttributeSet, MaxMana, COND_None, REPNOTIFY_Always);
}

void USuanMiaoAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USuanMiaoAttributeSet, Health, OldHealth);
}

void USuanMiaoAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USuanMiaoAttributeSet, MaxHealth, OldMaxHealth);
}

void USuanMiaoAttributeSet::OnRep_Mana(const FGameplayAttributeData& OldMana) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USuanMiaoAttributeSet, Mana, OldMana);
}

void USuanMiaoAttributeSet::OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USuanMiaoAttributeSet, MaxMana, OldMaxMana);
}