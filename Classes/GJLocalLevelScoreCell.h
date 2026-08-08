
#ifndef GJLOCALLEVELSCORECELL_H_
#define GJLOCALLEVELSCORECELL_H_

class GJLocalLevelScoreCell : public cocos2d::CCNode {
public:
    GJLocalLevelScoreCell(char const*, float, float);
    GJLocalLevelScoreCell(char const*, float, float);

    virtual ~GJLocalLevelScoreCell();

    void loadFromScore(GJLocalScore*);
    void updateBGColor(int);
    void draw();
    bool init();

};

#endif // GJLOCALLEVELSCORECELL_H_
