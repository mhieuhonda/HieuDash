
#ifndef BONUSDROPDOWN_H_
#define BONUSDROPDOWN_H_

#include <string>

class BonusDropdown {
public:
    virtual ~BonusDropdown();

    void init(std::string, int);
    void show();
    void create(std::string, int);

};

#endif // BONUSDROPDOWN_H_
