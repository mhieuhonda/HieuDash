// ============================================================
// AdToolbox.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef ADTOOLBOX_H_
#define ADTOOLBOX_H_

class AdToolbox {
public:
    void isShowingAd();
    void enableBanner();
    void disableBanner();
    void showInterstitial();
    void cacheInterstitial();
    void showRewardedVideo();
    void cacheRewardedVideo();
    void queueRefreshBanner();
    void enableBannerNoRefresh();
    void hasCachedInterstitial();
    void hasCachedRewardedVideo();
    void setupAds();
    void showDebug();

};

#endif // ADTOOLBOX_H_
