package org.cocos2dx.lib;

/* JADX INFO: Access modifiers changed from: package-private */
/* loaded from: classes.dex */
public class j implements Runnable {
    final /* synthetic */ Cocos2dxGLSurfaceView a;
    private final /* synthetic */ String b;

    /* JADX INFO: Access modifiers changed from: package-private */
    public j(Cocos2dxGLSurfaceView cocos2dxGLSurfaceView, String str) {
        this.a = cocos2dxGLSurfaceView;
        this.b = str;
    }

    @Override // java.lang.Runnable
    public void run() {
        Cocos2dxRenderer cocos2dxRenderer;
        cocos2dxRenderer = this.a.mRenderer;
        cocos2dxRenderer.handleInsertText(this.b);
    }
}
