#ifndef _GJSEARCHOBJECT_H_
#define _GJSEARCHOBJECT_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class GJSearchObject {
public:
    GJSearchObject();
    create(SearchType, std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int);
    createFromKey(char const*);
    getDifficultyStr();
    getKey();
    getLengthStr();
    getNextPageKey();
    getNextPageObject();
    getPage();
    getPrevPageObject();
    getSearchKey(SearchType, std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int);
    getString();
    getType();
    init(SearchType, std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int);
    setDifficultyStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    setLengthStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    setPage(int);
    setString(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    setType(SearchType);
    ~GJSearchObject();
};

#endif // _GJSEARCHOBJECT_H_
