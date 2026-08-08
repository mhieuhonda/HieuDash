
#ifndef LOCALLEVELMANAGER_H_
#define LOCALLEVELMANAGER_H_

#include <string>

class LocalLevelManager {
public:
    virtual ~LocalLevelManager();

    void dataLoaded(DS_Dictionary*);
    void sharedState();
    void encodeDataTo(DS_Dictionary*);
    void reorderLists();
    void reorderLevels();
    void moveLevelToTop(GJGameLevel*);
    void getCreatedLists(int);
    void updateListOrder();
    void getCreatedLevels(int);
    void updateLevelOrder();
    void getAllLevelsInDict();
    void getMainLevelString(int);
    void getCustomLevels(int);
    void updateLevelRevision();
    void getAllLevelsWithName(std::string);
    void getLevelsInNameGroups();
    void markLevelsAsUnmodified();
    void tryLoadMainLevelString(int);
    void init();
    void firstLoad();

protected:
    std::string m_allLevelsWithName;
    std::string m_levelsInNameGroups;
    std::string m_mainLevelString;

};

#endif // LOCALLEVELMANAGER_H_
