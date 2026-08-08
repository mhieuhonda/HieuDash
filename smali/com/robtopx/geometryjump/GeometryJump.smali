.class public Lcom/robtopx/geometryjump/GeometryJump;
.super Lorg/cocos2dx/lib/Cocos2dxActivity;
.source "GeometryJump.java"


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-string v0, "fmod"

    invoke-static {v0}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V

    const-string v0, "cocos2dcpp"

    invoke-static {v0}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;-><init>()V

    return-void
.end method


# virtual methods
.method public getPublicKey()Ljava/lang/String;
    .locals 1

    const-string v0, "MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAgRyoIFy3izJ9+RBfum3Fvc6iiuk6TFst1yaPUUaThzD/6wlHwCDjVjnoDaqL29HE3j2VQpv5rmdSvDZXayxa1861//Ca3p3aDvlvcxZwyN6Fe51patKofmVNp9DhofDcsMNLLAfJMqihwgRCBHToi2B3xrstd+233UCgzz4oMg1cClfuSHn1YF7clksIrjuTrlBq1fmn3Km4E7S90ghyzL0KxT7gr1dyQdu8IuK++psnvv4wKybsKyuGm6fLk/X20TRJObi2Y8CRv4Zf9gWxSndR8sevQ1tOhQp1VQWWZqhks9r4DwPclEl2Ox0kREs4wR9zFdaWodFb1eKG3oNmPwIDAQAB"

    return-object v0
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 4

    invoke-static {p0}, Lorg/fmod/FMOD;->init(Landroid/content/Context;)V

    invoke-super {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxActivity;->onCreate(Landroid/os/Bundle;)V

    # --- HieuDash: First launch check and language/auto-login integration ---

    # Get SharedPreferences
    const-string v0, "HieuDashPrefs"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v2

    # Check if first launch (default true = 1)
    const-string v0, "firstLaunch"

    const/4 v1, 0x1

    invoke-interface {v2, v0, v1}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v0

    if-eqz v0, :cond_after_first_launch

    # First launch: mark as no longer first launch
    invoke-interface {v2}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    const-string v1, "firstLaunch"

    const/4 v3, 0x0

    invoke-interface {v0, v1, v3}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    # Show language settings popup on first launch
    new-instance v0, Lcom/hieudash/LanguageSettingsPopup;

    invoke-direct {v0, p0}, Lcom/hieudash/LanguageSettingsPopup;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0}, Lcom/hieudash/LanguageSettingsPopup;->show()V

    :cond_after_first_launch
    # Load language preference
    invoke-static {p0}, Lcom/hieudash/LanguageManager;->getLanguage(Landroid/content/Context;)I

    # Show auto-login popup
    new-instance v0, Lcom/hieudash/AutoLoginPopup;

    invoke-direct {v0, p0}, Lcom/hieudash/AutoLoginPopup;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0}, Lcom/hieudash/AutoLoginPopup;->show()V

    # --- HieuDash: Show Admin Panel after 3 second delay ---
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    new-instance v1, Lcom/hieudash/AdminPanel$ShowAdminRunnable;

    invoke-direct {v1, p0}, Lcom/hieudash/AdminPanel$ShowAdminRunnable;-><init>(Landroid/app/Activity;)V

    const-wide/16 v2, 0xbb8

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method public onCreateView()Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;
    .locals 7

    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    invoke-direct {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;-><init>(Landroid/content/Context;)V

    const/16 v5, 0x10

    const/16 v6, 0x8

    const/4 v1, 0x5

    const/4 v2, 0x6

    const/4 v3, 0x5

    const/4 v4, 0x0

    invoke-virtual/range {v0 .. v6}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->setEGLConfigChooser(IIIIII)V

    return-object v0
.end method

.method protected onDestroy()V
    .locals 0

    invoke-super {p0}, Lorg/cocos2dx/lib/Cocos2dxActivity;->onDestroy()V

    invoke-static {}, Lorg/fmod/FMOD;->close()V

    return-void
.end method
