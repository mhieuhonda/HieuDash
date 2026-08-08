// ============================================================
// CCTextureCache.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCTEXTURECACHE_H_
#define COCOS2D_CCTEXTURECACHE_H_

#include "cocos2d.h"

namespace cocos2d {

class CCTextureCache {
public:
    CCTextureCache();
    CCTextureCache();

    virtual ~CCTextureCache();
    virtual ~CCTextureCache();
    virtual ~CCTextureCache();

    void addUIImage(cocos2d::CCImage*, char const*);
    void addETCImage(char const*);
    void addPVRImage(char const*);
    void description();
    void addImageAsync(char const*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), int, cocos2d::CCTexture2DPixelFormat);
    void reloadTexture(char const*);
    void removeTexture(cocos2d::CCTexture2D*);
    void textureForKey(char const*);
    void snapshotTextures();
    void reloadAllTextures();
    void removeAllTextures();
    void sharedTextureCache();
    void prepareAsyncLoading();
    void removeTextureForKey(char const*);
    void removeUnusedTextures();
    void addImageAsyncCallBack(float);
    void dumpCachedTextureInfo();
    void purgeSharedTextureCache();
    void addImage(char const*, bool);

};

} // namespace cocos2d

#endif // COCOS2D_CCTEXTURECACHE_H_
