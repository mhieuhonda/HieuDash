
#ifndef SELECTFONTLAYER_H_
#define SELECTFONTLAYER_H_

#include "cocos2d.h"

class SelectFontLayer {
public:
    virtual ~SelectFontLayer();

    void onChangeFont(cocos2d::CCObject*);
    void keyBackClicked();
    void updateFontLabel();
    void init(LevelEditorLayer*);
    void create(LevelEditorLayer*);
    void onClose(cocos2d::CCObject*);

};

#endif // SELECTFONTLAYER_H_
