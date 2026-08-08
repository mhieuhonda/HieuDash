// ============================================================
// AssetsManager.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_EXTENSION_ASSETSMANAGER_H_
#define COCOS2D_EXTENSION_ASSETSMANAGER_H_

#include "cocos2d.h"

namespace cocos2d {
namespace extension {

class AssetsManager {
public:
    AssetsManager(char const*, char const*, char const*);
    AssetsManager(char const*, char const*, char const*);

    virtual ~AssetsManager();
    virtual ~AssetsManager();
    virtual ~AssetsManager();

    void getVersion();
    void uncompress();
    void checkUpdate();
    void setDelegate(cocos2d::extension::AssetsManagerDelegateProtocol*);
    void deleteVersion();
    void setPackageUrl(char const*);
    void setSearchPath();
    void setStoragePath(char const*);
    void createDirectory(char const*);
    void checkStoragePath();
    void sendErrorMessage(cocos2d::extension::AssetsManager::ErrorCode);
    void setVersionFileUrl(char const*);
    void getConnectionTimeout();
    void setConnectionTimeout(unsigned int);
    void update();
    void downLoad();
    void getPackageUrl()) const;
    void getStoragePath()) const;
    void getVersionFileUrl()) const;

};

} // namespace extension
} // namespace cocos2d

#endif // COCOS2D_EXTENSION_ASSETSMANAGER_H_
