#include "HelloWorldScene.h"
#include "SimpleAudioEngine.h"

using namespace cocos2d;
using namespace CocosDenshion;

CCScene* HelloWorld::scene()
{
    // 'scene' is an autorelease object
    CCScene *scene = CCScene::create();
    
    // 'layer' is an autorelease object
    HelloWorld *layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !CCLayer::init() )
    {
        return false;
    }

//    _batchNode = CCSpriteBatchNode::batchNodeWithFile("Sprites.pvr.ccz");
    _batchNode = CCSpriteBatchNode::create("Sprites.pvr.ccz");
    
    this->addChild(_batchNode); 
    
//    CCSpriteFrameCache::sharedSpriteFrameCache()->addSpriteFramesWithFile("Sprites.plist"); 
    
    _ship = CCSprite::create("SpaceFlier_sm_1.png"); 
    
    CCSize winSize = CCDirector::sharedDirector()->getWinSize(); 
    
    _ship->setPosition(ccp(winSize.width * 0.1, winSize.height * 0.5)); 
    
    _batchNode->addChild(_ship, 1); 
//    this->addChild(_ship,1);
    
    return true; 
}

void HelloWorld::menuCloseCallback(CCObject* pSender)
{
    CCDirector::sharedDirector()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
