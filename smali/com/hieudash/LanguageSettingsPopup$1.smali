.class Lcom/hieudash/LanguageSettingsPopup$1;
.super Ljava/lang/Object;
.source "LanguageSettingsPopup.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# instance fields
.field final synthetic this$0:Lcom/hieudash/LanguageSettingsPopup;


# direct methods
.method constructor <init>(Lcom/hieudash/LanguageSettingsPopup;)V
    .locals 0

    iput-object p1, p0, Lcom/hieudash/LanguageSettingsPopup$1;->this$0:Lcom/hieudash/LanguageSettingsPopup;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 3

    # p2 = which item was selected (0 = English, 1 = Vietnamese)
    # Get context and set language
    iget-object v0, p0, Lcom/hieudash/LanguageSettingsPopup$1;->this$0:Lcom/hieudash/LanguageSettingsPopup;

    invoke-virtual {v0}, Lcom/hieudash/LanguageSettingsPopup;->getContext()Landroid/content/Context;

    move-result-object v0

    # Set language based on selection
    invoke-static {v0, p2}, Lcom/hieudash/LanguageManager;->setLanguage(Landroid/content/Context;I)V

    return-void
.end method
