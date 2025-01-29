// Copyright Yao Zhoubo


#include "Character/SuanMiaoCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

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
}

void ASuanMiaoCharacter::OnRep_PlayerState()
{
}
