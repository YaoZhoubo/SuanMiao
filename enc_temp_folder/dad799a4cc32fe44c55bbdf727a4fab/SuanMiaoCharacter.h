// Copyright Yao Zhoubo

#pragma once

#include "CoreMinimal.h"
#include "Character/SuanMiaoCharacterBase.h"
#include "SuanMiaoCharacter.generated.h"

/**
 * 
 */
UCLASS()
class SUANMIAO_API ASuanMiaoCharacter : public ASuanMiaoCharacterBase
{
	GENERATED_BODY()

public:
	ASuanMiaoCharacter();


	//~ Begin APawn Interface.
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;
	//~ End APawn Interface.
};
