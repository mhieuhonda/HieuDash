package com.customRobTop;

/* loaded from: classes.dex */
public class JniToCpp {
    public static native void didCacheInterstitial(String str);

    public static native void didClickInterstitial();

    public static native void didCloseInterstitial();

    public static native void didDismissInterstitial();

    public static native void hideLoadingCircle();

    public static native void itemPurchased(String str);

    public static native void itemRefunded(String str);

    public static native void promoImageDownloaded();

    public static native void resumeSound();

    public static native void showInterstitialFailed();
}
