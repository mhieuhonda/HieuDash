// ============================================================
// TextAlertPopup.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef TEXTALERTPOPUP_H_
#define TEXTALERTPOPUP_H_

#include "cocos2d.h"
#include <string>

class TextAlertPopup {
public:
    virtual ~TextAlertPopup();
    virtual ~TextAlertPopup();
    virtual ~TextAlertPopup();

    void setLabelColor(cocos2d::_ccColor3B);
    void setAlertPosition(cocos2d::CCPoint, cocos2d::CCPoint);
    void init(std::string, float, float, int, std::string);
    void create(std::string, float, float, int, std::string);

};

#endif // TEXTALERTPOPUP_H_
