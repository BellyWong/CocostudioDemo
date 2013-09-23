//
//  MenuScene.cpp
//  studioDemo
//
//  Created by cocos2d on 13-9-23.
//
//

#include "MenuLayer.h"
#include "SceneManager.h"

bool MenuLayer::init()
{
    CCSprite* pSprite = CCSprite::create("HelloWorld.png");
	pSprite->setPosition(ccp(200, 100));
	addChild(pSprite);
	
	CCMenuItemImage *pCloseItem = CCMenuItemImage::create(
														  "CloseNormal.png",
														  "CloseSelected.png",
														  this,
														  menu_selector(MenuLayer::onClick));
    
	pCloseItem->setPosition(ccp(50, 50));
	CCMenu* pMenu = CCMenu::create(pCloseItem, NULL);
    pMenu->setPosition(CCPointZero);
    this->addChild(pMenu, 1);
    
    return true;
}

void MenuLayer::onClick(CCNode *node)
{
	CCLog("to hello");
	SceneManager::getInstance()->selectScene(SC_PLAY);
}

