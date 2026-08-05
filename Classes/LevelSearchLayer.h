#ifndef _LEVELSEARCHLAYER_H_
#define _LEVELSEARCHLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class LevelSearchLayer {
public:
    LevelSearchLayer();
    checkDiff(int);
    checkTime(int);
    create();
    getDiffKey(int);
    getLevelLenKey();
    getSearchDiffKey();
    getTimeKey(int);
    init();
    keyBackClicked();
    onBack();
    onClose();
    onMostDownloaded();
    onMostLikes();
    onMostRecent();
    onSearch();
    onTrending();
    scene();
    textChanged(CCTextInputNode*);
    textInputClosed(CCTextInputNode*);
    textInputOpened(CCTextInputNode*);
    toggleDifficulty(cocos2d::CCNode*);
    toggleDifficultyNum(int, bool);
    toggleTime(cocos2d::CCNode*);
    toggleTimeNum(int, bool);
    updateSearchLabel(char const*);
    ~LevelSearchLayer();
};

#endif // _LEVELSEARCHLAYER_H_
