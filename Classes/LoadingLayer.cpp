#include "LoadingLayer.h"
#include "AppDelegate.h"
#include "MenuLayer.h"
#include "GameSoundManager.h"
#include "cocos2d.h"

USING_NS_CC;

// ============================================================================
//  v0.5 — Working LoadingLayer.
//  The original binary showed a RobTop splash + progress bar; v0.5 keeps
//  the public API but renders a simple "Hieu Dash" splash and transitions
//  into the main menu after ~1 second (long enough for the sprite-sheet
//  and audio preload in AppDelegate::applicationDidFinishLaunching to
//  finish).
// ============================================================================

LoadingLayer::LoadingLayer() {}

bool LoadingLayer::init() {
    if (!CCLayer::init()) return false;

    CCSize winSize = CCDirector::sharedDirector()->getWinSize();

    // Splash background — use the gradient texture shipped with the APK.
    CCSprite* bg = CCSprite::create("GJ_gradientBG.png");
    if (bg) {
        bg->setAnchorPoint(ccp(0.0f, 0.0f));
        bg->setPosition(ccp(0.0f, 0.0f));
        bg->setScaleX((winSize.width  + 10.0f) / bg->getTextureRect().size.width);
        bg->setScaleY((winSize.height + 10.0f) / bg->getTextureRect().size.height);
        bg->setColor(ccc3(0x28, 0x7D, 0xFF));
        addChild(bg, -2);
    }

    // Title.
    CCLabelBMFont* title = CCLabelBMFont::create("Hieu Dash", "bigFont.fnt");
    if (title) {
        title->setPosition(ccp(winSize.width / 2, winSize.height / 2 + 40.0f));
        title->setScale(1.5f);
        addChild(title);
    }

    // Loading string.
    CCLabelBMFont* loading = CCLabelBMFont::create("Loading...", "bigFont.fnt");
    if (loading) {
        loading->setScale(0.5f);
        loading->setPosition(ccp(winSize.width / 2, winSize.height / 2 - 30.0f));
        addChild(loading);
    }

    // Play the menu loop quietly while we load.
    GameSoundManager::sharedManager()->playBackgroundMusic("menuLoop.mp3", 0.0f, 1);

    // Schedule the transition into the main menu (1-second delay so the
    // splash is visible). Use CCDelayTime + CCCallFunc because loadingFinished
    // has a no-arg signature in the public header.
    CCDelayTime* delay = CCDelayTime::create(1.0f);
    CCCallFunc*   call  = CCCallFunc::create(this, callfunc_selector(LoadingLayer::loadingFinished));
    runAction(CCSequence::create(delay, call, nullptr));

    return true;
}

void LoadingLayer::loadingFinished() {
    // Hand off to the AppDelegate so it can update its scene pointer.
    AppDelegate* app = (AppDelegate*)CCApplication::sharedApplication();
    if (app) app->loadingIsFinished();
    else {
        CCScene* pScene = MenuLayer::scene();
        if (pScene) CCDirector::sharedDirector()->replaceScene(pScene);
    }
}

void LoadingLayer::loadAssets() {
    // Asset preload happens in AppDelegate — nothing to do here.
}

int LoadingLayer::getLoadingString() { return 0; }
void LoadingLayer::node() {}
void LoadingLayer::updateProgress(int) {}

CCScene* LoadingLayer::scene() {
    CCScene* scene = CCScene::create();
    if (!scene) return nullptr;
    LoadingLayer* layer = new LoadingLayer();
    if (layer && layer->init()) {
        layer->autorelease();
        scene->addChild(layer);
    } else {
        CC_SAFE_DELETE(layer);
    }
    return scene;
}

LoadingLayer::~LoadingLayer() {}
