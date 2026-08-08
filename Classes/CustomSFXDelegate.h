
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
