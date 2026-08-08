.class public Lcom/customRobTop/BaseRobTopActivity;
.super Lcom/customRobTop/DefaultRobTopActivity;
.source "BaseRobTopActivity.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/customRobTop/BaseRobTopActivity$receiverScreen;
    }
.end annotation


# static fields
.field public static final SCREEN_ORIENTATION_LANDSCAPE:I = 0x0

.field public static final SCREEN_ORIENTATION_SENSOR_LANDSCAPE:I = 0x6

.field public static final SCREEN_ORIENTATION_USER_LANDSCAPE:I = 0xb

.field public static final TAG:Ljava/lang/String; = "RobTopBase"

.field public static blockBackButton_:Z = false

.field public static focusState_:Z = true

.field public static isLoaded_:Z = false

.field public static isPaused_:Z = false

.field public static keyboardActive_:Z = false

.field public static me:Lcom/customRobTop/BaseRobTopActivity; = null

.field public static receiver_:Landroid/content/BroadcastReceiver; = null

.field public static shouldResumeSound_:Z = true


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/customRobTop/DefaultRobTopActivity;-><init>()V

    return-void
.end method

.method static synthetic access$000(Lcom/customRobTop/BaseRobTopActivity;)Landroid/view/View;
    .locals 0

    invoke-direct {p0}, Lcom/customRobTop/BaseRobTopActivity;->setSystemUiVisilityMode()Landroid/view/View;

    move-result-object p0

    return-object p0
.end method

.method public static admobKey()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method public static cacheInterstitial()V
    .locals 0

    return-void
.end method

.method public static cacheRewardedVideo()V
    .locals 0

    return-void
.end method

.method public static cbAppID()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method public static cbAppSignature()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method public static copyToClipboard(Ljava/lang/String;)V
    .locals 2

    sget-object v0, Lcom/customRobTop/BaseRobTopActivity;->me:Lcom/customRobTop/BaseRobTopActivity;

    if-nez v0, :cond_0

    return-void

    :cond_0
    new-instance v1, Lcom/customRobTop/BaseRobTopActivity$$ExternalSyntheticLambda0;

    invoke-direct {v1, p0}, Lcom/customRobTop/BaseRobTopActivity$$ExternalSyntheticLambda0;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/customRobTop/BaseRobTopActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static disableBanner()V
    .locals 1

    sget-object v0, Lcom/customRobTop/BaseRobTopActivity;->me:Lcom/customRobTop/BaseRobTopActivity;

    invoke-virtual {v0}, Lcom/customRobTop/BaseRobTopActivity;->_disableBanner()V

    return-void
.end method

.method public static doesFileExist(Ljava/lang/String;)Z
    .locals 1

    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p0

    return p0
.end method

