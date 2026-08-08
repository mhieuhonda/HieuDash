
#ifndef CCCONTENTLAYER_H_
#define CCCONTENTLAYER_H_

#include "cocos2d.h"

class CCContentLayer {
public:
    virtual ~CCContentLayer();

    void setPosition(cocos2d::CCPoint const&);
    void create(cocos2d::_ccColor4B const&, float, float);

protected:
    cocos2d::CCPoint m_position;

};

#endif // CCCONTENTLAYER_H_
