#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "EventHandlers.h"

class HelloWorld : public cocos2d::CCLayer , public cocos2d::purchase::IEventHandler
{
public:
    HelloWorld();
    virtual ~HelloWorld();
    
    // Method 'init' in cocos2d-x returns bool, instead of 'id' in cocos2d-iphone (an object pointer)
    virtual bool init();

    // there's no 'id' in cpp, so we recommend to return the class instance pointer
    static cocos2d::CCScene* scene();
    
    // a selector callback
    void menuCloseCallback(CCObject* pSender);

    // preprocessor macro for "static create()" constructor ( node() deprecated )
    CREATE_FUNC(HelloWorld);
    virtual void successPurchase(cocos2d::purchase::PurchaseSuccessResult& purchaseResult);
    virtual void failedPurchase(cocos2d::purchase::PurchaseFailedResult& purchaseResult);
    
};

#endif // __HELLOWORLD_SCENE_H__
