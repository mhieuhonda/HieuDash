.class public Lcom/hieudash/LanguageSettingsPopup;
.super Ljava/lang/Object;
.source "LanguageSettingsPopup.java"


# instance fields
.field private mContext:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/hieudash/LanguageSettingsPopup;->mContext:Landroid/content/Context;

    return-void
.end method


# virtual methods
.method public show()V
    .locals 5

    # Create AlertDialog.Builder
    new-instance v0, Landroid/app/AlertDialog$Builder;

    iget-object v1, p0, Lcom/hieudash/LanguageSettingsPopup;->mContext:Landroid/content/Context;

    invoke-direct {v0, v1}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    # Set title using LanguageManager
    const-string v1, "Language"

    invoke-static {v1}, Lcom/hieudash/LanguageManager;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    # Build options array: ["English", "Tieng Viet"]
    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/String;

    # Get localized "English" string
    const-string v2, "English"

    invoke-static {v2}, Lcom/hieudash/LanguageManager;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v1, v3

    # Get localized "Vietnamese" string
    const-string v2, "Vietnamese"

    invoke-static {v2}, Lcom/hieudash/LanguageManager;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x1

    aput-object v2, v1, v3

    # Create listener for item selection
    new-instance v2, Lcom/hieudash/LanguageSettingsPopup$1;

    invoke-direct {v2, p0}, Lcom/hieudash/LanguageSettingsPopup$1;-><init>(Lcom/hieudash/LanguageSettingsPopup;)V

    # Set single choice items
    # Get current language for checked item
    invoke-static {}, Lcom/hieudash/LanguageManager;->isVietnamese()Z

    move-result v3

    if-eqz v3, :cond_english

    const/4 v3, 0x1

    goto :cond_set_items

    :cond_english
    const/4 v3, 0x0

    :cond_set_items
    invoke-virtual {v0, v1, v3, v2}, Landroid/app/AlertDialog$Builder;->setSingleChoiceItems([Ljava/lang/CharSequence;ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    # Set positive button (OK/Close)
    const-string v1, "OK"

    invoke-static {v1}, Lcom/hieudash/LanguageManager;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/hieudash/LanguageSettingsPopup$2;

    invoke-direct {v2, p0}, Lcom/hieudash/LanguageSettingsPopup$2;-><init>(Lcom/hieudash/LanguageSettingsPopup;)V

    invoke-virtual {v0, v1, v2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    # SetCancelable
    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    # Show the dialog
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->show()Landroid/app/AlertDialog;

    return-void
.end method

.method public getContext()Landroid/content/Context;
    .locals 1

    iget-object v0, p0, Lcom/hieudash/LanguageSettingsPopup;->mContext:Landroid/content/Context;

    return-object v0
.end method
