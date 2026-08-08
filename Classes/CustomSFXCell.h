// ============================================================
// CustomSFXCell.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef CUSTOMSFXCELL_H_
#define CUSTOMSFXCELL_H_

class CustomSFXCell {
public:
    CustomSFXCell(char const*, float, float);
    CustomSFXCell(char const*, float, float);

    virtual ~CustomSFXCell();
    virtual ~CustomSFXCell();
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
