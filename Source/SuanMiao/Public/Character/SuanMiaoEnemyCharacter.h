// Copyright Yao Zhoubo

#pragma once

#include "CoreMinimal.h"
#include "Character/SuanMiaoCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "SuanMiaoEnemyCharacter.generated.h"

/**
 * 
 */
UCLASS()
class SUANMIAO_API ASuanMiaoEnemyCharacter : public ASuanMiaoCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	ASuanMiaoEnemyCharacter();
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
};
