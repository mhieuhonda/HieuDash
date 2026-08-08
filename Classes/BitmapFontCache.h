
#ifndef BITMAPFONTCACHE_H_
#define BITMAPFONTCACHE_H_

class BitmapFontCache {
public:
    virtual ~BitmapFontCache();

    void sharedFontCache();
    void fontWithConfigFile(char const*, float);
    void purgeSharedFontCache();
    void init();

};

#endif // BITMAPFONTCACHE_H_
