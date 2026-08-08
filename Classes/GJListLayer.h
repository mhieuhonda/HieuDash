
#ifndef GJLISTLAYER_H_
#define GJLISTLAYER_H_

#include "ListLayer.h"
#include "cocos2d.h"

class GJListLayer : public ListLayer {
public:
    virtual ~GJListLayer();

    void init(BoomListView*, char const*, cocos2d::_ccColor4B, float, float, int) override;
    void create(BoomListView*, char const*, cocos2d::_ccColor4B, float, float, int);

};

#endif // GJLISTLAYER_H_
