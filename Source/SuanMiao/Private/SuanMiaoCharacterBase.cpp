// Copyright Yao Zhoubo


#include "SuanMiaoCharacterBase.h"

// Sets default values
ASuanMiaoCharacterBase::ASuanMiaoCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASuanMiaoCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASuanMiaoCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASuanMiaoCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

