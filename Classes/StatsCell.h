
#ifndef STATSCELL_H_
#define STATSCELL_H_

#include <string>

class StatsCell {
public:
    StatsCell(char const*, float, float);
    StatsCell(char const*, float, float);

    virtual ~StatsCell();

    void updateBGColor(int);
    void loadFromObject(StatsObject*);
    void getTitleFromKey(char const*);
    void draw();
    void init();

protected:
    std::string m_titleFromKey;

};

#endif // STATSCELL_H_
