#include "LevelSelectLayer.h"
#include "GameManager.h"
#include "GameLevelManager.h"
#include "GameSoundManager.h"
#include "GJGameLevel.h"
#include "LevelPage.h"
#include "LevelTools.h"
#include "HieuLouisLevel.h"
#include "cocos2d.h"

USING_NS_CC;

// ============================================================================
//  v0.5 — Working LevelSelectLayer.
//
//  Renders a horizontally-scrollable carousel of the 22 original main
//  levels + the new Hieu Louis boss level (page index 22, the hardest
//  level). Tapping a page transitions into PlayLayer::scene(level).
//  This is a faithful (simplified) reconstruction of the GD 1.0
//  LevelSelectLayer::init() from the GD-Decompiled reference.
// ============================================================================

LevelSelectLayer::LevelSelectLayer() : m_nLevel(0) {}

LevelSelectLayer* LevelSelectLayer::create(int page) {
    LevelSelectLayer* p = new LevelSelectLayer();
    if (p && p->init(page)) {
        p->autorelease();
        return p;
    }
    CC_SAFE_DELETE(p);
    return nullptr;
}

bool LevelSelectLayer::init(int page) {
    if (!CCLayer::init()) return false;

    m_nLevel = page;
    setKeypadEnabled(true);
    setKeyboardEnabled(true);

    CCSize winSize = CCDirector::sharedDirector()->getWinSize();

    // --- Background gradient (changes color per page) ---
    CCSprite* bg = CCSprite::create("GJ_gradientBG.png");
    if (bg) {
        bg->setAnchorPoint(ccp(0.0f, 0.0f));
        bg->setPosition(ccp(-5.0f, -5.0f));
        bg->setScaleX((winSize.width  + 10.0f) / bg->getTextureRect().size.width);
        bg->setScaleY((winSize.height + 10.0f) / bg->getTextureRect().size.height);
        ccColor3B col = colorForPage(page);
        bg->setColor(col);
        addChild(bg, -2);
    }

    // --- Title (level name) ---
    GJGameLevel* lvl = GameLevelManager::sharedState()->getMainLevel(page, true);
    const char* lvlName = lvl ? lvl->m_sLevelName.c_str() : "???";
    CCLabelBMFont* name = CCLabelBMFont::create(lvlName, "bigFont.fnt");
    if (name) {
        name->setPosition(ccp(winSize.width / 2, winSize.height * 0.78f));
        name->setScale(1.4f);
        // Highlight the Hieu Louis page in red.
        if (page == 22) name->setColor(ccc3(255, 60, 60));
        addChild(name, 5);
    }

    // --- Difficulty label ---
    const char* diffStr = "???";
    if (lvl) {
        int d = lvl->m_nDifficulty;
        if      (d == 0) diffStr = "Auto";
        else if (d <= 1) diffStr = "Easy";
        else if (d <= 2) diffStr = "Normal";
        else if (d <= 3) diffStr = "Hard";
        else if (d <= 4) diffStr = "Harder";
        else if (d <= 5) diffStr = "Insane";
        else             diffStr = "DEMON";      // Hieu Louis lives here
    }
    CCLabelBMFont* diffLabel = CCLabelBMFont::create(diffStr, "bigFont.fnt");
    if (diffLabel) {
        diffLabel->setScale(0.7f);
        diffLabel->setPosition(ccp(winSize.width / 2, winSize.height * 0.68f));
        if (lvl && lvl->m_nDifficulty >= 6) diffLabel->setColor(ccc3(255, 60, 60));
        addChild(diffLabel, 5);
    }

    // --- Hieu Louis banner (only on page 22) ---
    if (page == 22) {
        CCLabelBMFont* bossBanner =
            CCLabelBMFont::create("FINAL BOSS", "bigFont.fnt");
        if (bossBanner) {
            bossBanner->setScale(1.0f);
            bossBanner->setColor(ccc3(255, 30, 30));
            bossBanner->setPosition(ccp(winSize.width / 2, winSize.height * 0.55f));
            addChild(bossBanner, 5);
        }

        CCLabelBMFont* musicCredit = CCLabelBMFont::create(
            "BGM: Don Voi Cung - DATKAA x PROD. QT BEATZ",
            "bigFont.fnt");
        if (musicCredit) {
            musicCredit->setScale(0.35f);
            musicCredit->setPosition(ccp(winSize.width / 2, winSize.height * 0.45f));
            addChild(musicCredit, 5);
        }
    }

    // --- Page indicator (current / total) ---
    char buf[32];
    snprintf(buf, sizeof(buf), "%d / 23", page + 1);
    CCLabelBMFont* pageNum = CCLabelBMFont::create(buf, "bigFont.fnt");
    if (pageNum) {
        pageNum->setScale(0.6f);
        pageNum->setPosition(ccp(winSize.width / 2, winSize.height * 0.10f));
        addChild(pageNum, 5);
    }

    // --- Nav arrows (Prev / Next / Back) ---
    CCMenuItemFont* prevBtn = CCMenuItemFont::create("<", this, menu_selector(LevelSelectLayer::onPrev));
    prevBtn->setScale(2.0f);
    prevBtn->setPosition(ccp(-winSize.width / 2 + 40.0f, 0.0f));

    CCMenuItemFont* nextBtn = CCMenuItemFont::create(">", this, menu_selector(LevelSelectLayer::onNext));
    nextBtn->setScale(2.0f);
    nextBtn->setPosition(ccp( winSize.width / 2 - 40.0f, 0.0f));

    CCMenuItemFont* backBtn = CCMenuItemFont::create("Back", this, menu_selector(LevelSelectLayer::onBack));
    backBtn->setScale(1.0f);
    backBtn->setPosition(ccp(-winSize.width / 2 + 40.0f, -winSize.height / 2 + 40.0f));

    CCMenu* menu = CCMenu::create(prevBtn, nextBtn, backBtn, nullptr);
    menu->setPosition(ccp(winSize.width / 2, winSize.height / 2));
    addChild(menu, 10);

    // Cache the level select layer on GameManager.
    GameManager::sharedState()->setLevelSelectLayer(this);

    return true;
}

