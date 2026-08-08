// ============================================================
// PlatformToolbox.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef PLATFORMTOOLBOX_H_
#define PLATFORMTOOLBOX_H_

#include <string>

class PlatformToolbox {
public:
    void getRawPath(char const*);
    void hideCursor();
    void showCursor();
    void gameDidSave();
    void openAppPage();
    void onGameLaunch();
    void resizeWindow(float, float);
    void doesFileExist(std::string);
    void onNativePause();
    void refreshWindow();
    void getDisplaySize();
    void onNativeResume();
    void copyToClipboard(std::string);
    void getUniqueUserID();
    void toggleSmoothFix(bool);
    void onToggleKeyboard();
    void platformShutdown();
    void setKeyboardState(bool);
    void showAchievements();
    void signInGooglePlay();
    void toggleForceTimer(bool);
    void toggleFullScreen(bool, bool, bool);
    void toggleLockCursor(bool);
    void isLowMemoryDevice();
    void shouldResumeSound();
    void signOutGooglePlay();
    void tryShowRateDialog(std::string);
    void activateGameCenter();
    void getClipboardString();
    void isNetworkAvailable();
    void setBlockBackButton(bool);
    void toggleCPUSleepMode(bool);
    void toggleCallGLFinish(bool);
    void toggleMouseControl(bool);
    void toggleVerticalSync(bool);
    void updateMouseControl();
    void updateWindowedSize(float, float);
    void spriteFromSavedFile(std::string);
    void getDeviceRefreshRate();
    void isSignedInGooglePlay();
    void isControllerConnected();
    void reportLoadingFinished();
    void reportAchievementWithID(char const*, int);
    void downloadAndSavePromoImage(std::string, std::string);
    void isLocalPlayerAuthenticated();
    void loadAndDecryptFileToString(char const*, char const*, std::string&);
    void saveAndEncryptStringToFile(std::string&, char const*, char const*);
    void isHD();
    void logEvent(char const*);
    void sendMail(char const*, char const*, char const*);
    void getUserID();

protected:
    std::string m_clipboardString;
    float m_deviceRefreshRate;
    int m_uniqueUserID;
    int m_userID;

};

#endif // PLATFORMTOOLBOX_H_
