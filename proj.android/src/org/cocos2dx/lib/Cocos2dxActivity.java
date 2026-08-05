package org.cocos2dx.lib;

import android.app.AlertDialog;
import android.content.pm.PackageManager;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.os.Process;
import android.util.DisplayMetrics;
import android.util.Log;
import com.customRobTop.BaseRobTopActivity;
import java.util.Locale;

/* loaded from: classes.dex */
public class Cocos2dxActivity extends BaseRobTopActivity {
    private static final int HANDLER_SHOW_DIALOG = 1;
    private static Cocos2dxAccelerometer accelerometer;
    private static p backgroundMusicPlayer;
    private static Handler handler;
    private static String packageName;
    private static q soundPlayer;
    private static boolean accelerometerEnabled = false;
    private static Cocos2dxActivity me = null;

    public static void disableAccelerometer() {
        accelerometerEnabled = false;
        accelerometer.disable();
    }

    public static void enableAccelerometer() {
        accelerometerEnabled = true;
        accelerometer.enable();
    }

    public static void end() {
        backgroundMusicPlayer.end();
        soundPlayer.end();
    }

    public static float getBackgroundMusicVolume() {
        return backgroundMusicPlayer.getBackgroundVolume();
    }

    public static String getCocos2dxPackageName() {
        return packageName;
    }

    public static String getCurrentLanguage() {
        return Locale.getDefault().getLanguage();
    }

    public static float getEffectsVolume() {
        return soundPlayer.getEffectsVolume();
    }

    public static boolean isBackgroundMusicPlaying() {
        return backgroundMusicPlayer.isBackgroundMusicPlaying();
    }

    private static native void nativeSetPaths(String str);

    public static void pauseAllEffects() {
        soundPlayer.pauseAllEffects();
    }

    public static void pauseBackgroundMusic() {
        backgroundMusicPlayer.pauseBackgroundMusic();
    }

    public static void pauseEffect(int i) {
        soundPlayer.pauseEffect(i);
    }

    public static void playBackgroundMusic(String str, boolean z) {
        backgroundMusicPlayer.playBackgroundMusic(str, z);
    }

    public static int playEffect(String str, boolean z, float f, float f2, float f3) {
        return soundPlayer.playEffect(str, z, f, f2, f3);
    }

    public static void preloadBackgroundMusic(String str) {
        backgroundMusicPlayer.preloadBackgroundMusic(str);
    }

    public static void preloadEffect(String str) {
        soundPlayer.preloadEffect(str);
    }

    public static void resumeAllEffects() {
        soundPlayer.resumeAllEffects();
    }

    public static void resumeBackgroundMusic() {
        backgroundMusicPlayer.resumeBackgroundMusic();
    }

    public static void resumeEffect(int i) {
        soundPlayer.resumeEffect(i);
    }

    public static void rewindBackgroundMusic() {
        backgroundMusicPlayer.rewindBackgroundMusic();
    }

    public static void setBackgroundMusicTime(float f) {
        backgroundMusicPlayer.setBackgroundMusicTime(f);
    }

    public static void setBackgroundMusicVolume(float f) {
        backgroundMusicPlayer.setBackgroundVolume(f);
    }

    public static void setEffectsVolume(float f) {
        soundPlayer.setEffectsVolume(f);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showDialog(String str, String str2) {
        new AlertDialog.Builder(this).setTitle(str).setMessage(str2).setPositiveButton("Ok", new b(this)).create().show();
    }

    public static void showMessageBox(String str, String str2) {
        Message message = new Message();
        message.what = 1;
        message.obj = new s(str, str2);
        handler.sendMessage(message);
    }

    public static void stopAllEffects() {
        soundPlayer.stopAllEffects();
    }

    public static void stopBackgroundMusic() {
        backgroundMusicPlayer.stopBackgroundMusic();
    }

    public static void stopEffect(int i) {
        soundPlayer.stopEffect(i);
    }

    public static void terminateProcess() {
        Process.killProcess(Process.myPid());
    }

    public static void unloadEffect(String str) {
        soundPlayer.unloadEffect(str);
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.customRobTop.BaseRobTopActivity, com.customRobTop.DefaultRobTopActivity, android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        getWindowManager().getDefaultDisplay().getMetrics(new DisplayMetrics());
        accelerometer = new Cocos2dxAccelerometer(this);
        if (backgroundMusicPlayer != null) {
            backgroundMusicPlayer.mContext = this;
        } else {
            backgroundMusicPlayer = new p(this);
        }
        if (soundPlayer != null) {
            soundPlayer.mContext = this;
        } else {
            soundPlayer = new q(this);
        }
        Cocos2dxBitmap.setContext(this);
        handler = new a(this);
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.customRobTop.BaseRobTopActivity, android.app.Activity
    public void onPause() {
        super.onPause();
        if (accelerometerEnabled) {
            accelerometer.disable();
        }
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.customRobTop.BaseRobTopActivity, android.app.Activity
    public void onResume() {
        super.onResume();
        if (accelerometerEnabled) {
            accelerometer.enable();
        }
    }

    /* JADX INFO: Access modifiers changed from: protected */
    public void setPackageName(String str) {
        packageName = str;
        try {
            String str2 = getApplication().getPackageManager().getApplicationInfo(str, 0).sourceDir;
            Log.w("apk path", str2);
            nativeSetPaths(str2);
        } catch (PackageManager.NameNotFoundException e) {
            e.printStackTrace();
            throw new RuntimeException("Unable to locate assets, aborting...");
        }
    }
}
