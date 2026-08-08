// ============================================================
// SFXSearchResult.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SFXSEARCHRESULT_H_
#define SFXSEARCHRESULT_H_

class SFXSearchResult {
public:
    virtual ~SFXSearchResult();
    virtual ~SFXSearchResult();
    virtual ~SFXSearchResult();

    void updateObjects(AudioSortType);
    void getActiveFolder();
    void getSelectedPage(int, int);
    void setActiveFolder(SFXFolderObject*);
    void init(int);
    void create(int);

protected:
    bool m_activeFolder;

};

#endif // SFXSEARCHRESULT_H_
