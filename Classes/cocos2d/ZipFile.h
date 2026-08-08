// ============================================================
// ZipFile.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_ZIPFILE_H_
#define COCOS2D_ZIPFILE_H_

#include "cocos2d.h"
#include <string>

namespace cocos2d {

class ZipFile {
public:
    ZipFile(std::string const&, std::string const&);
    ZipFile(std::string const&, std::string const&);

    virtual ~ZipFile();
    virtual ~ZipFile();
    virtual ~ZipFile();

    void getFileData(std::string const&, unsigned long*);
    void getFileData(std::string const&, unsigned long*, cocos2d::ZipFilePrivate*);
    void setFilter(std::string const&);
    void setFilter(std::string const&, cocos2d::ZipFilePrivate*);
    void fileExists(std::string const&)) const;

};

} // namespace cocos2d

#endif // COCOS2D_ZIPFILE_H_
