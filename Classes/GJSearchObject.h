
#ifndef GJSEARCHOBJECT_H_
#define GJSEARCHOBJECT_H_

#include <string>

class GJSearchObject {
public:
    virtual ~GJSearchObject();

    std::string getSearchKey(SearchType, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, int, int, int);
    GJSearchObject* createFromKey(char const*);
    void getPageObject(int);
    std::string getNextPageKey();
    void getNextPageObject();
    void getPrevPageObject();
    bool isLevelSearchObject();
    void init(SearchType, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, int, int, int);
    void create(SearchType);
    void create(SearchType, std::string);
    void create(SearchType, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, int, int, int);
    std::string getKey();

protected:
    std::string m_key;
    std::string m_nextPageKey;
    std::string m_searchKey;

};

#endif // GJSEARCHOBJECT_H_
