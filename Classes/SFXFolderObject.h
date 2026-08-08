
#ifndef SFXFOLDEROBJECT_H_
#define SFXFOLDEROBJECT_H_

#include <string>

class SFXFolderObject {
public:
    virtual ~SFXFolderObject();

    void init(int, std::string, int);
    void create(int, std::string, int);

};

#endif // SFXFOLDEROBJECT_H_
