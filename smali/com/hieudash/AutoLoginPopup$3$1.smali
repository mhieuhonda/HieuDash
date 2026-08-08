.class Lcom/hieudash/AutoLoginPopup$3$1;
.super Ljava/lang/Object;
.source "AutoLoginPopup.java"

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic this$1:Lcom/hieudash/AutoLoginPopup$3;

.field private final valMessage:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/hieudash/AutoLoginPopup$3;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/hieudash/AutoLoginPopup$3$1;->this$1:Lcom/hieudash/AutoLoginPopup$3;

    iput-object p2, p0, Lcom/hieudash/AutoLoginPopup$3$1;->valMessage:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    # Show Toast with the message
    iget-object v0, p0, Lcom/hieudash/AutoLoginPopup$3$1;->this$1:Lcom/hieudash/AutoLoginPopup$3;

    iget-object v0, v0, Lcom/hieudash/AutoLoginPopup$3;->this$0:Lcom/hieudash/AutoLoginPopup;

    invoke-virtual {v0}, Lcom/hieudash/AutoLoginPopup;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/hieudash/AutoLoginPopup$3$1;->valMessage:Ljava/lang/String;

    const/4 v2, 0x1

    invoke-static {v0, v1, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    return-void
.end method
