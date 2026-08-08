// ============================================================
// CCBMFontConfiguration.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCBMFONTCONFIGURATION_H_
#define COCOS2D_CCBMFONTCONFIGURATION_H_

#include "cocos2d.h"
#include <string>

namespace cocos2d {

class CCBMFontConfiguration {
public:
    CCBMFontConfiguration();
    CCBMFontConfiguration();

    virtual ~CCBMFontConfiguration();
    virtual ~CCBMFontConfiguration();
    virtual ~CCBMFontConfiguration();

    void description();
    void initWithFNTfile(char const*);
    void parseConfigFile(char const*);
    void parseKerningEntry(std::string);
    void parseImageFileName(std::string, char const*);
    void parseInfoArguments(std::string);
    void parseCommonArguments(std::string);
    void purgeFontDefDictionary();
    void purgeKerningDictionary();
    void parseCharacterDefinition(std::string, cocos2d::_BMFontDef*);
    void create(char const*);
    void getCharacterSet()) const;

};

} // namespace cocos2d

#endif // COCOS2D_CCBMFONTCONFIGURATION_H_