.method public static downloadImage(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public static enableBanner()V
    .locals 1

    sget-object v0, Lcom/customRobTop/BaseRobTopActivity;->me:Lcom/customRobTop/BaseRobTopActivity;

    invoke-virtual {v0}, Lcom/customRobTop/BaseRobTopActivity;->_enableBanner()V

    return-void
.end method

.method public static enableBannerNoRefresh()V
    .locals 0

    invoke-static {}, Lcom/customRobTop/BaseRobTopActivity;->enableBanner()V

    return-void
.end method

.method public static gameServicesIsSignedIn()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public static gameServicesSignIn()V
    .locals 0

    return-void
.end method

.method public static gameServicesSignOut()V
    .locals 0

    return-void
.end method

.method public static getDeviceRefreshRate()F
    .locals 2

    sget-object v0, Lcom/customRobTop/BaseRobTopActivity;->me:Lcom/customRobTop/BaseRobTopActivity;

    const-string v1, "window"

    invoke-virtual {v0, v1}, Lcom/customRobTop/BaseRobTopActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/WindowManager;

    invoke-interface {v0}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Display;->getRefreshRate()F

    move-result v0

    return v0
.end method

.method public static getUserID()Ljava/lang/String;
    .locals 2

    sget-object v0, Lcom/customRobTop/BaseRobTopActivity;->me:Lcom/customRobTop/BaseRobTopActivity;

    invoke-virtual {v0}, Lcom/customRobTop/BaseRobTopActivity;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    const-string v1, "android_id"

    invoke-static {v0, v1}, Landroid/provider/Settings$Secure;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "9774d56d682e549c"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0}, Ljava/util/UUID;->nameUUIDFromBytes([B)Ljava/util/UUID;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static hasCachedInterstitial()Z
    .locals 1

    sget-object v0, Lcom/customRobTop/BaseRobTopActivity;->me:Lcom/customRobTop/BaseRobTopActivity;

    invoke-virtual {v0}, Lcom/customRobTop/BaseRobTopActivity;->_hasCachedInterstitial()Z

    move-result v0

    return v0
.end method

.method public static hasCachedRewardedVideo()Z
    .locals 1

    sget-object v0, Lcom/customRobTop/BaseRobTopActivity;->me:Lcom/customRobTop/BaseRobTopActivity;

    invoke-virtual {v0}, Lcom/customRobTop/BaseRobTopActivity;->_hasCachedRewardedVideo()Z

    move-result v0

    return v0
.end method

.method public static isNetworkAvailable()Z
    .locals 10

    sget-object v0, Lcom/customRobTop/BaseRobTopActivity;->me:Lcom/customRobTop/BaseRobTopActivity;

    const-string v1, "connectivity"

    invoke-virtual {v0, v1}, Lcom/customRobTop/BaseRobTopActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/net/ConnectivityManager;

    invoke-virtual {v0}, Landroid/net/ConnectivityManager;->getAllNetworkInfo()[Landroid/net/NetworkInfo;

    move-result-object v0

    array-length v1, v0

    const/4 v2, 0x0

    move v3, v2

    move v4, v3

    move v5, v4

    :goto_0
    const/4 v6, 0x1

    if-ge v3, v1, :cond_2

    aget-object v7, v0, v3

    invoke-virtual {v7}, Landroid/net/NetworkInfo;->getTypeName()Ljava/lang/String;

    move-result-object v8

    const-string v9, "WIFI"

    invoke-virtual {v8, v9}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v8

    if-eqz v8, :cond_0

    invoke-virtual {v7}, Landroid/net/NetworkInfo;->isConnected()Z

    move-result v8

    if-eqz v8, :cond_0

    move v4, v6

    :cond_0
    invoke-virtual {v7}, Landroid/net/NetworkInfo;->getTypeName()Ljava/lang/String;

    move-result-object v8

    const-string v9, "MOBILE"

    invoke-virtual {v8, v9}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v8

    if-eqz v8, :cond_1

    invoke-virtual {v7}, Landroid/net/NetworkInfo;->isConnected()Z

    move-result v7

    if-eqz v7, :cond_1

    move v5, v6

    :cond_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_2
    if-nez v4, :cond_4

    if-eqz v5, :cond_3

    goto :goto_1

    :cond_3
    return v2

    :cond_4
    :goto_1
    return v6
.end method

.method static synthetic lambda$copyToClipboard$1(Ljava/lang/String;)V
    .locals 2

    sget-object v0, Lcom/customRobTop/BaseRobTopActivity;->me:Lcom/customRobTop/BaseRobTopActivity;

    const-string v1, "clipboard"

    invoke-virtual {v0, v1}, Lcom/customRobTop/BaseRobTopActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/content/ClipboardManager;

    const-string v1, "text"

    invoke-static {v1, p0}, Landroid/content/ClipData;->newPlainText(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Landroid/content/ClipData;

    move-result-object p0

    invoke-virtual {v0, p0}, Landroid/content/ClipboardManager;->setPrimaryClip(Landroid/content/ClipData;)V

    return-void
.end method

.method static synthetic lambda$openURL$0(Ljava/lang/String;)V
    .locals 2

    :try_start_0
    new-instance v0, Landroid/content/Intent;

    const-string v1, "android.intent.action.VIEW"

    invoke-static {p0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p0

    invoke-direct {v0, v1, p0}, Landroid/content/Intent;-><init>(Ljava/lang/String;Landroid/net/Uri;)V

    const/high16 p0, 0x10000000

    invoke-virtual {v0, p0}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    sget-object p0, Lcom/customRobTop/BaseRobTopActivity;->me:Lcom/customRobTop/BaseRobTopActivity;

    invoke-virtual {p0, v0}, Lcom/customRobTop/BaseRobTopActivity;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public static loadingFinished()V
    .locals 1

    const/4 v0, 0x1

    sput-boolean v0, Lcom/customRobTop/BaseRobTopActivity;->isLoaded_:Z

    return-void
.end method

.method public static logEvent(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public static onNativePause()V
    .locals 0

    return-void
.end method

.method public static onNativeResume()V
    .locals 0

    return-void
.end method

.method public static onToggleKeyboard()V
    .locals 2

    sget-object v0, Lcom/customRobTop/BaseRobTopActivity;->me:Lcom/customRobTop/BaseRobTopActivity;

    new-instance v1, Lcom/customRobTop/BaseRobTopActivity$2;

    invoke-direct {v1}, Lcom/customRobTop/BaseRobTopActivity$2;-><init>()V

    invoke-virtual {v0, v1}, Lcom/customRobTop/BaseRobTopActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static openAppPage()V
    .locals 2

    sget-object v0, Lcom/customRobTop/BaseRobTopActivity;->me:Lcom/customRobTop/BaseRobTopActivity;

    new-instance v1, Lcom/customRobTop/BaseRobTopActivity$3;

    invoke-direct {v1}, Lcom/customRobTop/BaseRobTopActivity$3;-><init>()V

    invoke-virtual {v0, v1}, Lcom/customRobTop/BaseRobTopActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static openURL(Ljava/lang/String;)V
    .locals 2

    sget-object v0, Lcom/customRobTop/BaseRobTopActivity;->me:Lcom/customRobTop/BaseRobTopActivity;

    new-instance v1, Lcom/customRobTop/BaseRobTopActivity$$ExternalSyntheticLambda1;

    invoke-direct {v1, p0}, Lcom/customRobTop/BaseRobTopActivity$$ExternalSyntheticLambda1;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/customRobTop/BaseRobTopActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static pauseAds()V
    .locals 1

    sget-object v0, Lcom/customRobTop/BaseRobTopActivity;->me:Lcom/customRobTop/BaseRobTopActivity;

    invoke-virtual {v0}, Lcom/customRobTop/BaseRobTopActivity;->_pauseAds()V

    return-void
.end method

.method public static queueRefreshBanner()V
    .locals 0

    return-void
.end method

.method public static resumeAds()V
    .locals 1

    sget-object v0, Lcom/customRobTop/BaseRobTopActivity;->me:Lcom/customRobTop/BaseRobTopActivity;

    invoke-virtual {v0}, Lcom/customRobTop/BaseRobTopActivity;->_resumeAds()V

    return-void
.end method

.method public static sendMail(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    sget-object v0, Lcom/customRobTop/BaseRobTopActivity;->me:Lcom/customRobTop/BaseRobTopActivity;

    new-instance v1, Lcom/customRobTop/BaseRobTopActivity$5;

    invoke-direct {v1, p2, p0, p1}, Lcom/customRobTop/BaseRobTopActivity$5;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/customRobTop/BaseRobTopActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static setBlockBackButton(Z)V
    .locals 0

    sput-boolean p0, Lcom/customRobTop/BaseRobTopActivity;->blockBackButton_:Z

    return-void
.end method

.method public static setKeyboardState(Z)V
    .locals 0

    sput-boolean p0, Lcom/customRobTop/BaseRobTopActivity;->keyboardActive_:Z

    return-void
.end method

.method private setSystemUiVisilityMode()Landroid/view/View;
    .locals 2

    invoke-virtual {p0}, Lcom/customRobTop/BaseRobTopActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    const/16 v1, 0x1706

    invoke-virtual {v0, v1}, Landroid/view/View;->setSystemUiVisibility(I)V

    return-object v0
.end method

.method public static setupEveryplay()V
    .locals 0

    return-void
.end method

.method private setupMainWindowDisplayMode()V
    .locals 2

    invoke-direct {p0}, Lcom/customRobTop/BaseRobTopActivity;->setSystemUiVisilityMode()Landroid/view/View;

    move-result-object v0

    new-instance v1, Lcom/customRobTop/BaseRobTopActivity$1;

    invoke-direct {v1, p0}, Lcom/customRobTop/BaseRobTopActivity$1;-><init>(Lcom/customRobTop/BaseRobTopActivity;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnSystemUiVisibilityChangeListener(Landroid/view/View$OnSystemUiVisibilityChangeListener;)V

    return-void
.end method

.method public static shouldResumeSound()Z
    .locals 1

    sget-boolean v0, Lcom/customRobTop/BaseRobTopActivity;->shouldResumeSound_:Z

    return v0
.end method

.method public static showAchievements()V
    .locals 0

    return-void
.end method

.method public static showAdDebug()V
    .locals 1

    sget-object v0, Lcom/customRobTop/BaseRobTopActivity;->me:Lcom/customRobTop/BaseRobTopActivity;

    invoke-virtual {v0}, Lcom/customRobTop/BaseRobTopActivity;->_showAdDebug()V

    return-void
.end method

.method public static showInterstitial()V
    .locals 1

    sget-object v0, Lcom/customRobTop/BaseRobTopActivity;->me:Lcom/customRobTop/BaseRobTopActivity;

    invoke-virtual {v0}, Lcom/customRobTop/BaseRobTopActivity;->_showInterstitial()V

    return-void
.end method

.method public static showLeaderboards()V
    .locals 0

    return-void
.end method

.method public static showRewardedVideo()V
    .locals 1

    sget-object v0, Lcom/customRobTop/BaseRobTopActivity;->me:Lcom/customRobTop/BaseRobTopActivity;

    invoke-virtual {v0}, Lcom/customRobTop/BaseRobTopActivity;->_showRewardedVideo()V

    return-void
.end method

.method public static tryShowRateDialog(Ljava/lang/String;)V
    .locals 2

    sget-object v0, Lcom/customRobTop/BaseRobTopActivity;->me:Lcom/customRobTop/BaseRobTopActivity;

    new-instance v1, Lcom/customRobTop/BaseRobTopActivity$4;

    invoke-direct {v1, p0}, Lcom/customRobTop/BaseRobTopActivity$4;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/customRobTop/BaseRobTopActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static unlockAchievement(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public static updateTopScoreLeaderboard(I)V
    .locals 0

    return-void
.end method


# virtual methods
.method public _disableBanner()V
    .locals 0

    return-void
.end method

.method public _enableBanner()V
    .locals 0

    return-void
.end method

.method public _hasCachedInterstitial()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public _hasCachedRewardedVideo()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public _pauseAds()V
    .locals 0

    return-void
.end method

.method public _resumeAds()V
    .locals 0

    return-void
.end method

.method public _showAdDebug()V
    .locals 0

    return-void
.end method

.method public _showInterstitial()V
    .locals 0

    return-void
.end method

.method public _showRewardedVideo()V
    .locals 0

    return-void
.end method

.method public getPublicKey()Ljava/lang/String;
    .locals 1

    const-string v0, "MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAklRPrtot3mua6MYUJXkbGD65TmPoUgHjLKuh0SZ67brpqDwftbmzkzc/cE7hiLeMSG/lfYYdX2/jhkhv2OULo67NHgzsskpIOOIP3zB11d+4aH8XkDPB1yRjI+rwk1v/MeK/uilnPUbSF8XnmEvTNxq47r5xgeOrJKjdO3TG6S7IneHQo1vZNwv/HqHJ3RhgzmJW79xNf0GWbPmMjusUhdbOtZdt1DbcMJIaORzBgyU9MnSwy37ri7cOhNL+OLdzUp+keuk7Exi6XAUR9CMeQ5JXdrCk37FAog6LA7IpIEm+ZIFRqhhRVaQ6+KTcTqyNpvYIYh5bH772d3Ro3uVG+QIDAQAB"

    return-object v0
.end method

.method public onBackPressed()V
    .locals 0

    invoke-super {p0}, Lcom/customRobTop/DefaultRobTopActivity;->onBackPressed()V

    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 2

    invoke-virtual {p0}, Lcom/customRobTop/BaseRobTopActivity;->getApplication()Landroid/app/Application;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/Application;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    invoke-static {}, Landroid/os/Environment;->getExternalStorageDirectory()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    iget-object v0, v0, Landroid/content/pm/ApplicationInfo;->sourceDir:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/customRobTop/JniToCpp;->setupHSSAssets(Ljava/lang/String;Ljava/lang/String;)V

    invoke-super {p0, p1}, Lcom/customRobTop/DefaultRobTopActivity;->onCreate(Landroid/os/Bundle;)V

    sget-object p1, Lcom/customRobTop/BaseRobTopActivity;->me:Lcom/customRobTop/BaseRobTopActivity;

    if-nez p1, :cond_0

    invoke-static {p0}, Lcom/customRobTop/AppRater;->app_launched(Landroid/content/Context;)V

    :cond_0
    const/16 p1, 0xb

    invoke-virtual {p0, p1}, Lcom/customRobTop/BaseRobTopActivity;->setRequestedOrientation(I)V

    invoke-direct {p0}, Lcom/customRobTop/BaseRobTopActivity;->setupMainWindowDisplayMode()V

    sput-object p0, Lcom/customRobTop/BaseRobTopActivity;->me:Lcom/customRobTop/BaseRobTopActivity;

    return-void
.end method

.method protected onDestroy()V
    .locals 0

    invoke-super {p0}, Lcom/customRobTop/DefaultRobTopActivity;->onDestroy()V

    return-void
.end method

.method protected onPause()V
    .locals 1

    invoke-super {p0}, Lcom/customRobTop/DefaultRobTopActivity;->onPause()V

    const/4 v0, 0x1

    sput-boolean v0, Lcom/customRobTop/BaseRobTopActivity;->isPaused_:Z

    return-void
.end method

.method protected onResume()V
    .locals 1

    invoke-super {p0}, Lcom/customRobTop/DefaultRobTopActivity;->onResume()V

    invoke-virtual {p0}, Lcom/customRobTop/BaseRobTopActivity;->updateVisibilityMode()V

    const/4 v0, 0x0

    sput-boolean v0, Lcom/customRobTop/BaseRobTopActivity;->isPaused_:Z

    return-void
.end method

.method public onSignInFailed()V
    .locals 0

    return-void
.end method

.method public onSignInSucceeded()V
    .locals 0

    return-void
.end method

.method public onStart()V
    .locals 0

    invoke-super {p0}, Lcom/customRobTop/DefaultRobTopActivity;->onStart()V

    return-void
.end method

.method protected onStop()V
    .locals 0

    invoke-super {p0}, Lcom/customRobTop/DefaultRobTopActivity;->onStop()V

    return-void
.end method

.method public onWindowFocusChanged(Z)V
    .locals 0

    invoke-super {p0, p1}, Lcom/customRobTop/DefaultRobTopActivity;->onWindowFocusChanged(Z)V

    if-eqz p1, :cond_0

    invoke-virtual {p0}, Lcom/customRobTop/BaseRobTopActivity;->updateVisibilityMode()V

    :cond_0
    return-void
.end method

.method registerReceiver()V
    .locals 2

    sget-object v0, Lcom/customRobTop/BaseRobTopActivity;->receiver_:Landroid/content/BroadcastReceiver;

    if-eqz v0, :cond_0

    sget-object v1, Lcom/customRobTop/BaseRobTopActivity;->me:Lcom/customRobTop/BaseRobTopActivity;

    invoke-virtual {v1, v0}, Lcom/customRobTop/BaseRobTopActivity;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    const/4 v0, 0x0

    sput-object v0, Lcom/customRobTop/BaseRobTopActivity;->receiver_:Landroid/content/BroadcastReceiver;

    :cond_0
    :try_start_0
    new-instance v0, Landroid/content/IntentFilter;

    const-string v1, "android.intent.action.SCREEN_ON"

    invoke-direct {v0, v1}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    const-string v1, "android.intent.action.SCREEN_OFF"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v1, "android.intent.action.USER_PRESENT"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    new-instance v1, Lcom/customRobTop/BaseRobTopActivity$receiverScreen;

    invoke-direct {v1, p0}, Lcom/customRobTop/BaseRobTopActivity$receiverScreen;-><init>(Lcom/customRobTop/BaseRobTopActivity;)V

    sput-object v1, Lcom/customRobTop/BaseRobTopActivity;->receiver_:Landroid/content/BroadcastReceiver;

    invoke-virtual {p0, v1, v0}, Lcom/customRobTop/BaseRobTopActivity;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public updateVisibilityMode()V
    .locals 0

    invoke-direct {p0}, Lcom/customRobTop/BaseRobTopActivity;->setSystemUiVisilityMode()Landroid/view/View;

    return-void
.end method
