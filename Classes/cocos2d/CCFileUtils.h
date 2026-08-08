// ============================================================
// CCFileUtils.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCFILEUTILS_H_
#define COCOS2D_CCFILEUTILS_H_

#include "cocos2d.h"
#include <string>
#include <vector>

namespace cocos2d {

class CCFileUtils {
public:
    CCFileUtils();
    CCFileUtils();

    virtual ~CCFileUtils();
    virtual ~CCFileUtils();
    virtual ~CCFileUtils();

    void getFileData(char const*, char const*, unsigned long*);
    void shouldUseHD();
    void writeToFile(cocos2d::CCDictionary*, std::string const&);
    void addSearchPath(char const*);
    void isPopupNotify();
    void getNewFilename(char const*);
    void getSearchPaths();
    void isAbsolutePath(std::string const&);
    void purgeFileUtils();
    void removeAllPaths();
    void removeFullPath(char const*);
    void setPopupNotify(bool);
    void setSearchPaths(std::vector<std::string> const&);
    void sharedFileUtils();
    void getClassTypeInfo();
    void getWritablePath2();
    void removeSearchPath(char const*);
    void getFileDataFromZip(char const*, char const*, unsigned long*);
    void getPathForFilename(std::string const&, std::string const&, std::string const&);
    void purgeCachedEntries();
    void fullPathForFilename(char const*, bool);
    void fullPathFromRelativeFile(char const*, char const*);
    void addSearchResolutionsOrder(char const*);
    void getSearchResolutionsOrder();
    void setSearchResolutionsOrder(std::vector<std::string> const&);
    void setFilenameLookupDictionary(cocos2d::CCDictionary*);
    void createCCArrayWithContentsOfFile(std::string const&);
    void getFullPathForDirectoryAndFilename(std::string const&, std::string const&);
    void createCCDictionaryWithContentsOfFile(std::string const&);
    void loadFilenameLookupDictionaryFromFile(char const*);
    void init();
    void addSuffix(std::string, std::string);

};

} // namespace cocos2d

#endif // COCOS2D_CCFILEUTILS_H_
