
#ifndef BITMAPFONTCACHE_H_
#define BITMAPFONTCACHE_H_

class BitmapFontCache : public cocos2d::CCNode {
public:
    virtual ~BitmapFontCache();

    void sharedFontCache();
    void fontWithConfigFile(char const*, float);
    void purgeSharedFontCache();
    bool init();

};

#endif // BITMAPFONTCACHE_H_
