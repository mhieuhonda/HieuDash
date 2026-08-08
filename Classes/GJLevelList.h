
#ifndef GJLEVELLIST_H_
#define GJLEVELLIST_H_

#include "cocos2d.h"
#include <string>

class GJLevelList : public cocos2d::CCObject {
public:
    virtual ~GJLevelList();

    void dataLoaded(DS_Dictionary*);
    void totalLevels();
    void reorderLevel(int, int);
    void showListInfo();
    void orderForLevel(int);
    void addLevelToList(GJGameLevel*);
    void completedLevels();
    void createWithCoder(DS_Dictionary*);
    void encodeWithCoder(DS_Dictionary*);
    void parseListLevels(std::string);
    void reorderLevelStep(int, bool);
    void hasMatchingLevels(GJLevelList*);
    void getListLevelsArray(cocos2d::CCArray*);
    void updateLevelsString();
    void duplicateListLevels(GJLevelList*);
    void handleStatsConflict(GJLevelList*);
    void removeLevelFromList(int);
    void frameForListDifficulty(int, DifficultyIconType);
    void getUnpackedDescription();
    void init() override;
    void create(cocos2d::CCDictionary*);
    void create();
    void canEncode();

};

#endif // GJLEVELLIST_H_
