
#ifndef OPTIONSOBJECT_H_
#define OPTIONSOBJECT_H_

#include <string>

class OptionsObject {
public:
    virtual ~OptionsObject();

    void toggleState();
    void init(int, bool, std::string, OptionsObjectDelegate*);
    void create(int, bool, std::string, OptionsObjectDelegate*);

};

#endif // OPTIONSOBJECT_H_
