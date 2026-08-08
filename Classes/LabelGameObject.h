// ============================================================
// LabelGameObject.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef LABELGAMEOBJECT_H_
#define LABELGAMEOBJECT_H_

#include "cocos2d.h"
#include <string>
#include <vector>

class LabelGameObject {
public:
    virtual ~LabelGameObject();
    virtual ~LabelGameObject();
    virtual ~LabelGameObject();

    void setOpacity(unsigned char);
    void createLabel(std::string);
    void removeLabel();
    void resetObject();
    void updateLabel(std::string);
    void updateLabel(float);
    void getSaveString(GJBaseGameLayer*);
    void getTextKerning();
    void setObjectColor(cocos2d::_ccColor3B const&);
    void queueUpdateLabel(std::string);
    void unlockLabelColor();
    void updateLabelAlign(int);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void updateTextKerning(int);
    void setupCustomSprites(std::string);
    void updateLabelIfDirty();
    void updatePreviewLabel();
    void addMainSpriteToParent(bool);
    void init();
    void create();

protected:
    cocos2d::_ccColor3B m_objectColor;
    std::string m_saveString;

};

#endif // LABELGAMEOBJECT_H_
