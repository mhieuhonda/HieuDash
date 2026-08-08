.class Lcom/hieudash/AutoLoginPopup$1;
.super Ljava/lang/Object;
.source "AutoLoginPopup.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# instance fields
.field final synthetic this$0:Lcom/hieudash/AutoLoginPopup;


# direct methods
.method constructor <init>(Lcom/hieudash/AutoLoginPopup;)V
    .locals 0

    iput-object p1, p0, Lcom/hieudash/AutoLoginPopup$1;->this$0:Lcom/hieudash/AutoLoginPopup;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 1

    # Call doLogin on the AutoLoginPopup
    iget-object v0, p0, Lcom/hieudash/AutoLoginPopup$1;->this$0:Lcom/hieudash/AutoLoginPopup;

    invoke-virtual {v0}, Lcom/hieudash/AutoLoginPopup;->doLogin()V

    return-void
.end method
