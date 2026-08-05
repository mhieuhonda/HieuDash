package com.customRobTop;

import android.util.Log;
import com.chartboost.sdk.Chartboost;
import com.chartboost.sdk.ChartboostDelegate;

/* loaded from: classes.dex */
public class GameAdManagerCB implements ChartboostDelegate {
    public BaseRobTopActivity cAct_;
    private Chartboost cb;
    public GameAdManagerCB me_;
    private boolean tryingToDisplay_ = false;

    public void cacheInterstitial() {
        if (hasCachedInterstitial()) {
            return;
        }
        this.cb.cacheInterstitial();
    }

    public void cacheInterstitial(String str) {
        if (hasCachedInterstitial(str)) {
            return;
        }
        this.cb.cacheInterstitial(str);
    }

    public void createBanner() {
    }

    @Override // com.chartboost.sdk.ChartboostDelegate
    public void didCacheInterstitial(String str) {
        JniToCpp.didCacheInterstitial(str);
    }

    @Override // com.chartboost.sdk.ChartboostDelegate
    public void didCacheMoreApps() {
    }

    @Override // com.chartboost.sdk.ChartboostDelegate
    public void didClickInterstitial(String str) {
        JniToCpp.didClickInterstitial();
    }

    @Override // com.chartboost.sdk.ChartboostDelegate
    public void didClickMoreApps() {
    }

    @Override // com.chartboost.sdk.ChartboostDelegate
    public void didCloseInterstitial(String str) {
        JniToCpp.didCloseInterstitial();
    }

    @Override // com.chartboost.sdk.ChartboostDelegate
    public void didCloseMoreApps() {
    }

    @Override // com.chartboost.sdk.ChartboostDelegate
    public void didDismissInterstitial(String str) {
        this.cb.cacheInterstitial();
    }

    @Override // com.chartboost.sdk.ChartboostDelegate
    public void didDismissMoreApps() {
    }

    @Override // com.chartboost.sdk.ChartboostDelegate
    public void didFailToLoadInterstitial(String str) {
        if (this.tryingToDisplay_) {
            this.tryingToDisplay_ = false;
            JniToCpp.didDismissInterstitial();
        }
    }

    @Override // com.chartboost.sdk.ChartboostDelegate
    public void didFailToLoadMoreApps() {
    }

    @Override // com.chartboost.sdk.ChartboostDelegate
    public void didShowInterstitial(String str) {
    }

    @Override // com.chartboost.sdk.ChartboostDelegate
    public void didShowMoreApps() {
    }

    public void disableBanner() {
    }

    public void enableBanner() {
    }

    public boolean hasCachedInterstitial() {
        return this.cb.hasCachedInterstitial();
    }

    public boolean hasCachedInterstitial(String str) {
        return this.cb.hasCachedInterstitial(str);
    }

    public boolean onBackPressed() {
        if (!this.cb.onBackPressed()) {
            return false;
        }
        JniToCpp.didCloseInterstitial();
        return true;
    }

    public void onDestroy() {
        this.cb.onDestroy(this.cAct_);
    }

    public void onStart() {
        this.cb.onStart(this.cAct_);
    }

    public void onStop() {
        this.cb.onStop(this.cAct_);
    }

    public void pauseBanner() {
    }

    public void resumeBanner() {
    }

    public void setup(BaseRobTopActivity baseRobTopActivity, String str, String str2, String str3) {
        this.cAct_ = baseRobTopActivity;
        this.me_ = this;
        this.cb = Chartboost.sharedChartboost();
        this.cb.onCreate(this.cAct_, str2, str3, this);
        this.cb.startSession();
    }

    @Override // com.chartboost.sdk.ChartboostDelegate
    public boolean shouldDisplayInterstitial(String str) {
        Log.d("CB", "Should display");
        if (!this.tryingToDisplay_) {
            return false;
        }
        this.tryingToDisplay_ = false;
        return true;
    }

    @Override // com.chartboost.sdk.ChartboostDelegate
    public boolean shouldDisplayLoadingViewForMoreApps() {
        return false;
    }

    @Override // com.chartboost.sdk.ChartboostDelegate
    public boolean shouldDisplayMoreApps() {
        return false;
    }

    @Override // com.chartboost.sdk.ChartboostDelegate
    public boolean shouldRequestInterstitial(String str) {
        return true;
    }

    @Override // com.chartboost.sdk.ChartboostDelegate
    public boolean shouldRequestInterstitialsInFirstSession() {
        return true;
    }

    @Override // com.chartboost.sdk.ChartboostDelegate
    public boolean shouldRequestMoreApps() {
        return false;
    }

    public void showInterstitial() {
        this.cAct_.runOnUiThread(new Runnable() { // from class: com.customRobTop.GameAdManagerCB.1
            @Override // java.lang.Runnable
            public void run() {
                GameAdManagerCB.this.tryingToDisplay_ = true;
                GameAdManagerCB.this.me_.cb.showInterstitial();
            }
        });
    }

    public void showInterstitial(final String str) {
        this.cAct_.runOnUiThread(new Runnable() { // from class: com.customRobTop.GameAdManagerCB.2
            @Override // java.lang.Runnable
            public void run() {
                GameAdManagerCB.this.tryingToDisplay_ = true;
                GameAdManagerCB.this.me_.cb.showInterstitial(str);
            }
        });
    }
}
