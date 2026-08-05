package com.robtopx.geometryjump;

import android.app.ActivityManager;
import android.os.Build;
import android.os.Bundle;
import android.util.Log;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import com.customRobTop.GameAdManagerCB;
import com.flurry.android.FlurryAgent;
import org.cocos2dx.lib.Cocos2dxActivity;
import org.cocos2dx.lib.Cocos2dxEditText;
import org.cocos2dx.lib.Cocos2dxGLSurfaceView;
import org.cocos2dx.lib.Cocos2dxRenderer;

/* loaded from: classes.dex */
public class GeometryJump extends Cocos2dxActivity {
    private Cocos2dxGLSurfaceView mGLView;

    static {
        System.loadLibrary("game");
    }

    private boolean detectOpenGLES20() {
        return ((ActivityManager) getSystemService("activity")).getDeviceConfigurationInfo().reqGlEsVersion >= 131072 || Build.FINGERPRINT.startsWith("generic");
    }

    @Override // com.customRobTop.DefaultRobTopActivity
    public String getPublicKey() {
        return "MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAgRyoIFy3izJ9+RBfum3Fvc6iiuk6TFst1yaPUUaThzD/6wlHwCDjVjnoDaqL29HE3j2VQpv5rmdSvDZXayxa1861//Ca3p3aDvlvcxZwyN6Fe51patKofmVNp9DhofDcsMNLLAfJMqihwgRCBHToi2B3xrstd+233UCgzz4oMg1cClfuSHn1YF7clksIrjuTrlBq1fmn3Km4E7S90ghyzL0KxT7gr1dyQdu8IuK++psnvv4wKybsKyuGm6fLk/X20TRJObi2Y8CRv4Zf9gWxSndR8sevQ1tOhQp1VQWWZqhks9r4DwPclEl2Ox0kREs4wR9zFdaWodFb1eKG3oNmPwIDAQAB";
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // org.cocos2dx.lib.Cocos2dxActivity, com.customRobTop.BaseRobTopActivity, com.customRobTop.DefaultRobTopActivity, android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        if (detectOpenGLES20()) {
            super.setPackageName(getApplication().getPackageName());
            ViewGroup.LayoutParams layoutParams = new ViewGroup.LayoutParams(-1, -1);
            FrameLayout frameLayout = new FrameLayout(this);
            frameLayout.setLayoutParams(layoutParams);
            ViewGroup.LayoutParams layoutParams2 = new ViewGroup.LayoutParams(-1, -2);
            Cocos2dxEditText cocos2dxEditText = new Cocos2dxEditText(this);
            cocos2dxEditText.setLayoutParams(layoutParams2);
            frameLayout.addView(cocos2dxEditText);
            this.mGLView = new Cocos2dxGLSurfaceView(this);
            frameLayout.addView(this.mGLView);
            this.mGLView.setEGLContextClientVersion(2);
            this.mGLView.setCocos2dxRenderer(new Cocos2dxRenderer());
            this.mGLView.setTextField(cocos2dxEditText);
            setContentView(frameLayout);
        } else {
            Log.d("activity", "don't support gles2.0");
            finish();
        }
        GAM_ = new GameAdManagerCB();
        GAM_.setup(this, "", "51cd781316ba47c20d000005", "7acb353a5aea7419450cd8c0a7d9b67face1f6fa");
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // org.cocos2dx.lib.Cocos2dxActivity, com.customRobTop.BaseRobTopActivity, android.app.Activity
    public void onPause() {
        super.onPause();
        this.mGLView.onPause();
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // org.cocos2dx.lib.Cocos2dxActivity, com.customRobTop.BaseRobTopActivity, android.app.Activity
    public void onResume() {
        super.onResume();
        this.mGLView.onResume();
    }

    @Override // com.customRobTop.BaseRobTopActivity, android.app.Activity
    public void onStart() {
        super.onStart();
        FlurryAgent.onStartSession(this, "YXMSPPSN7FN22BCGPV85");
    }

    @Override // com.customRobTop.BaseRobTopActivity, android.app.Activity
    public void onStop() {
        super.onStop();
        FlurryAgent.onEndSession(this);
    }
}
