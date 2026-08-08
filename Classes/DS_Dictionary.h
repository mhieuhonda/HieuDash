// ============================================================
// DS_Dictionary.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef DS_DICTIONARY_H_
#define DS_DICTIONARY_H_

#include "cocos2d.h"
#include <string>
#include <vector>

class DS_Dictionary {
public:
    DS_Dictionary();
    DS_Dictionary();

    void getAllKeys();
    void getNumKeys();
    void getBoolForKey(char const*);
    void getDictForKey(char const*, bool);
    void getIndexOfKey(char const*);
    void getRectForKey(char const*);
    void getVec2ForKey(char const*);
    void removeAllKeys();
    void setBoolForKey(char const*, bool);
    void setBoolForKey(char const*, bool, bool);
    void setDictForKey(char const*, cocos2d::CCDictionary*);
    void setRectForKey(char const*, cocos2d::CCRect const&);
    void setRectForKey(char const*, cocos2d::CCRect const&, bool);
    void setVec2ForKey(char const*, cocos2d::CCPoint const&);
    void setVec2ForKey(char const*, cocos2d::CCPoint const&, bool);
    void splitWithForm(std::string const&, std::vector<std::string>&);
    void getArrayForKey(char const*, bool);
    void getFloatForKey(char const*);
    void rectFromString(std::string const&, cocos2d::CCRect&);
    void setArrayForKey(char const*, cocos2d::CCArray*);
    void setFloatForKey(char const*, float);
    void setFloatForKey(char const*, float, bool);
    void vec2FromString(std::string const&, cocos2d::CCPoint&);
    void getObjectForKey(char const*);
    void getStringForKey(char const*);
    void setObjectForKey(char const*, cocos2d::CCObject*);
    void setStringForKey(char const*, std::string const&);
    void setStringForKey(char const*, std::string const&, bool);
    void getIntegerForKey(char const*);
    void setBoolMapForKey(char const*, std::map<std::string, bool, std::less<std::string>, std::allocator<std::pair<const std::string, bool> > >&);
    void setIntegerForKey(char const*, int);
    void setIntegerForKey(char const*, int, bool);
    void setSubDictForKey(char const*);
    void setSubDictForKey(char const*, bool, bool);
    void stepOutOfSubDict();
    void checkCompatibility();
    void decodeObjectForKey(char const*, bool, int);
    void getRectArrayForKey(char const*);
    void getVec2ArrayForKey(char const*);
    void setRectArrayForKey(char const*, std::vector<cocos2d::CCRect> const&);
    void setRectArrayForKey(char const*, std::vector<cocos2d::CCRect> const&, bool);
    void setVec2ArrayForKey(char const*, std::vector<cocos2d::CCPoint> const&);
    void setVec2ArrayForKey(char const*, std::vector<cocos2d::CCPoint> const&, bool);
    void getStringArrayForKey(char const*);
    void setStringArrayForKey(char const*, std::vector<std::string> const&);
    void setStringArrayForKey(char const*, std::vector<std::string> const&, bool);
    void cleanStringWhiteSpace(std::string const&);
    void saveRootSubDictToFile(char const*);
    void stepBackToRootSubDict();
    void stepIntoSubDictWithKey(char const*);
    void loadRootSubDictFromFile(char const*);
    void saveRootSubDictToString();
    void addBoolValuesToMapForKey(std::map<std::string, bool, std::less<std::string>, std::allocator<std::pair<const std::string, bool> > >&, char const*, bool);
    void loadRootSubDictFromString(std::string const&);
    void addBoolValuesToMapForKeySpecial(std::map<std::string, bool, std::less<std::string>, std::allocator<std::pair<const std::string, bool> > >&, char const*, bool);
    void saveRootSubDictToCompressedFile(char const*);
    void loadRootSubDictFromCompressedFile(char const*);
    void getIndexOfKeyWithClosestAlphaNumericalMatch(char const*);
    void split(std::string const&, char const*, std::vector<std::string>&);
    void getKey(unsigned int);
    void copyFile(char const*, char const*);
    void removeKey(char const*);
    void removeKey(unsigned int);

};

#endif // DS_DICTIONARY_H_
