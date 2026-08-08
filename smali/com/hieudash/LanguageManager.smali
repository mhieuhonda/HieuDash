.class public Lcom/hieudash/LanguageManager;
.super Ljava/lang/Object;
.source "LanguageManager.java"


# static fields
.field public static currentLanguage:I

.field private static vietnameseStrings:Ljava/util/HashMap;

.field private static initialized:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const/4 v0, 0x0

    sput v0, Lcom/hieudash/LanguageManager;->currentLanguage:I

    const/4 v0, 0x0

    sput-boolean v0, Lcom/hieudash/LanguageManager;->initialized:Z

    const/4 v0, 0x0

    sput-object v0, Lcom/hieudash/LanguageManager;->vietnameseStrings:Ljava/util/HashMap;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

# Sets the language and saves to SharedPreferences
.method public static setLanguage(Landroid/content/Context;I)V
    .locals 3

    # Save to static field
    sput p1, Lcom/hieudash/LanguageManager;->currentLanguage:I

    # Get SharedPreferences
    const-string v0, "HieuDashPrefs"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    # Get editor
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    # Put language value
    const-string v1, "language"

    sget v2, Lcom/hieudash/LanguageManager;->currentLanguage:I

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    # Apply
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    return-void
.end method

# Gets the language from SharedPreferences (default 0 = English)
.method public static getLanguage(Landroid/content/Context;)I
    .locals 3

    # Get SharedPreferences
    const-string v0, "HieuDashPrefs"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    # Read language with default 0
    const-string v1, "language"

    const/4 v2, 0x0

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v0

    # Update static field
    sput v0, Lcom/hieudash/LanguageManager;->currentLanguage:I

    # Return
    sget v0, Lcom/hieudash/LanguageManager;->currentLanguage:I

    return v0
.end method

# Returns true if current language is Vietnamese
.method public static isVietnamese()Z
    .locals 1

    sget v0, Lcom/hieudash/LanguageManager;->currentLanguage:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_false

    const/4 v0, 0x1

    return v0

    :cond_false
    const/4 v0, 0x0

    return v0
.end method

