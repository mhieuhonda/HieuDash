#ifndef _PLATFORMTOOLBOX_H_
#define _PLATFORMTOOLBOX_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class PlatformToolbox {
public:
    activateGameCenter();
    doesFileExist(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    downloadAndSavePromoImage(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    getUniqueUserID();
    getUserID();
    isHD();
    isLocalPlayerAuthenticated();
    isNetworkAvailable();
    loadAndDecryptFileToString(char const*, char const*);
    logEvent(char const*);
    onGameLaunch();
    onNativePause();
    onNativeResume();
    onToggleKeyboard();
    openAppPage();
    reportAchievementWithID(char const*, int);
    reportLoadingFinished();
    saveAndEncryptStringToFile(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, char const*, char const*);
    sendMail(char const*, char const*, char const*);
    setBlockBackButton(bool);
    setKeyboardState(bool);
    shouldResumeSound();
    showAchievements();
    spriteFromSavedFile(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    startFlurry(char const*);
    tryShowRateDialog(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
};

#endif // _PLATFORMTOOLBOX_H_
