// ============================================================
// GJSearchObject.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef GJSEARCHOBJECT_H_
#define GJSEARCHOBJECT_H_

#include <string>

class GJSearchObject {
public:
    virtual ~GJSearchObject();
    virtual ~GJSearchObject();
    virtual ~GJSearchObject();

    void getSearchKey(SearchType, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, int, int, int);
    void createFromKey(char const*);
    void getPageObject(int);
    void getNextPageKey();
    void getNextPageObject();
    void getPrevPageObject();
    void isLevelSearchObject();
    void init(SearchType, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, int, int, int);
    void create(SearchType);
    void create(SearchType, std::string);
    void create(SearchType, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, int, int, int);
    void getKey();

};

#endif // GJSEARCHOBJECT_H_
