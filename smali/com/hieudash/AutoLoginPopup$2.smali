.class Lcom/hieudash/AutoLoginPopup$2;
.super Ljava/lang/Object;
.source "AutoLoginPopup.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# instance fields
.field final synthetic this$0:Lcom/hieudash/AutoLoginPopup;


# direct methods
.method constructor <init>(Lcom/hieudash/AutoLoginPopup;)V
    .locals 0

    iput-object p1, p0, Lcom/hieudash/AutoLoginPopup$2;->this$0:Lcom/hieudash/AutoLoginPopup;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 0

    # Just dismiss the dialog - continue without login
    invoke-interface {p1}, Landroid/content/DialogInterface;->dismiss()V

    return-void
.end method
