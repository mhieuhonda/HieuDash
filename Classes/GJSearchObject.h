#ifndef HIEUDASH_GJSEARCHOBJECT_H_
#define HIEUDASH_GJSEARCHOBJECT_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GJSearchObject : public cocos2d::CCObject {
public:
    GJSearchObject();
    static GJSearchObject* create(SearchType, std::string, std::string, std::string, int);
    void createFromKey(char const*);
    int getDifficultyStr();
    int getKey();
    int getLengthStr();
    int getNextPageKey();
    int getNextPageObject();
    int getPage();
    int getPrevPageObject();
    int getSearchKey(SearchType, std::string, std::string, std::string, int);
    int getString();
    int getType();
    bool init(SearchType, std::string, std::string, std::string, int);
    void setDifficultyStr(std::string);
    void setLengthStr(std::string);
    void setPage(int);
    void setString(std::string);
    void setType(SearchType);
    ~GJSearchObject();
};

#endif // HIEUDASH_GJSEARCHOBJECT_H_
