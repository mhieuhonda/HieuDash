#ifndef HIEUDASH_PLATFORMTOOLBOX_H_
#define HIEUDASH_PLATFORMTOOLBOX_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class PlatformToolbox {
public:
    void activateGameCenter();
    void doesFileExist(std::string);
    void downloadAndSavePromoImage(std::string, std::string);
    int getUniqueUserID();
    int getUserID();
    bool isHD();
    bool isLocalPlayerAuthenticated();
    bool isNetworkAvailable();
    void loadAndDecryptFileToString(char const*, char const*);
    void logEvent(char const*);
    void onGameLaunch();
    void onNativePause();
    void onNativeResume();
    void onToggleKeyboard();
    void openAppPage();
    void reportAchievementWithID(char const*, int);
    void reportLoadingFinished();
    void saveAndEncryptStringToFile(std::string, char const*, char const*);
    void sendMail(char const*, char const*, char const*);
    void setBlockBackButton(bool);
    void setKeyboardState(bool);
    bool shouldResumeSound();
    void showAchievements();
    void spriteFromSavedFile(std::string);
    void startFlurry(char const*);
    void tryShowRateDialog(std::string);
};

#endif // HIEUDASH_PLATFORMTOOLBOX_H_
