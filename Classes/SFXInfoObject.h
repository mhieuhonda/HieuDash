
#ifndef SFXINFOOBJECT_H_
#define SFXINFOOBJECT_H_

#include <string>

class SFXInfoObject {
public:
    virtual ~SFXInfoObject();

    std::string getLowerCaseName();
    void init(int, std::string, int, int, int);
    void create(int, std::string, int, int, int);

protected:
    std::string m_lowerCaseName;

};

#endif // SFXINFOOBJECT_H_
