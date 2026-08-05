#ifndef HIEUDASH_LEVELBROWSERLAYER_H_
#define HIEUDASH_LEVELBROWSERLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class LevelBrowserLayer : public cocos2d::CCLayer {
public:
    LevelBrowserLayer();
    LevelBrowserLayer* create(GJSearchObject*);
    bool init(GJSearchObject*);
    bool isCorrect(char const*);
    void keyBackClicked();
    void loadLevelsFailed(char const*);
    void loadLevelsFinished(cocos2d::CCArray*, char const*);
    void loadPage(GJSearchObject*);
    void onBack();
    void onNextPage();
    void onPrevPage();
    cocos2d::CCScene* scene(GJSearchObject*);
    void setSearchObject(GJSearchObject*);
    void setupLevelBrowser(cocos2d::CCArray*);
    void setupPageInfo(std::string, char const*);
    void updateLevelsLabel();
    ~LevelBrowserLayer();
};

#endif // HIEUDASH_LEVELBROWSERLAYER_H_
