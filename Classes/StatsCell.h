// ============================================================
// StatsCell.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef STATSCELL_H_
#define STATSCELL_H_

class StatsCell {
public:
    StatsCell(char const*, float, float);
    StatsCell(char const*, float, float);

    virtual ~StatsCell();
    virtual ~StatsCell();
    virtual ~StatsCell();

    void updateBGColor(int);
    void loadFromObject(StatsObject*);
    void getTitleFromKey(char const*);
    void draw();
    void init();

};

#endif // STATSCELL_H_
