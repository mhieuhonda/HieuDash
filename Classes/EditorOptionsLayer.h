
#ifndef EDITOROPTIONSLAYER_H_
#define EDITOROPTIONSLAYER_H_

#include "cocos2d.h"

class EditorOptionsLayer : public cocos2d::CCLayer {
public:
    virtual ~EditorOptionsLayer();

    void onButtonRows(cocos2d::CCObject*);
    void setupOptions();
    void onButtonsPerRow(cocos2d::CCObject*);
    bool init();
    void create();
    void onClose(cocos2d::CCObject*);

};

#endif // EDITOROPTIONSLAYER_H_
