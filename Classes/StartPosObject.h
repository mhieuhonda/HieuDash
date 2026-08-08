
#ifndef STARTPOSOBJECT_H_
#define STARTPOSOBJECT_H_

#include <string>
#include <vector>

class StartPosObject : public cocos2d::CCNode {
public:
    virtual ~StartPosObject();

    void setSettings(LevelSettingsObject*);
    std::string getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void loadSettingsFromString(std::string);
    bool init();
    void create();

protected:
    std::string m_saveString;

};

#endif // STARTPOSOBJECT_H_
