#ifndef _LEVELBROWSERLAYER_H_
#define _LEVELBROWSERLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class LevelBrowserLayer {
public:
    LevelBrowserLayer();
    create(GJSearchObject*);
    init(GJSearchObject*);
    isCorrect(char const*);
    keyBackClicked();
    loadLevelsFailed(char const*);
    loadLevelsFinished(cocos2d::CCArray*, char const*);
    loadPage(GJSearchObject*);
    onBack();
    onNextPage();
    onPrevPage();
    scene(GJSearchObject*);
    setSearchObject(GJSearchObject*);
    setupLevelBrowser(cocos2d::CCArray*);
    setupPageInfo(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, char const*);
    updateLevelsLabel();
    ~LevelBrowserLayer();
};

#endif // _LEVELBROWSERLAYER_H_