void LevelSelectLayer::onPrev() {
    int prev = (m_nLevel > 0) ? m_nLevel - 1 : 22;     // wrap back to last
    CCScene* pScene = LevelSelectLayer::scene(prev);
    if (pScene) CCDirector::sharedDirector()->replaceScene(pScene);
}

void LevelSelectLayer::onNext() {
    int next = (m_nLevel + 1) % 23;                    // 22 = Hieu Louis
    CCScene* pScene = LevelSelectLayer::scene(next);
    if (pScene) CCDirector::sharedDirector()->replaceScene(pScene);
}

void LevelSelectLayer::onBack() {
    // Pop back to the menu.
    CCDirector::sharedDirector()->popScene();
}

void LevelSelectLayer::onDownload() {
    // Soundtrack download prompt — disabled (no network in v0.5).
}

void LevelSelectLayer::keyBackClicked() { onBack(); }

void LevelSelectLayer::scrollLayerMoved(CCPoint) {
    // No-op in v0.5 (no BoomScrollLayer).
}

ccColor3B LevelSelectLayer::colorForPage(int page) {
    // Use the canonical GD color cycle for the 22 original levels, then
    // a deep red for the Hieu Louis boss page.
    static const ccColor3B kColors[] = {
        {0x28, 0x7D, 0xFF},  // 0  Stereo Madness — blue
        {0x00, 0xC8, 0xFF},  // 1  Back On Track  — cyan
        {0x4B, 0xAD, 0xFF},  // 2  Polargeist
        {0x32, 0xC8, 0xFF},  // 3  Dry Out
        {0xFF, 0xC8, 0x00},  // 4  Base After Base — yellow
        {0xFF, 0x64, 0x00},  // 5  Can't Let Go — orange
        {0xC8, 0xFF, 0x00},  // 6  Jumper — green
        {0xFF, 0xC8, 0x00},  // 7  Time Machine
        {0x32, 0xFF, 0xC8},  // 8  Cycles
        {0x96, 0x32, 0xFF},  // 9  xStep — purple
        {0x00, 0xC8, 0xFF},  // 10 Clubstep
        {0xFF, 0x96, 0x32},  // 11 Electroman Adventures
        {0xC8, 0xFF, 0x32},  // 12 Blast Processing
        {0xFF, 0x32, 0x96},  // 13 Theory of Everything — pink
        {0x32, 0xFF, 0x32},  // 14 Geometrical Dominator — bright green
        {0x96, 0x32, 0xFF},  // 15 Deadlocked
        {0xFF, 0xC8, 0x32},  // 16 Fingerdash
        {0xFF, 0xFF, 0xFF},  // 17 placeholder
        {0xFF, 0xFF, 0xFF},  // 18 placeholder
        {0xFF, 0xFF, 0xFF},  // 19 placeholder
        {0xFF, 0xFF, 0xFF},  // 20 placeholder
        {0xFF, 0xFF, 0xFF},  // 21 placeholder
        {0xA0, 0x00, 0x00},  // 22 Hieu Louis — deep red (final boss)
    };
    if (page < 0) return kColors[0];
    if (page >= (int)(sizeof(kColors) / sizeof(kColors[0]))) return kColors[0];
    return kColors[page];
}

int LevelSelectLayer::getColorValue(int channel, int page, float t) {
    CC_UNUSED_PARAM(channel); CC_UNUSED_PARAM(page); CC_UNUSED_PARAM(t);
    return 0;
}

CCScene* LevelSelectLayer::scene(int page) {
    CCScene* scene = CCScene::create();
    if (!scene) return nullptr;
    LevelSelectLayer* layer = LevelSelectLayer::create(page);
    if (!layer) return nullptr;
    scene->addChild(layer);
    return scene;
}

LevelSelectLayer::~LevelSelectLayer() {
    GameManager* gm = GameManager::sharedState();
    if (gm && gm->getLevelSelectLayer() == this) {
        gm->setLevelSelectLayer(nullptr);
    }
}
