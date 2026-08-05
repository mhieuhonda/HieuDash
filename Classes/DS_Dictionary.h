#ifndef HIEUDASH_DS_DICTIONARY_H_
#define HIEUDASH_DS_DICTIONARY_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class DS_Dictionary : public cocos2d::CCObject {
public:
    DS_Dictionary();
    void cleanStringWhiteSpace(std::string const&);
    void decodeObjectForKey(char const*);
    int getAllKeys();
    int getArrayForKey(char const*);
    int getBoolForKey(char const*);
    int getDictForKey(char const*);
    int getFloatForKey(char const*);
    int getIndexOfKey(char const*);
    int getIndexOfKeyWithClosestAlphaNumericalMatch(char const*);
    int getIntegerForKey(char const*);
    int getKey(unsigned int);
    int getNumKeys();
    int getObjectForKey(char const*);
    int getRectArrayForKey(char const*);
    int getRectForKey(char const*);
    int getStringArrayForKey(char const*);
    int getStringForKey(char const*);
    int getVec2ArrayForKey(char const*);
    int getVec2ForKey(char const*);
    void loadRootSubDictFromFile(char const*);
    void loadRootSubDictFromString(std::string);
    void rectFromString(std::string const&, cocos2d::CCRect&);
    void removeAllKeys();
    void removeKey(char const*);
    void removeKey(unsigned int);
    void saveRootSubDictToFile(char const*);
    void saveRootSubDictToString();
    void setArrayForKey(char const*, cocos2d::CCArray*);
    void setBoolForKey(char const*, bool);
    void setBoolForKey(char const*, bool, bool);
    void setDictForKey(char const*, cocos2d::CCDictionary*);
    void setFloatForKey(char const*, float);
    void setFloatForKey(char const*, float, bool);
    void setIntegerForKey(char const*, int);
    void setIntegerForKey(char const*, int, bool);
    void setObjectForKey(char const*, cocos2d::CCObject*);
    void setRectArrayForKey(char const*, std::vector<cocos2d::CCRect, std::allocator<cocos2d::CCRect> > const&);
    void setRectArrayForKey(char const*, std::vector<cocos2d::CCRect, std::allocator<cocos2d::CCRect> > const&, bool);
    void setRectForKey(char const*, cocos2d::CCRect const&);
    void setRectForKey(char const*, cocos2d::CCRect const&, bool);
    void setStringArrayForKey(char const*, std::vector<std::string, std::allocator<std::string > > const&);
    void setStringArrayForKey(char const*, std::vector<std::string, std::allocator<std::string > > const&, bool);
    void setStringForKey(char const*, std::string const&);
    void setStringForKey(char const*, std::string const&, bool);
    void setSubDictForKey(char const*);
    void setSubDictForKey(char const*, bool);
    void setVec2ArrayForKey(char const*, std::vector<cocos2d::CCPoint, std::allocator<cocos2d::CCPoint> > const&);
    void setVec2ArrayForKey(char const*, std::vector<cocos2d::CCPoint, std::allocator<cocos2d::CCPoint> > const&, bool);
    void setVec2ForKey(char const*, cocos2d::CCPoint const&);
    void setVec2ForKey(char const*, cocos2d::CCPoint const&, bool);
    void split(std::string const&, char const*, std::vector<std::string, std::allocator<std::string > >&);
    void splitWithForm(std::string const&, std::vector<std::string, std::allocator<std::string > >&);
    void stepBackToRootSubDict();
    void stepIntoSubDictWithKey(char const*);
    void stepOutOfSubDict();
    void vec2FromString(std::string const&, cocos2d::CCPoint&);
    ~DS_Dictionary();
};

#endif // HIEUDASH_DS_DICTIONARY_H_
