
#ifndef KEYBINDINGSMANAGER_H_
#define KEYBINDINGSMANAGER_H_

#include "cocos2d.h"

class KeybindingsManager : public GManager {
public:
    virtual ~KeybindingsManager();

    void dataLoaded(DS_Dictionary*);
    void firstSetup();
    KeybindingsManager* sharedState();
    void encodeDataTo(DS_Dictionary*);
    void commandForKey(cocos2d::enumKeyCodes, GJKeyGroup, bool, bool, bool);
    void keyForCommand(GJKeyCommand);
    void groupForCommand(GJKeyCommand);
    void commandForKeyMods(cocos2d::enumKeyCodes, GJKeyGroup);
    void commandForKeyNoMods(cocos2d::enumKeyCodes, GJKeyGroup);
    void commandToKeyForGroup(GJKeyGroup);
    void keyToCommandForGroup(GJKeyGroup);
    bool init();

};

#endif // KEYBINDINGSMANAGER_H_
