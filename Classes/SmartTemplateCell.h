
#ifndef SMARTTEMPLATECELL_H_
#define SMARTTEMPLATECELL_H_

#include "cocos2d.h"

class SmartTemplateCell : public cocos2d::CCNode {
public:
    SmartTemplateCell(char const*, float, float);
    SmartTemplateCell(char const*, float, float);

    virtual ~SmartTemplateCell();

    void updateBGColor(int);
    void loadFromObject(GJSmartTemplate*);
    void draw();
    bool init();
    void onClick(cocos2d::CCObject*);

};

#endif // SMARTTEMPLATECELL_H_
