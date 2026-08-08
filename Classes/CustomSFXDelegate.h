// ============================================================
// CustomSFXDelegate.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef CUSTOMSFXDELEGATE_H_
#define CUSTOMSFXDELEGATE_H_

class CustomSFXDelegate {
public:
    void getActiveSFXID();
    void overridePlaySFX(SFXInfoObject*);
    void sfxObjectSelected(SFXInfoObject*);

protected:
    int m_activeSFXID;

};

#endif // CUSTOMSFXDELEGATE_H_
