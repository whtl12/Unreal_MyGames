// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI_MESSASE.h"
#include "Engine.h"

/**
 * 
 */
DECLARE_LOG_CATEGORY_EXTERN(MyLog, Log, All);


class MYGAMES_API UIManager
{

public:

	typedef void(*UI_MESSAGE_FUNC)(void *);

public:
	UIManager();
	~UIManager();

	void Init();
	void ApplyUIMessage(MESSASE message);


private:
	UI_MESSAGE_FUNC m_UI_MESSAGE_FUNC[MAX_UI_MESSAGE];

	
};
