// Stub for com.chartboost.sdk.Chartboost
// Provides no-op implementations so GameAdManagerCB compiles
// without the proprietary Chartboost ad SDK.
package com.chartboost.sdk;

import android.app.Activity;

public class Chartboost {
    private static Chartboost sInstance = new Chartboost();

    public static Chartboost sharedChartboost() {
        return sInstance;
    }

    public void onCreate(Activity activity, String appSignature, String appId, ChartboostDelegate delegate) {
        // no-op stub
    }

    public void startSession() {
        // no-op stub
    }

    public void cacheInterstitial() {
        // no-op stub
    }

    public void cacheInterstitial(String location) {
        // no-op stub
    }

    public boolean hasCachedInterstitial() {
        return false;
    }

    public boolean hasCachedInterstitial(String location) {
        return false;
    }

    public void showInterstitial() {
        // no-op stub
    }

    public void showInterstitial(String location) {
        // no-op stub
    }

    public boolean onBackPressed() {
        return false;
    }

    public void onDestroy(Activity activity) {
        // no-op stub
    }

    public void onStart(Activity activity) {
        // no-op stub
    }

    public void onStop(Activity activity) {
        // no-op stub
    }
}
