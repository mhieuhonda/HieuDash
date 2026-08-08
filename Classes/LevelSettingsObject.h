// ============================================================
// LevelSettingsObject.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef LEVELSETTINGSOBJECT_H_
#define LEVELSETTINGSOBJECT_H_

#include "cocos2d.h"
#include <string>

class LevelSettingsObject {
public:
    virtual ~LevelSettingsObject();
    virtual ~LevelSettingsObject();
    virtual ~LevelSettingsObject();

    void getSaveString();
    void objectFromDict(cocos2d::CCDictionary*);
    void objectFromString(std::string const&);
    void shouldUseYSection();
    void setupColorsFromLegacyMode(cocos2d::CCDictionary*);
    void init();
    void create();

};

#endif // LEVELSETTINGSOBJECT_H_
