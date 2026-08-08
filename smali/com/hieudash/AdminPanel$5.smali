.class Lcom/hieudash/AdminPanel$5;
.super Ljava/lang/Object;
.source "AdminPanel.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/hieudash/AdminPanel;->onCreate(Landroid/os/Bundle;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/hieudash/AdminPanel;


# direct methods
.method constructor <init>(Lcom/hieudash/AdminPanel;)V
    .locals 0

    iput-object p1, p0, Lcom/hieudash/AdminPanel$5;->this$0:Lcom/hieudash/AdminPanel;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 4

    # Delete Level button
    iget-object v0, p0, Lcom/hieudash/AdminPanel$5;->this$0:Lcom/hieudash/AdminPanel;

    invoke-static {v0}, Lcom/hieudash/AdminPanel;->access$300(Lcom/hieudash/AdminPanel;)Landroid/widget/EditText;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/hieudash/AdminAPI;->safeParseInt(Ljava/lang/String;)I

    move-result v1

    const/4 v2, -0x1

    if-ne v1, v2, :cond_0

    iget-object v0, p0, Lcom/hieudash/AdminPanel$5;->this$0:Lcom/hieudash/AdminPanel;

    invoke-static {v0}, Lcom/hieudash/AdminPanel;->access$200(Lcom/hieudash/AdminPanel;)Landroid/widget/TextView;

    move-result-object v0

    const-string v1, "Invalid Level ID"

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void

    :cond_0
    new-instance v2, Ljava/lang/Thread;

    new-instance v3, Lcom/hieudash/AdminPanel$DeleteTask;

    iget-object v0, p0, Lcom/hieudash/AdminPanel$5;->this$0:Lcom/hieudash/AdminPanel;

    invoke-direct {v3, v0, v1}, Lcom/hieudash/AdminPanel$DeleteTask;-><init>(Lcom/hieudash/AdminPanel;I)V

    invoke-direct {v2, v3}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    invoke-virtual {v2}, Ljava/lang/Thread;->start()V

    return-void
.end method
