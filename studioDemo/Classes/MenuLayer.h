//
//  MenuScene.h
//  studioDemo
//
//  Created by cocos2d on 13-9-23.
//
//

#ifndef __studioDemo__MenuScene__
#define __studioDemo__MenuScene__

#include <iostream>
#include "cocos2d.h"

USING_NS_CC;

class MenuLayer : public CCLayer{
private:
    
public:
    CREATE_FUNC(MenuLayer);
    
    bool init();
	void onClick(CCNode* node);
};

#endif /* defined(__studioDemo__MenuScene__) */
