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
	// 当Pawn被占有时调用。仅在服务器上调用（或单独调用）。
	virtual void PossessedBy(AController* NewController) override;

	// 一个回调函数，当服务器中PlayState发生修改时，会自动触发客户端中的该函数。用于从服务器向客户端同步信息
	virtual void OnRep_PlayerState() override;
	//~ End APawn Interface.
};
