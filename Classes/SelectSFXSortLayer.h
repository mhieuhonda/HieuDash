
#ifndef SELECTSFXSORTLAYER_H_
#define SELECTSFXSORTLAYER_H_

#include "cocos2d.h"

class SelectSFXSortLayer {
public:
    virtual ~SelectSFXSortLayer();

    void keyBackClicked();
    void init(AudioSortType);
    void create(AudioSortType);
    void onClose(cocos2d::CCObject*);
    void onSelect(cocos2d::CCObject*);

};

#endif // SELECTSFXSORTLAYER_H_
