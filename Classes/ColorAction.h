
#ifndef COLORACTION_H_
#define COLORACTION_H_

#include "cocos2d.h"
#include <string>

class ColorAction : public cocos2d::CCObject {
public:
    virtual ~ColorAction();

    void resetAction();
    void saveToState(CAState&);
    void setupFromMap(std::map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string> > >&);
    void loadFromState(CAState&);
    void setupFromString(std::string);
    void writeSaveString(fmt::BasicWriter<char>&);
    void updateCustomColor(cocos2d::_ccColor3B, cocos2d::_ccColor3B);
    void init(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float, double, bool, int, float, float) override;
    void step(float);
    void create(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float, double, bool);
    void create(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float, double, bool, int, float, float);
    void create(cocos2d::_ccColor3B, bool, int);
    void create();
    void getCopy();
    bool isInUse();

};

#endif // COLORACTION_H_
