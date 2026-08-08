
#ifndef CUSTOMSFXCELL_H_
#define CUSTOMSFXCELL_H_

class CustomSFXCell : public cocos2d::CCNode {
public:
    CustomSFXCell(char const*, float, float);
    CustomSFXCell(char const*, float, float);

    virtual ~CustomSFXCell();

    bool shouldReload();
    void updateBGColor(int);
    void getActiveSFXID();
    void loadFromObject(SFXInfoObject*);
    void sfxObjectSelected(SFXInfoObject*);
    void draw();
    bool init();

protected:
    int m_activeSFXID;

};

#endif // CUSTOMSFXCELL_H_
