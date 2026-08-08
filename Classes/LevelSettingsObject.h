
#ifndef LEVELSETTINGSOBJECT_H_
#define LEVELSETTINGSOBJECT_H_

#include "cocos2d.h"
#include <string>

class LevelSettingsObject {
public:
    virtual ~LevelSettingsObject();

    void getSaveString();
    void objectFromDict(cocos2d::CCDictionary*);
    void objectFromString(std::string const&);
    void shouldUseYSection();
    void setupColorsFromLegacyMode(cocos2d::CCDictionary*);
    void init();
    void create();

protected:
    std::string m_saveString;

};

#endif // LEVELSETTINGSOBJECT_H_
