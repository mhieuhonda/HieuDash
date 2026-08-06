package com.customRobTop;

import android.app.KeyguardManager;
import android.content.ActivityNotFoundException;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.net.Uri;
import android.os.Bundle;
import android.provider.Settings;
// v0.5: removed import android.telephony.TelephonyManager; (no longer used).
import android.util.Log;
import android.widget.Toast;
import com.flurry.android.FlurryAgent;
import java.io.BufferedInputStream;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.net.URL;
import java.util.UUID;
import org.apache.http.util.ByteArrayBuffer;
import org.cocos2dx.lib.Cocos2dxGLSurfaceView;

/* loaded from: classes.dex */
public class BaseRobTopActivity extends DefaultRobTopActivity {
    public static final String TAG = "RobTopBase";
    public static BroadcastReceiver receiver_;
    private static BaseRobTopActivity me = null;
    public static boolean isLoaded_ = false;
    public static boolean keyboardActive_ = false;
    public static boolean blockBackButton_ = false;
    public static boolean focusState_ = true;
    public static boolean shouldResumeSound_ = true;
    public static boolean isPaused_ = false;
    public static GameAdManagerCB GAM_ = null;

    /* loaded from: classes.dex */
    public class receiverScreen extends BroadcastReceiver {
        public receiverScreen() {
        }

        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            if (intent.getAction().equals("android.intent.action.SCREEN_ON")) {
                Log.d("TAG", "ACTION_SCREEN_ON");
                if (!((KeyguardManager) BaseRobTopActivity.this.getSystemService("keyguard")).inKeyguardRestrictedInputMode()) {
                    BaseRobTopActivity.shouldResumeSound_ = true;
                }
                if (!BaseRobTopActivity.isPaused_ && BaseRobTopActivity.shouldResumeSound_) {
                    JniToCpp.resumeSound();
                }
            }
            if (intent.getAction().equals("android.intent.action.SCREEN_OFF")) {
                BaseRobTopActivity.shouldResumeSound_ = false;
            }
            if (intent.getAction().equals("android.intent.action.USER_PRESENT")) {
                BaseRobTopActivity.shouldResumeSound_ = true;
                if (BaseRobTopActivity.isPaused_) {
                    return;
                }
                JniToCpp.resumeSound();
            }
        }
    }

    public static String admobKey() {
        Log.d(TAG, "Getting admobKey");
        return "";
    }

    public static void cacheInterstitial() {
        if (GAM_ != null) {
            GAM_.cacheInterstitial();
        }
    }

    public static void cacheInterstitial(String str) {
        if (GAM_ != null) {
            GAM_.cacheInterstitial(str);
        }
    }

    public static String cbAppID() {
        Log.d(TAG, "Getting cbAppID");
        return "";
    }

    public static String cbAppSignature() {
        Log.d(TAG, "Getting cbAppSignature");
        return "";
    }

    public static void disableBanner() {
        if (GAM_ != null) {
            GAM_.disableBanner();
        }
    }

    public static boolean doesFileExist(String str) {
        return new File(str).exists();
    }

    public static void downloadImage(final String str, final String str2, final String str3) {
        new Thread(new Runnable() { // from class: com.customRobTop.BaseRobTopActivity.6
            @Override // java.lang.Runnable
            public void run() {
                try {
                    File file = new File(String.valueOf(str3) + str2);
                    if (file.exists()) {
                        file.delete();
                    }
                    URL url = new URL(str);
                    file.createNewFile();
                    Log.d("ImageManager", "download begining");
                    Log.d("ImageManager", "download url:" + url);
                    Log.d("ImageManager", "downloaded file name:" + str2);
                    BufferedInputStream bufferedInputStream = new BufferedInputStream(url.openConnection().getInputStream());
                    ByteArrayBuffer byteArrayBuffer = new ByteArrayBuffer(50);
                    while (true) {
                        int read = bufferedInputStream.read();
                        if (read == -1) {
                            FileOutputStream fileOutputStream = new FileOutputStream(file);
                            fileOutputStream.write(byteArrayBuffer.toByteArray());
                            fileOutputStream.close();
                            JniToCpp.promoImageDownloaded();
                            return;
                        }
                        byteArrayBuffer.append((byte) read);
                    }
                } catch (IOException e) {
                    Log.d("ImageManager", "Error: " + e);
                }
            }
        }).start();
    }

    public static void enableBanner() {
        if (GAM_ != null) {
            GAM_.enableBanner();
        }
    }

    public static String getUserID() {
        // v0.5: removed dangerous TelephonyManager.getDeviceId() and
        // getSimSerialNumber() calls (they required READ_PHONE_STATE, which
        // is a dangerous permission and was removed in v0.5). Now we derive
        // a stable per-install UUID from Settings.Secure.ANDROID_ID alone,
        // which requires no permissions and is the recommended way to
        // identify an install per the Android developer docs.
        String androidId = Settings.Secure.getString(me.getContentResolver(), "android_id");
        if (androidId == null) androidId = "unknown";
        return new UUID(androidId.hashCode(), ((long) androidId.hashCode() << 32)).toString();
    }

    public static boolean hasCachedInterstitial() {
        if (GAM_ != null) {
            return GAM_.hasCachedInterstitial();
        }
        return false;
    }

    public static boolean hasCachedInterstitial(String str) {
        if (GAM_ != null) {
            return GAM_.hasCachedInterstitial(str);
        }
        return false;
    }

    public static boolean isNetworkAvailable() {
        boolean z = false;
        boolean z2 = false;
        for (NetworkInfo networkInfo : ((ConnectivityManager) me.getSystemService("connectivity")).getAllNetworkInfo()) {
            if (networkInfo.getTypeName().equalsIgnoreCase("WIFI") && networkInfo.isConnected()) {
                z2 = true;
            }
            if (networkInfo.getTypeName().equalsIgnoreCase("MOBILE") && networkInfo.isConnected()) {
                z = true;
            }
        }
        return z2 || z;
    }

    public static void loadingFinished() {
        isLoaded_ = true;
        me.doRestoreCheck();
    }

    public static void logEvent(String str) {
        FlurryAgent.logEvent(str);
    }

    public static void onNativePause() {
        Log.d(TAG, "ON NATIVE PAUSE");
        if (GAM_ != null) {
            GAM_.pauseBanner();
        }
    }

    public static void onNativeResume() {
        Log.d(TAG, "ON NATIVE RESUME");
        if (GAM_ != null) {
            GAM_.resumeBanner();
        }
    }

    public static void onToggleKeyboard() {
        me.runOnUiThread(new Runnable() { // from class: com.customRobTop.BaseRobTopActivity.1
            @Override // java.lang.Runnable
            public void run() {
                if (BaseRobTopActivity.keyboardActive_) {
                    Cocos2dxGLSurfaceView.openIMEKeyboard();
                } else {
                    Cocos2dxGLSurfaceView.closeIMEKeyboard();
                }
            }
        });
    }

    public static void openAppPage() {
        me.runOnUiThread(new Runnable() { // from class: com.customRobTop.BaseRobTopActivity.2
            @Override // java.lang.Runnable
            public void run() {
                AppRater.dontShowAgain(BaseRobTopActivity.me);
                AppRater.openRate(BaseRobTopActivity.me);
            }
        });
    }

    public static void openURL(final String str) {
        Log.d("MAIN", "Open URL");
        me.runOnUiThread(new Runnable() { // from class: com.customRobTop.BaseRobTopActivity.4
            @Override // java.lang.Runnable
            public void run() {
                BaseRobTopActivity.me.startActivity(new Intent("android.intent.action.VIEW", Uri.parse(str)));
            }
        });
    }

    public static void pauseAds() {
        if (GAM_ != null) {
            GAM_.pauseBanner();
        }
    }

    public static void resumeAds() {
        if (GAM_ != null) {
            GAM_.resumeBanner();
        }
    }

    public static void sendMail(final String str, final String str2, final String str3) {
        me.runOnUiThread(new Runnable() { // from class: com.customRobTop.BaseRobTopActivity.5
            @Override // java.lang.Runnable
            public void run() {
                Intent intent = new Intent("android.intent.action.SEND");
                intent.setType("message/rfc822");
                intent.putExtra("android.intent.extra.EMAIL", new String[]{str3});
                intent.putExtra("android.intent.extra.SUBJECT", str);
                intent.putExtra("android.intent.extra.TEXT", str2);
                try {
                    BaseRobTopActivity.me.startActivity(Intent.createChooser(intent, "Send mail..."));
                } catch (ActivityNotFoundException e) {
                    Toast.makeText(BaseRobTopActivity.me, "There are no email clients installed.", 0).show();
                }
            }
        });
    }

    public static void setBlockBackButton(boolean z) {
        blockBackButton_ = z;
    }

    public static void setKeyboardState(boolean z) {
        keyboardActive_ = z;
    }

    public static boolean shouldResumeSound() {
        return shouldResumeSound_;
    }

    public static void showInterstitial() {
        if (GAM_ != null) {
            GAM_.showInterstitial();
        }
    }

    public static void showInterstitial(String str) {
        if (GAM_ != null) {
            GAM_.showInterstitial(str);
        }
    }

    public static void tryShowRateDialog(final String str) {
        me.runOnUiThread(new Runnable() { // from class: com.customRobTop.BaseRobTopActivity.3
            @Override // java.lang.Runnable
            public void run() {
                AppRater.tryShowRateDialog(BaseRobTopActivity.me, str);
            }
        });
    }

    @Override // android.app.Activity
    public void onBackPressed() {
        if (GAM_ == null || !GAM_.onBackPressed()) {
            super.onBackPressed();
        }
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.customRobTop.DefaultRobTopActivity, android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        if (me == null) {
            AppRater.app_launched(this);
        }
        me = this;
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        if (GAM_ != null) {
            GAM_.onDestroy();
        }
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.app.Activity
    public void onPause() {
        super.onPause();
        isPaused_ = true;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.app.Activity
    public void onResume() {
        super.onResume();
        isPaused_ = false;
    }

    @Override // android.app.Activity
    public void onStart() {
        super.onStart();
        if (GAM_ != null) {
            GAM_.createBanner();
            GAM_.onStart();
        }
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.app.Activity
    public void onStop() {
        super.onStop();
        if (GAM_ != null) {
            GAM_.onStop();
        }
    }

    void registerReceiver() {
        if (receiver_ != null) {
            me.unregisterReceiver(receiver_);
            receiver_ = null;
        }
        try {
            IntentFilter intentFilter = new IntentFilter("android.intent.action.SCREEN_ON");
            intentFilter.addAction("android.intent.action.SCREEN_OFF");
            intentFilter.addAction("android.intent.action.USER_PRESENT");
            receiver_ = new receiverScreen();
            registerReceiver(receiver_, intentFilter);
        } catch (Exception e) {
        }
    }
}
