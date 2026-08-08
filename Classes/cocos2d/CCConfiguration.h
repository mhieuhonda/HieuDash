// ============================================================
// CCConfiguration.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCCONFIGURATION_H_
#define COCOS2D_CCCONFIGURATION_H_

#include "cocos2d.h"
#include <string>

namespace cocos2d {

class CCConfiguration {
public:
    CCConfiguration();
    CCConfiguration();

    virtual ~CCConfiguration();
    virtual ~CCConfiguration();
    virtual ~CCConfiguration();

    void gatherGPUInfo();
    void loadConfigFile(char const*);
    void purgeConfiguration();
    void sharedConfiguration();
    void init();
    void setObject(char const*, cocos2d::CCObject*);
    void getCString(char const*, char const*)) const;
    void supportsNPOT()) const;
    void supportsPVRTC()) const;
    void supportsBGRA8888()) const;
    void getMaxTextureSize()) const;
    void getMaxTextureUnits()) const;
    void checkForGLExtension(std::string const&)) const;
    void supportsShareableVAO()) const;
    void getMaxModelviewStackDepth()) const;
    void supportsDiscardFramebuffer()) const;
    void getBool(char const*, bool)) const;
    void dumpInfo()) const;
    void getNumber(char const*, double)) const;
    void getObject(char const*)) const;

};

} // namespace cocos2d

#endif // COCOS2D_CCCONFIGURATION_H_
