
#ifndef GRAPHICSRELOADLAYER_H_
#define GRAPHICSRELOADLAYER_H_

#include "cocos2d.h"

class GraphicsReloadLayer {
public:
    virtual ~GraphicsReloadLayer();

    void performReload();
    void init(cocos2d::TextureQuality, cocos2d::CCSize, bool, bool, bool, bool);
    void scene(cocos2d::TextureQuality, cocos2d::CCSize, bool, bool, bool, bool);
    void create(cocos2d::TextureQuality, cocos2d::CCSize, bool, bool, bool, bool);

};

#endif // GRAPHICSRELOADLAYER_H_
