// Fill out your copyright notice in the Description page of Project Settings.

#include "UIManager.h"


DEFINE_LOG_CATEGORY(MyLog);

UIManager::UIManager()
{
}

UIManager::~UIManager()
{
}


void UIManager::Init()
{
	m_UI_MESSAGE_FUNC[TEST_MESSAGE] = [](void*) {
		UE_LOG(MyLog,Log,TEXT("In"));
	};
}


void UIManager::ApplyUIMessage(MESSASE message)
{
	if ((int)message < (int)MAX_UI_MESSAGE)
	{
		//½ÇÇÛ
		m_UI_MESSAGE_FUNC[message];
	}
	else
	{

	}
}



