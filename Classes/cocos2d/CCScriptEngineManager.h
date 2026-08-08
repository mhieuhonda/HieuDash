// ============================================================
// CCScriptEngineManager.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCSCRIPTENGINEMANAGER_H_
#define COCOS2D_CCSCRIPTENGINEMANAGER_H_

#include "cocos2d.h"

namespace cocos2d {

class CCScriptEngineManager {
public:
    virtual ~CCScriptEngineManager();
    virtual ~CCScriptEngineManager();

    void sharedManager();
    void setScriptEngine(cocos2d::CCScriptEngineProtocol*);
    void purgeSharedManager();
    void removeScriptEngine();

};

} // namespace cocos2d

#endif // COCOS2D_CCSCRIPTENGINEMANAGER_H_
