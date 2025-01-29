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
	// ��Pawn��ռ��ʱ���á����ڷ������ϵ��ã��򵥶����ã���
	virtual void PossessedBy(AController* NewController) override;

	// һ���ص�����������������PlayState�����޸�ʱ�����Զ������ͻ����еĸú��������ڴӷ�������ͻ���ͬ����Ϣ
	virtual void OnRep_PlayerState() override;
	//~ End APawn Interface.
};
