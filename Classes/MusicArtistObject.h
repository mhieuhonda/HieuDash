
#ifndef MUSICARTISTOBJECT_H_
#define MUSICARTISTOBJECT_H_

#include <string>

class MusicArtistObject {
public:
    virtual ~MusicArtistObject();

    void init(int, std::string, std::string, std::string);
    void create(int, std::string, std::string, std::string);

};

#endif // MUSICARTISTOBJECT_H_
