
#ifndef CUSTOMSFXCELL_H_
#define CUSTOMSFXCELL_H_

class CustomSFXCell {
public:
    CustomSFXCell(char const*, float, float);
    CustomSFXCell(char const*, float, float);

    virtual ~CustomSFXCell();

    void shouldReload();
    void updateBGColor(int);
    void getActiveSFXID();
    void loadFromObject(SFXInfoObject*);
    void sfxObjectSelected(SFXInfoObject*);
    void draw();
    void init();

protected:
    int m_activeSFXID;

};

#endif // CUSTOMSFXCELL_H_
