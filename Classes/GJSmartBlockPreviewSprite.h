
#ifndef GJSMARTBLOCKPREVIEWSPRITE_H_
#define GJSMARTBLOCKPREVIEWSPRITE_H_

class GJSmartBlockPreviewSprite : public cocos2d::CCSprite {
public:
    virtual ~GJSmartBlockPreviewSprite();

    bool init();
    void visit();
    void create();

};

#endif // GJSMARTBLOCKPREVIEWSPRITE_H_
