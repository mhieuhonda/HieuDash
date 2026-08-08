
#ifndef PRICELABEL_H_
#define PRICELABEL_H_

#include "cocos2d.h"

class PriceLabel {
public:
    virtual ~PriceLabel();

    void setOpacity(float);
    void init(int);
    void create(int);
    void setColor(cocos2d::_ccColor3B);
    void setPrice(int);

protected:
    cocos2d::_ccColor3B m_color;

};

#endif // PRICELABEL_H_
