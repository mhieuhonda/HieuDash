
#ifndef EXTENDEDLAYER_H_
#define EXTENDEDLAYER_H_

#include "cocos2d.h"

class ExtendedLayer {
public:
    virtual ~ExtendedLayer();

    void setPosition(cocos2d::CCPoint const&);
    void init();
    void create();

protected:
    cocos2d::CCPoint m_position;

};

#endif // EXTENDEDLAYER_H_
