#ifndef HIEUDASH_LEVELSEARCHLAYER_H_
#define HIEUDASH_LEVELSEARCHLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class LevelSearchLayer : public cocos2d::CCLayer {
public:
    LevelSearchLayer();
    void checkDiff(int);
    void checkTime(int);
    LevelSearchLayer* create();
    int getDiffKey(int);
    int getLevelLenKey();
    int getSearchDiffKey();
    int getTimeKey(int);
    bool init();
    void keyBackClicked();
    void onBack();
    void onClose();
    void onMostDownloaded();
    void onMostLikes();
    void onMostRecent();
    void onSearch();
    void onTrending();
    static cocos2d::CCScene* scene();
    void textChanged(CCTextInputNode*);
    void textInputClosed(CCTextInputNode*);
    void textInputOpened(CCTextInputNode*);
    void toggleDifficulty(cocos2d::CCNode*);
    void toggleDifficultyNum(int, bool);
    void toggleTime(cocos2d::CCNode*);
    void toggleTimeNum(int, bool);
    void updateSearchLabel(char const*);
    ~LevelSearchLayer();
};

#endif // HIEUDASH_LEVELSEARCHLAYER_H_
