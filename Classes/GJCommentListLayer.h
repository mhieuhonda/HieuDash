
#ifndef GJCOMMENTLISTLAYER_H_
#define GJCOMMENTLISTLAYER_H_

#include "ListLayer.h"
#include "cocos2d.h"

class GJCommentListLayer : public ListLayer {
public:
    virtual ~GJCommentListLayer();

    void init(BoomListView*, char const*, cocos2d::_ccColor4B, float, float, bool) override;
    void create(BoomListView*, char const*, cocos2d::_ccColor4B, float, float, bool);

};

#endif // GJCOMMENTLISTLAYER_H_
