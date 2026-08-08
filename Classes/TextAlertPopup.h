
#ifndef TEXTALERTPOPUP_H_
#define TEXTALERTPOPUP_H_

#include "cocos2d.h"
#include <string>

class TextAlertPopup {
public:
    virtual ~TextAlertPopup();

    void setLabelColor(cocos2d::_ccColor3B);
    void setAlertPosition(cocos2d::CCPoint, cocos2d::CCPoint);
    void init(std::string, float, float, int, std::string);
    void create(std::string, float, float, int, std::string);

protected:
    cocos2d::CCPoint m_alertPosition;
    cocos2d::_ccColor3B m_labelColor;

};

#endif // TEXTALERTPOPUP_H_
