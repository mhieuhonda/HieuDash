
#ifndef STATSCELL_H_
#define STATSCELL_H_

#include <string>

class StatsCell : public cocos2d::CCNode {
public:
    StatsCell(char const*, float, float);
    StatsCell(char const*, float, float);

    virtual ~StatsCell();

    void updateBGColor(int);
    void loadFromObject(StatsObject*);
    std::string getTitleFromKey(char const*);
    void draw();
    bool init();

protected:
    std::string m_titleFromKey;

};

#endif // STATSCELL_H_
