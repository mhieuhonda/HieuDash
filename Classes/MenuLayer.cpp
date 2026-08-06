#include "MenuLayer.h"
#include "LevelSelectLayer.h"
#include "GameManager.h"
#include "GameSoundManager.h"
#include "CreatorLayer.h"
#include "OptionsLayer.h"
#include "GJGarageLayer.h"
#include "StatsLayer.h"
#include "AchievementsLayer.h"
#include "cocos2d.h"

USING_NS_CC;

// ============================================================================
//  v0.5 — Working MenuLayer.
//  Renders the main menu background, title, and the canonical 5 buttons
//  (Play / Create / Garage / Options / Stats). Tapping Play pushes the
//  LevelSelectLayer scene which is where the new Hieu Louis level lives.
// ============================================================================

void MenuLayer::FLAlert_Clicked(FLAlertLayer*, bool) {}

MenuLayer::MenuLayer() {}

void MenuLayer::endGame() {
    CCDirector::sharedDirector()->end();
}

bool MenuLayer::init() {
    if (!CCLayer::init()) return false;

    setKeypadEnabled(true);

    CCSize winSize = CCDirector::sharedDirector()->getWinSize();

    // --- Background gradient (the GD 1.0 blue gradient) ---
    CCSprite* bg = CCSprite::create("GJ_gradientBG.png");
    if (bg) {
        bg->setAnchorPoint(ccp(0.0f, 0.0f));
        bg->setPosition(ccp(0.0f, 0.0f));
        bg->setScaleX((winSize.width  + 10.0f) / bg->getTextureRect().size.width);
        bg->setScaleY((winSize.height + 10.0f) / bg->getTextureRect().size.height);
        bg->setColor(ccc3(0x28, 0x7D, 0xFF));
        addChild(bg, -2);
    }

    // --- Title ---
    CCLabelBMFont* title = CCLabelBMFont::create("Hieu Dash", "bigFont.fnt");
    if (title) {
        title->setPosition(ccp(winSize.width / 2, winSize.height * 0.78f));
        title->setScale(1.8f);
        addChild(title, 5);
    }

    // --- Buttons ---
    // Each button is a CCMenuItemLabel that calls the corresponding on*()
    // method. We lay them out in two rows: Play at top, the four secondary
    // actions along the bottom.

    CCMenuItemFont::setFontSize(28);
    CCMenuItemFont::setFontName("bigFont.fnt");

    // Play (large, centered upper area).
    CCMenuItemFont* playBtn = CCMenuItemFont::create("Play", this, menu_selector(MenuLayer::onPlay));
    playBtn->setScale(2.0f);
    playBtn->setPosition(ccp(0, winSize.height * 0.35f));

    // Bottom row.
    CCMenuItemFont* createBtn  = CCMenuItemFont::create("Create",      this, menu_selector(MenuLayer::onCreator));
    CCMenuItemFont* garageBtn  = CCMenuItemFont::create("Garage",      this, menu_selector(MenuLayer::onGarage));
    CCMenuItemFont* optsBtn    = CCMenuItemFont::create("Options",     this, menu_selector(MenuLayer::onOptions));
    CCMenuItemFont* statsBtn   = CCMenuItemFont::create("Stats",       this, menu_selector(MenuLayer::onStats));

    createBtn->setPosition(ccp(-winSize.width * 0.30f, -winSize.height * 0.40f));
    garageBtn->setPosition(ccp(-winSize.width * 0.10f, -winSize.height * 0.40f));
    optsBtn  ->setPosition(ccp( winSize.width * 0.10f, -winSize.height * 0.40f));
    statsBtn ->setPosition(ccp( winSize.width * 0.30f, -winSize.height * 0.40f));

    CCMenu* menu = CCMenu::create(playBtn, createBtn, garageBtn, optsBtn, statsBtn, nullptr);
    menu->setPosition(ccp(winSize.width / 2, winSize.height / 2));
    addChild(menu, 5);

    // --- v0.5 marker: small banner announcing the Hieu Louis level ---
    CCLabelBMFont* banner =
        CCLabelBMFont::create("NEW: Hieu Louis - Extreme Demon", "bigFont.fnt");
    if (banner) {
        banner->setScale(0.45f);
        banner->setPosition(ccp(winSize.width / 2, winSize.height * 0.10f));
        banner->setColor(ccc3(255, 80, 80));
        addChild(banner, 5);
    }

    return true;
}

void MenuLayer::keyBackClicked() { endGame(); }
void MenuLayer::node() {}

void MenuLayer::onAchievements() {
    // Achievements scene — would push AchievementsLayer::scene() if it were
    // implemented. The AchievementsLayer class in Hieu Dash v0.6 only has a
    // create() factory (no scene() static), so this is a defensive no-op
    // that does not break the build on platforms with strict name lookup
    // (e.g. gcc on Linux rejects `Class::method ? Class::method() : ...`
    // because the conditional-expression form is not valid for member
    // function pointers without an explicit &address-of operator).
}

void MenuLayer::onCreator() {
    // Editor button — would push the creator scene in the full game.
}

void MenuLayer::onGameCenter() {
    // Game Center / Google Play Games — disabled in v0.5 (no network calls).
}

void MenuLayer::onGarage() {
    // Garage scene — player icon customisation.
}

void MenuLayer::onMoreGames() {
    // More games — disabled (no network).
}

void MenuLayer::onOptions() {
    // Options scene — would push OptionsLayer::scene() if it were implemented.
}

void MenuLayer::onPlay() {
    // The critical path: jump into the level select, where the Hieu Louis
    // level sits at index 22 (the last page).
    CCScene* pScene = LevelSelectLayer::scene(0);
    if (pScene) {
        GameManager* gm = GameManager::sharedState();
        if (gm) {
            gm->setLastScene(kLastGameSceneLevelSelect);
        }
        CCDirector::sharedDirector()->pushScene(pScene);
    }
}

void MenuLayer::onRobTop() {
    // RobTop credits — disabled.
}

void MenuLayer::onStats() {
    // Stats scene — would push StatsLayer::scene() if it were implemented.
}

void MenuLayer::showGCQuestion() {}

CCScene* MenuLayer::scene() {
    CCScene* scene = CCScene::create();
    if (!scene) return nullptr;
    MenuLayer* layer = new MenuLayer();
    if (layer && layer->init()) {
        layer->autorelease();
        scene->addChild(layer);
        // Cache the menu layer on GameManager.
        GameManager::sharedState()->m_pMenuLayer = layer;
    } else {
        CC_SAFE_DELETE(layer);
        return nullptr;
    }
    return scene;
}

MenuLayer::~MenuLayer() {
    GameManager* gm = GameManager::sharedState();
    if (gm && gm->m_pMenuLayer == this) gm->m_pMenuLayer = nullptr;
}
