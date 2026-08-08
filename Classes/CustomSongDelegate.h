
#ifndef CUSTOMSONGDELEGATE_H_
#define CUSTOMSONGDELEGATE_H_

class CustomSongDelegate {
public:
    void songIDChanged(int);
    void getActiveSongID();

protected:
    int m_activeSongID;

};

#endif // CUSTOMSONGDELEGATE_H_