# Initializes the Vietnamese string map
.method private static initStrings()V
    .locals 3

    # Check if already initialized
    sget-boolean v0, Lcom/hieudash/LanguageManager;->initialized:Z

    if-nez v0, :cond_return

    # Create Vietnamese HashMap
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/hieudash/LanguageManager;->vietnameseStrings:Ljava/util/HashMap;

    sget-object v0, Lcom/hieudash/LanguageManager;->vietnameseStrings:Ljava/util/HashMap;

    # "Play" -> "Choi"
    const-string v1, "Play"

    const-string v2, "Ch\u01A1i"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Practice" -> "Luyen tap"
    const-string v1, "Practice"

    const-string v2, "Luy\u1EC7n t\u1EADp"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Options" -> "Tuy chon"
    const-string v1, "Options"

    const-string v2, "T\u00F9y ch\u1ECDn"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Creators" -> "Nguoi tao"
    const-string v1, "Creators"

    const-string v2, "Ng\u01B0\u1EDDi t\u1EA1o"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Search" -> "Tim kiem"
    const-string v1, "Search"

    const-string v2, "T\u00ECm ki\u1EBFm"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Featured" -> "Noi bat"
    const-string v1, "Featured"

    const-string v2, "N\u1ED5i b\u1EADt"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Recent" -> "Gan day"
    const-string v1, "Recent"

    const-string v2, "G\u1EA7n \u0111\u00E2y"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Magic" -> "Ma thuat"
    const-string v1, "Magic"

    const-string v2, "Ma thu\u1EADt"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Map Packs" -> "Goi ban do"
    const-string v1, "Map Packs"

    const-string v2, "G\u00F3i b\u1EA3n \u0111\u1ED3"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Daily" -> "Hang ngay"
    const-string v1, "Daily"

    const-string v2, "H\u00E0ng ng\u00E0y"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Weekly" -> "Hang tuan"
    const-string v1, "Weekly"

    const-string v2, "H\u00E0ng tu\u1EA7n"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Gauntlets" -> "Thu thach"
    const-string v1, "Gauntlets"

    const-string v2, "Th\u1EED th\u00E1ch"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Leaderboards" -> "Bang xep hang"
    const-string v1, "Leaderboards"

    const-string v2, "B\u1EA3ng x\u1EBFp h\u1EA1ng"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Achievements" -> "Thanh tich"
    const-string v1, "Achievements"

    const-string v2, "Th\u00E0nh t\u00EDch"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Save" -> "Luu"
    const-string v1, "Save"

    const-string v2, "L\u01B0u"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Load" -> "Tai"
    const-string v1, "Load"

    const-string v2, "T\u1EA3i"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Stats" -> "Thong ke"
    const-string v1, "Stats"

    const-string v2, "Th\u1ED1ng k\u00EA"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Messages" -> "Tin nhan"
    const-string v1, "Messages"

    const-string v2, "Tin nh\u1EAFn"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Friends" -> "Ban be"
    const-string v1, "Friends"

    const-string v2, "B\u1EA1n b\u00E8"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Settings" -> "Cai dat"
    const-string v1, "Settings"

    const-string v2, "C\u00E0i \u0111\u1EB7t"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Account" -> "Tai khoan"
    const-string v1, "Account"

    const-string v2, "T\u00E0i kho\u1EA3n"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "More" -> "Them"
    const-string v1, "More"

    const-string v2, "Th\u00EAm"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Close" -> "Dong"
    const-string v1, "Close"

    const-string v2, "\u0110\u00F3ng"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Cancel" -> "Huy"
    const-string v1, "Cancel"

    const-string v2, "H\u1EE7y"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "OK" -> "OK"
    const-string v1, "OK"

    const-string v2, "OK"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Yes" -> "Co"
    const-string v1, "Yes"

    const-string v2, "C\u00F3"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "No" -> "Khong"
    const-string v1, "No"

    const-string v2, "Kh\u00F4ng"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Login" -> "Dang nhap"
    const-string v1, "Login"

    const-string v2, "\u0110\u0103ng nh\u1EADp"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Register" -> "Dang ky"
    const-string v1, "Register"

    const-string v2, "\u0110\u0103ng k\u00FD"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Username" -> "Ten dang nhap"
    const-string v1, "Username"

    const-string v2, "T\u00EAn \u0111\u0103ng nh\u1EADp"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Password" -> "Mat khau"
    const-string v1, "Password"

    const-string v2, "M\u1EADt kh\u1EA9u"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Download" -> "Tai ve"
    const-string v1, "Download"

    const-string v2, "T\u1EA3i v\u1EC1"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Upload" -> "Tai len"
    const-string v1, "Upload"

    const-string v2, "T\u1EA3i l\u00EAn"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Like" -> "Thich"
    const-string v1, "Like"

    const-string v2, "Th\u00EDch"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Dislike" -> "Khong thich"
    const-string v1, "Dislike"

    const-string v2, "Kh\u00F4ng th\u00EDch"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Report" -> "Bao cao"
    const-string v1, "Report"

    const-string v2, "B\u00E1o c\u00E1o"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Delete" -> "Xoa"
    const-string v1, "Delete"

    const-string v2, "X\u00F3a"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Edit" -> "Sua"
    const-string v1, "Edit"

    const-string v2, "S\u1EEDa"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Refresh" -> "Lam moi"
    const-string v1, "Refresh"

    const-string v2, "L\u00E0m m\u1EDBi"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Restart" -> "Choi lai"
    const-string v1, "Restart"

    const-string v2, "Ch\u01A1i l\u1EA1i"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Pause" -> "Tam dung"
    const-string v1, "Pause"

    const-string v2, "T\u1EA1m d\u1EEBng"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Resume" -> "Tiep tuc"
    const-string v1, "Resume"

    const-string v2, "Ti\u1EBFp t\u1EE5c"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Quit" -> "Thoat"
    const-string v1, "Quit"

    const-string v2, "Tho\u00E1t"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Help" -> "Tro giup"
    const-string v1, "Help"

    const-string v2, "Tr\u1EE3 gi\u00FAp"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Language" -> "Ngon ngu"
    const-string v1, "Language"

    const-string v2, "Ng\u00F4n ng\u1EEF"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "English" -> "English"
    const-string v1, "English"

    const-string v2, "English"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Vietnamese" -> "Tieng Viet"
    const-string v1, "Vietnamese"

    const-string v2, "Ti\u1EBFng Vi\u1EC7t"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Admin Panel" -> "Bang quan tri"
    const-string v1, "Admin Panel"

    const-string v2, "B\u1EA3ng qu\u1EA3n tr\u1ECB"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Ban User" -> "Cam nguoi dung"
    const-string v1, "Ban User"

    const-string v2, "C\u1EA5m ng\u01B0\u1EDDi d\u00F9ng"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Unban User" -> "Bo cam nguoi dung"
    const-string v1, "Unban User"

    const-string v2, "B\u1ECF c\u1EA5m ng\u01B0\u1EDDi d\u00F9ng"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Rate Level" -> "Danh gia man choi"
    const-string v1, "Rate Level"

    const-string v2, "\u0110\u00E1nh gi\u00E1 m\u00E0n ch\u01A1i"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Feature Level" -> "Noi bat man choi"
    const-string v1, "Feature Level"

    const-string v2, "N\u1ED5i b\u1EADt m\u00E0n ch\u01A1i"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Delete Level" -> "Xoa man choi"
    const-string v1, "Delete Level"

    const-string v2, "X\u00F3a m\u00E0n ch\u01A1i"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Block User" -> "Chan nguoi dung"
    const-string v1, "Block User"

    const-string v2, "Ch\u1EB7n ng\u01B0\u1EDDi d\u00F9ng"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Leaderboard" -> "Bang xep hang"
    const-string v1, "Leaderboard"

    const-string v2, "B\u1EA3ng x\u1EBFp h\u1EA1ng"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "User Info" -> "Thong tin nguoi dung"
    const-string v1, "User Info"

    const-string v2, "Th\u00F4ng tin ng\u01B0\u1EDDi d\u00F9ng"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Server" -> "May chu"
    const-string v1, "Server"

    const-string v2, "M\u00E1y ch\u1EE7"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Connecting" -> "Dang ket noi"
    const-string v1, "Connecting"

    const-string v2, "\u0110ang k\u1EBFt n\u1ED1i"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Success" -> "Thanh cong"
    const-string v1, "Success"

    const-string v2, "Th\u00E0nh c\u00F4ng"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Failed" -> "That bai"
    const-string v1, "Failed"

    const-string v2, "Th\u1EA5t b\u1EA1i"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "Error" -> "Loi"
    const-string v1, "Error"

    const-string v2, "L\u1ED7i"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # "LoginPrompt" -> "Ban co muon dang nhap bang Hieu Louis khong?"
    const-string v1, "LoginPrompt"

    const-string v2, "B\u1EA1n c\u00F3 mu\u1ED1n \u0111\u0103ng nh\u1EADp b\u1EB1ng Hieu Louis kh\u00F4ng?"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    # Mark as initialized
    const/4 v0, 0x1

    sput-boolean v0, Lcom/hieudash/LanguageManager;->initialized:Z

    :cond_return
    return-void
.end method

# Gets the localized string for the given key
.method public static getString(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    # Ensure strings are initialized
    invoke-static {}, Lcom/hieudash/LanguageManager;->initStrings()V

    # If English, return the key itself
    sget v0, Lcom/hieudash/LanguageManager;->currentLanguage:I

    if-nez v0, :cond_vietnamese

    return-object p0

    :cond_vietnamese
    # Look up in Vietnamese map
    sget-object v0, Lcom/hieudash/LanguageManager;->vietnameseStrings:Ljava/util/HashMap;

    if-eqz v0, :cond_fallback

    invoke-virtual {v0, p0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_fallback

    check-cast v0, Ljava/lang/String;

    return-object v0

    :cond_fallback
    # Fallback to key (English)
    return-object p0
.end method
