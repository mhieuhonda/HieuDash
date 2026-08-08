.class Lcom/hieudash/LanguageSettingsPopup$2;
.super Ljava/lang/Object;
.source "LanguageSettingsPopup.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# instance fields
.field final synthetic this$0:Lcom/hieudash/LanguageSettingsPopup;


# direct methods
.method constructor <init>(Lcom/hieudash/LanguageSettingsPopup;)V
    .locals 0

    iput-object p1, p0, Lcom/hieudash/LanguageSettingsPopup$2;->this$0:Lcom/hieudash/LanguageSettingsPopup;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 0

    # Dismiss the dialog
    invoke-interface {p1}, Landroid/content/DialogInterface;->dismiss()V

    return-void
.end method
