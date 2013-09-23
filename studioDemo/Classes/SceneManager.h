//
//  SceneManager.h
//  studioDemo
//
//  Created by cocos2d on 13-9-23.
//
//

#ifndef __studioDemo__SceneManager__
#define __studioDemo__SceneManager__

#include <iostream>
#include "cocos2d.h"
#include "UIConst.h"

USING_NS_CC;

class SceneManager {
private:
    SceneManager();
	CCLayer* scenes[SCENE_MAX];
	int curIdx;
	CCScene* curScene;
    
public:
    ~SceneManager();
	
	static SceneManager* getInstance();
	void init();
	void selectScene(int idx);
};

#endif /* defined(__studioDemo__SceneManager__) */
