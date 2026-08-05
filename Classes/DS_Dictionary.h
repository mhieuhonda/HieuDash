#ifndef _DS_DICTIONARY_H_
#define _DS_DICTIONARY_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class DS_Dictionary {
public:
    DS_Dictionary();
    cleanStringWhiteSpace(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&);
    decodeObjectForKey(char const*);
    getAllKeys();
    getArrayForKey(char const*);
    getBoolForKey(char const*);
    getDictForKey(char const*);
    getFloatForKey(char const*);
    getIndexOfKey(char const*);
    getIndexOfKeyWithClosestAlphaNumericalMatch(char const*);
    getIntegerForKey(char const*);
    getKey(unsigned int);
    getNumKeys();
    getObjectForKey(char const*);
    getRectArrayForKey(char const*);
    getRectForKey(char const*);
    getStringArrayForKey(char const*);
    getStringForKey(char const*);
    getVec2ArrayForKey(char const*);
    getVec2ForKey(char const*);
    loadRootSubDictFromFile(char const*);
    loadRootSubDictFromString(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    rectFromString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, cocos2d::CCRect&);
    removeAllKeys();
    removeKey(char const*);
    removeKey(unsigned int);
    saveRootSubDictToFile(char const*);
    saveRootSubDictToString();
    setArrayForKey(char const*, cocos2d::CCArray*);
    setBoolForKey(char const*, bool);
    setBoolForKey(char const*, bool, bool);
    setDictForKey(char const*, cocos2d::CCDictionary*);
    setFloatForKey(char const*, float);
    setFloatForKey(char const*, float, bool);
    setIntegerForKey(char const*, int);
    setIntegerForKey(char const*, int, bool);
    setObjectForKey(char const*, cocos2d::CCObject*);
    setRectArrayForKey(char const*, std::vector<cocos2d::CCRect, std::allocator<cocos2d::CCRect> > const&);
    setRectArrayForKey(char const*, std::vector<cocos2d::CCRect, std::allocator<cocos2d::CCRect> > const&, bool);
    setRectForKey(char const*, cocos2d::CCRect const&);
    setRectForKey(char const*, cocos2d::CCRect const&, bool);
    setStringArrayForKey(char const*, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > > const&);
    setStringArrayForKey(char const*, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > > const&, bool);
    setStringForKey(char const*, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&);
    setStringForKey(char const*, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool);
    setSubDictForKey(char const*);
    setSubDictForKey(char const*, bool);
    setVec2ArrayForKey(char const*, std::vector<cocos2d::CCPoint, std::allocator<cocos2d::CCPoint> > const&);
    setVec2ArrayForKey(char const*, std::vector<cocos2d::CCPoint, std::allocator<cocos2d::CCPoint> > const&, bool);
    setVec2ForKey(char const*, cocos2d::CCPoint const&);
    setVec2ForKey(char const*, cocos2d::CCPoint const&, bool);
    split(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, char const*, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&);
    splitWithForm(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&);
    stepBackToRootSubDict();
    stepIntoSubDictWithKey(char const*);
    stepOutOfSubDict();
    vec2FromString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, cocos2d::CCPoint&);
    ~DS_Dictionary();
};

#endif // _DS_DICTIONARY_H_
