// ============================================================
// SmartTemplateCell.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef SMARTTEMPLATECELL_H_
#define SMARTTEMPLATECELL_H_

#include "cocos2d.h"

class SmartTemplateCell {
public:
    SmartTemplateCell(char const*, float, float);
    SmartTemplateCell(char const*, float, float);

    virtual ~SmartTemplateCell();
    virtual ~SmartTemplateCell();
    virtual ~SmartTemplateCell();

    void updateBGColor(int);
    void loadFromObject(GJSmartTemplate*);
    void draw();
    void init();
    void onClick(cocos2d::CCObject*);

};

#endif // SMARTTEMPLATECELL_H_
