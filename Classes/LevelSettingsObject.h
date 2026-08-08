
#ifndef LEVELSETTINGSOBJECT_H_
#define LEVELSETTINGSOBJECT_H_

#include "cocos2d.h"
#include <string>

class LevelSettingsObject : public cocos2d::CCNode {
public:
    virtual ~LevelSettingsObject();

    std::string getSaveString();
    void objectFromDict(cocos2d::CCDictionary*);
    void objectFromString(std::string const&);
    bool shouldUseYSection();
    void setupColorsFromLegacyMode(cocos2d::CCDictionary*);
    bool init();
    void create();

protected:
    std::string m_saveString;

};

#endif // LEVELSETTINGSOBJECT_H_
