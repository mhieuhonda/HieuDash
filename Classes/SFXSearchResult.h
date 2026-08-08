
#ifndef SFXSEARCHRESULT_H_
#define SFXSEARCHRESULT_H_

class SFXSearchResult {
public:
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
