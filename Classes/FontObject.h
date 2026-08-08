
#ifndef FONTOBJECT_H_
#define FONTOBJECT_H_

class FontObject {
public:
    virtual ~FontObject();

    void getFontWidth(int);
    void parseConfigFile(char const*, float);
    void initWithConfigFile(char const*, float);
    void createWithConfigFile(char const*, float);

};

#endif // FONTOBJECT_H_
