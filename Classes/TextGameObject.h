
#ifndef TEXTGAMEOBJECT_H_
#define TEXTGAMEOBJECT_H_

#include "cocos2d.h"
#include <string>
#include <vector>

class TextGameObject {
public:
    virtual ~TextGameObject();

    std::string getSaveString(GJBaseGameLayer*);
    void getTextKerning();
    void updateTextObject(std::string, bool);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void updateTextKerning(int);
    void init(cocos2d::CCTexture2D*);
    void create(cocos2d::CCTexture2D*);

protected:
    std::string m_saveString;

};

#endif // TEXTGAMEOBJECT_H_
