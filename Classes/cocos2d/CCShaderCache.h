// ============================================================
// CCShaderCache.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCSHADERCACHE_H_
#define COCOS2D_CCSHADERCACHE_H_

#include "cocos2d.h"

namespace cocos2d {

class CCShaderCache {
public:
    CCShaderCache();
    CCShaderCache();

    virtual ~CCShaderCache();
    virtual ~CCShaderCache();
    virtual ~CCShaderCache();

    void addProgram(cocos2d::CCGLProgram*, char const*);
    void programForKey(char const*);
    void loadDefaultShader(cocos2d::CCGLProgram*, int);
    void sharedShaderCache();
    void loadDefaultShaders();
    void reloadDefaultShaders();
    void purgeSharedShaderCache();
    void init();

};

} // namespace cocos2d

#endif // COCOS2D_CCSHADERCACHE_H_
