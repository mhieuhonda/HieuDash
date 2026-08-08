
#ifndef SEARCHSFXPOPUP_H_
#define SEARCHSFXPOPUP_H_

#include "cocos2d.h"
#include <string>

class SearchSFXPopup {
public:
    virtual ~SearchSFXPopup();

    void onSearchFolders(cocos2d::CCObject*);
    void init(std::string);
    void create(std::string);

};

#endif // SEARCHSFXPOPUP_H_
