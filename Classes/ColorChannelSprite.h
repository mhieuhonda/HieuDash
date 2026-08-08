
#ifndef COLORCHANNELSPRITE_H_
#define COLORCHANNELSPRITE_H_

class ColorChannelSprite : public cocos2d::CCSprite {
public:
    virtual ~ColorChannelSprite();

    void updateValues(ColorAction*);
    void updateOpacity(float);
    void updateBlending(bool);
    void updateCopyLabel(int, bool);
    bool init();
    void create();

};

#endif // COLORCHANNELSPRITE_H_
