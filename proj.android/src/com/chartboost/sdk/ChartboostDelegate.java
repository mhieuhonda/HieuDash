// Stub for com.chartboost.sdk.ChartboostDelegate
// Provides all the callback methods the real ChartboostDelegate interface
// declares, so GameAdManagerCB compiles without the proprietary SDK.
package com.chartboost.sdk;

import android.app.Activity;

public interface ChartboostDelegate {
    void didCacheInterstitial(String location);
    void didCacheMoreApps();
    void didClickInterstitial(String location);
    void didClickMoreApps();
    void didCloseInterstitial(String location);
    void didCloseMoreApps();
    void didDismissInterstitial(String location);
    void didDismissMoreApps();
    void didFailToLoadInterstitial(String location);
    void didFailToLoadMoreApps();
    void didShowInterstitial(String location);
    void didShowMoreApps();
    boolean shouldDisplayInterstitial(String location);
    boolean shouldDisplayLoadingViewForMoreApps();
    boolean shouldDisplayMoreApps();
    boolean shouldRequestInterstitial(String location);
    boolean shouldRequestInterstitialsInFirstSession();
    boolean shouldRequestMoreApps();
}
