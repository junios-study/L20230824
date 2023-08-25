// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "GameFramework/Character.h"
#include "MyPlayerController.h"

AMyGameModeBase::AMyGameModeBase()
{
	DefaultPawnClass = ACharacter::StaticClass();
	PlayerControllerClass = AMyPlayerController::StaticClass(); //CDO 의 객체, 용도 클래스 이름 기록
}
