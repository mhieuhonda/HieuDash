
#ifndef CCURLOBJECT_H_
#define CCURLOBJECT_H_

#include <string>

class CCURLObject {
public:
    virtual ~CCURLObject();

    void init(std::string, std::string);
    void create(std::string, std::string);

};

#endif // CCURLOBJECT_H_
