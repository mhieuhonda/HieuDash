package org.fmod;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.res.AssetManager;
import android.media.AudioDeviceCallback;
import android.media.AudioDeviceInfo;
import android.media.AudioManager;
import android.net.Uri;
import android.os.Build;
import android.util.Log;
import java.io.FileNotFoundException;
import java.util.HashSet;

/* loaded from: classes.dex */
public class FMOD {
    private static Context gContext;
    private static PluginAudioDeviceCallback gPluginAudioDeviceCallback;
    private static PluginBroadcastReceiver gPluginBroadcastReceiver = new PluginBroadcastReceiver();

    static class PluginAudioDeviceCallback extends AudioDeviceCallback {
        private static HashSet<Integer> deviceSet;

        public PluginAudioDeviceCallback(AudioDeviceInfo[] audioDeviceInfoArr) {
            deviceSet = new HashSet<>();
            if (audioDeviceInfoArr != null) {
                for (AudioDeviceInfo audioDeviceInfo : audioDeviceInfoArr) {
                    deviceSet.add(Integer.valueOf(audioDeviceInfo.getId()));
                }
            }
        }

        @Override // android.media.AudioDeviceCallback
        public void onAudioDevicesAdded(AudioDeviceInfo[] audioDeviceInfoArr) {
            boolean z;
            int i = 0;
            if (audioDeviceInfoArr != null) {
                int i2 = 0;
                z = false;
                while (i < audioDeviceInfoArr.length) {
                    if (!deviceSet.contains(Integer.valueOf(audioDeviceInfoArr[i].getId()))) {
                        if (audioDeviceInfoArr[i].isSource()) {
                            i2 = 1;
                        }
                        if (audioDeviceInfoArr[i].isSink()) {
                            z = true;
                        }
                        deviceSet.add(Integer.valueOf(audioDeviceInfoArr[i].getId()));
                    }
                    i++;
                }
                i = i2;
            } else {
                z = false;
            }
            if (i != 0) {
                FMOD.SetInputEnumerationChanged();
            }
            if (z) {
                FMOD.SetOutputEnumerationChanged();
            }
        }

        @Override // android.media.AudioDeviceCallback
        public void onAudioDevicesRemoved(AudioDeviceInfo[] audioDeviceInfoArr) {
            boolean z;
            int i = 0;
            if (audioDeviceInfoArr != null) {
                int i2 = 0;
                z = false;
                while (i < audioDeviceInfoArr.length) {
                    if (deviceSet.contains(Integer.valueOf(audioDeviceInfoArr[i].getId()))) {
                        if (audioDeviceInfoArr[i].isSource()) {
                            i2 = 1;
                        }
                        if (audioDeviceInfoArr[i].isSink()) {
                            z = true;
                        }
                        deviceSet.remove(Integer.valueOf(audioDeviceInfoArr[i].getId()));
                    }
                    i++;
                }
                i = i2;
            } else {
                z = false;
            }
            if (i != 0) {
                FMOD.SetInputEnumerationChanged();
            }
            if (z) {
                FMOD.SetOutputEnumerationChanged();
            }
        }
    }

    static class PluginBroadcastReceiver extends BroadcastReceiver {
        PluginBroadcastReceiver() {
        }

        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            FMOD.OutputAAudioHeadphonesChanged();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static native void OutputAAudioHeadphonesChanged();

    /* JADX INFO: Access modifiers changed from: private */
    public static native void SetInputEnumerationChanged();

    /* JADX INFO: Access modifiers changed from: private */
    public static native void SetOutputEnumerationChanged();

    public static boolean checkInit() {
        return gContext != null;
    }

    public static void close() {
        Context context = gContext;
        if (context != null) {
            context.unregisterReceiver(gPluginBroadcastReceiver);
            ((AudioManager) gContext.getSystemService("audio")).unregisterAudioDeviceCallback(gPluginAudioDeviceCallback);
        }
        gContext = null;
    }

    public static int fileDescriptorFromUri(String str) {
        if (gContext != null) {
            try {
                return gContext.getContentResolver().openFileDescriptor(Uri.parse(str), "r").detachFd();
            } catch (FileNotFoundException unused) {
            }
        }
        return -1;
    }

    public static AssetManager getAssetManager() {
        Context context = gContext;
        if (context != null) {
            return context.getAssets();
        }
        return null;
    }

    public static AudioDeviceInfo[] getAudioDevices(int i) {
        return gContext != null ? ((AudioManager) gContext.getSystemService("audio")).getDevices(i) : new AudioDeviceInfo[0];
    }

    public static int getOutputBlockSize() {
        String property;
        if (gContext == null || (property = ((AudioManager) gContext.getSystemService("audio")).getProperty("android.media.property.OUTPUT_FRAMES_PER_BUFFER")) == null) {
            return 0;
        }
        return Integer.parseInt(property);
    }

    public static int getOutputSampleRate() {
        String property;
        if (gContext == null || (property = ((AudioManager) gContext.getSystemService("audio")).getProperty("android.media.property.OUTPUT_SAMPLE_RATE")) == null) {
            return 0;
        }
        return Integer.parseInt(property);
    }

    public static void init(Context context) {
        gContext = context;
        if (context != null) {
            IntentFilter intentFilter = new IntentFilter("android.intent.action.HEADSET_PLUG");
            if (Build.VERSION.SDK_INT >= 34) {
                gContext.registerReceiver(gPluginBroadcastReceiver, intentFilter, 4);
            } else {
                gContext.registerReceiver(gPluginBroadcastReceiver, intentFilter);
            }
            AudioManager audioManager = (AudioManager) gContext.getSystemService("audio");
            PluginAudioDeviceCallback pluginAudioDeviceCallback = new PluginAudioDeviceCallback(audioManager.getDevices(3));
            gPluginAudioDeviceCallback = pluginAudioDeviceCallback;
            audioManager.registerAudioDeviceCallback(pluginAudioDeviceCallback, null);
        }
    }

    public static boolean isBluetoothOn() {
        Context context = gContext;
        if (context == null) {
            return false;
        }
        AudioManager audioManager = (AudioManager) context.getSystemService("audio");
        return audioManager.isBluetoothA2dpOn() || audioManager.isBluetoothScoOn();
    }

    public static boolean lowLatencyFlag() {
        if (gContext != null) {
            return gContext.getPackageManager().hasSystemFeature("android.hardware.audio.low_latency");
        }
        return false;
    }

    public static boolean proAudioFlag() {
        if (gContext != null) {
            return gContext.getPackageManager().hasSystemFeature("android.hardware.audio.pro");
        }
        return false;
    }

    public static boolean supportsAAudio() {
        return Build.VERSION.SDK_INT >= 27;
    }

    public static boolean supportsLowLatency() {
        int outputBlockSize = getOutputBlockSize();
        boolean lowLatencyFlag = lowLatencyFlag();
        boolean proAudioFlag = proAudioFlag();
        boolean z = outputBlockSize > 0 && outputBlockSize <= 1024;
        boolean isBluetoothOn = isBluetoothOn();
        Log.i("fmod", "FMOD::supportsLowLatency                 : Low latency = " + lowLatencyFlag + ", Pro Audio = " + proAudioFlag + ", Bluetooth On = " + isBluetoothOn + ", Acceptable Block Size = " + z + " (" + outputBlockSize + ")");
        return z && lowLatencyFlag && !isBluetoothOn;
    }
}
