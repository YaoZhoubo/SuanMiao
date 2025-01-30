// Copyright Yao Zhoubo


#include "Character/SuanMiaoCharacter.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "Player/SuanMiaoPlayerState.h"
#include "AbilitySystem/SuanMiaoAbilitySystemComponent.h"

ASuanMiaoCharacter::ASuanMiaoCharacter()
{
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 400.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;
}

void ASuanMiaoCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if(ASuanMiaoPlayerState* SuanMiaoPlayerState = GetPlayerState<ASuanMiaoPlayerState>())
	{
		SuanMiaoPlayerState->GetAbilitySystemComponent()->InitAbilityActorInfo(SuanMiaoPlayerState, this);
		AbilitySystemComponent = SuanMiaoPlayerState->GetAbilitySystemComponent();
		AttributeSet = SuanMiaoPlayerState->GetAttributeSet();
	}
}

void ASuanMiaoCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	if (ASuanMiaoPlayerState* SuanMiaoPlayerState = GetPlayerState<ASuanMiaoPlayerState>())
	{
		SuanMiaoPlayerState->GetAbilitySystemComponent()->InitAbilityActorInfo(SuanMiaoPlayerState, this);
		AbilitySystemComponent = SuanMiaoPlayerState->GetAbilitySystemComponent();
		AttributeSet = SuanMiaoPlayerState->GetAttributeSet();
	}
}
