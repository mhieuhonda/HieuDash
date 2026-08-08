.class public Lcom/hieudash/AutoLoginPopup;
.super Ljava/lang/Object;
.source "AutoLoginPopup.java"


# instance fields
.field private mContext:Landroid/content/Context;

.field private mDialog:Landroid/app/AlertDialog;

.field private mHandler:Landroid/os/Handler;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/hieudash/AutoLoginPopup;->mContext:Landroid/content/Context;

    # Create handler on main thread
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object p1

    invoke-direct {v0, p1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/hieudash/AutoLoginPopup;->mHandler:Landroid/os/Handler;

    return-void
.end method

# Hash password using SHA-256 with RobTop salt "mI29fmIx6x"
.method public static hashPassword(Ljava/lang/String;)Ljava/lang/String;
    .locals 7

    # Build salt + password string
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mI29fmIx6x"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    # Get SHA-256 MessageDigest
    const-string v1, "SHA-256"

    invoke-static {v1}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object v1

    # Convert string to bytes
    const-string v2, "UTF-8"

    invoke-virtual {v0, v2}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v2

    # Digest
    invoke-virtual {v1, v2}, Ljava/security/MessageDigest;->digest([B)[B

    move-result-object v1

    # Convert byte array to hex string
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    array-length v3, v1

    const/4 v4, 0x0

    :loop_start
    if-ge v4, v3, :loop_end

    aget-byte v5, v1, v4

    # Convert byte to int (unsigned)
    and-int/lit16 v5, v5, 0xff

    # Format as 2-digit hex
    invoke-static {v5}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v6

    # Pad with leading zero if needed
    invoke-virtual {v6}, Ljava/lang/String;->length()I

    move-result v5

    const/4 v0, 0x2

    if-ge v5, v0, :cond_no_pad

    const-string v5, "0"

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_no_pad
    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v4, v4, 0x1

    goto :loop_start

    :loop_end
    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

# Get device UDID
.method public static getUdid(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    :try_start
    # Get ContentResolver from Context
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    const-string v1, "android_id"

    invoke-static {v0, v1}, Landroid/provider/Settings$Secure;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_fallback

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v1

    if-lez v1, :cond_fallback

    return-object v0

    :cond_fallback
    :try_end
    .catch Ljava/lang/Exception; {:try_start .. :try_end} :catch_exception

    # Fallback: generate a random UDID from Settings.Secure or use a default
    const-string v0, "S000000000"

    return-object v0

    :catch_exception
    move-exception v0

    const-string v0, "S000000000"

    return-object v0
.end method

# Save account credentials to SharedPreferences
.method public static saveCredentials(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 3
    # p0 = context, p1 = userName, p2 = password, p3 = accountId, p4 = userId

    const-string v0, "HieuDashPrefs"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    const-string v1, "userName"

    invoke-interface {v0, v1, p1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    const-string v1, "password"

    invoke-interface {v0, v1, p2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    const-string v1, "accountId"

    invoke-interface {v0, v1, p3}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    const-string v1, "userId"

    invoke-interface {v0, v1, p4}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    const-string v1, "isLoggedIn"

    const/4 v2, 0x1

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    return-void
.end method


# virtual methods
.method public show()V
    .locals 4

    # Load language first
    iget-object v0, p0, Lcom/hieudash/AutoLoginPopup;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/hieudash/LanguageManager;->getLanguage(Landroid/content/Context;)I

    # Create AlertDialog.Builder
    new-instance v0, Landroid/app/AlertDialog$Builder;

    iget-object v1, p0, Lcom/hieudash/AutoLoginPopup;->mContext:Landroid/content/Context;

    invoke-direct {v0, v1}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    # Set title: "HieuDash"
    const-string v1, "HieuDash"

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    # Set message using LanguageManager
    const-string v1, "LoginPrompt"

    invoke-static {v1}, Lcom/hieudash/LanguageManager;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    # Set "Yes" button
    const-string v1, "Yes"

    invoke-static {v1}, Lcom/hieudash/LanguageManager;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/hieudash/AutoLoginPopup$1;

    invoke-direct {v2, p0}, Lcom/hieudash/AutoLoginPopup$1;-><init>(Lcom/hieudash/AutoLoginPopup;)V

    invoke-virtual {v0, v1, v2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    # Set "No" button
    const-string v1, "No"

    invoke-static {v1}, Lcom/hieudash/LanguageManager;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/hieudash/AutoLoginPopup$2;

    invoke-direct {v2, p0}, Lcom/hieudash/AutoLoginPopup$2;-><init>(Lcom/hieudash/AutoLoginPopup;)V

    invoke-virtual {v0, v1, v2}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    # Set not cancelable
    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    # Build and show dialog
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v1

    iput-object v1, p0, Lcom/hieudash/AutoLoginPopup;->mDialog:Landroid/app/AlertDialog;

    invoke-virtual {v1}, Landroid/app/AlertDialog;->show()V

    return-void
.end method

.method public doLogin()V
    .locals 2

    # Dismiss the dialog
    iget-object v0, p0, Lcom/hieudash/AutoLoginPopup;->mDialog:Landroid/app/AlertDialog;

    if-eqz v0, :cond_start_thread

    invoke-virtual {v0}, Landroid/app/AlertDialog;->dismiss()V

    :cond_start_thread
    # Start login thread
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/hieudash/AutoLoginPopup$3;

    invoke-direct {v1, p0}, Lcom/hieudash/AutoLoginPopup$3;-><init>(Lcom/hieudash/AutoLoginPopup;)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    return-void
.end method

.method public getContext()Landroid/content/Context;
    .locals 1

    iget-object v0, p0, Lcom/hieudash/AutoLoginPopup;->mContext:Landroid/content/Context;

    return-object v0
.end method

.method public getHandler()Landroid/os/Handler;
    .locals 1

    iget-object v0, p0, Lcom/hieudash/AutoLoginPopup;->mHandler:Landroid/os/Handler;

    return-object v0
.end method
