//
//  SceneManager.cpp
//  studioDemo
//
//  Created by cocos2d on 13-9-23.
//
//

#include "SceneManager.h"

#include "MenuLayer.h"
#include "HelloWorldScene.h"

SceneManager::SceneManager()
{
	curIdx = -1;
	curScene = NULL;
	
	for (int i=0; i<SCENE_MAX; i++) {
		scenes[i] = NULL;
	}
}

SceneManager::~SceneManager()
{
}

static SceneManager* st_SceneManager = NULL;
SceneManager* SceneManager::getInstance()
{
	if (st_SceneManager == NULL) {
		st_SceneManager = new SceneManager();
		st_SceneManager->init();
	}
	
	return st_SceneManager;
}

void SceneManager::init()
{
	scenes[SC_MENU] = MenuLayer::create();
	scenes[SC_PLAY] = HelloWorld::create();
	
	CCScene* scene = CCScene::create();
	
	for (int i=0; i<SCENE_MAX; i++) {
		if (scenes[i] != NULL) {
			scene->addChild(scenes[i]);
			scenes[i]->setVisible(false);
		}
	}
	
	CCDirector::sharedDirector()->runWithScene(scene);
}

void SceneManager::selectScene(int idx)
{
	if (idx < 0 || idx > SCENE_MAX) {
		return;
	}
	
	if (curIdx >= 0 && curIdx < SCENE_MAX) {
		if( scenes[curIdx] != NULL){
			scenes[curIdx]->setVisible(false);
		}
	}
	
	if (scenes[idx] != NULL) {
		scenes[idx]->setVisible(true);
		curIdx = idx;
	}
}


