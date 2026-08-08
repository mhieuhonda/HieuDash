.class Lcom/hieudash/AdminPanel$3;
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

    iput-object p1, p0, Lcom/hieudash/AdminPanel$3;->this$0:Lcom/hieudash/AdminPanel;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 4

    # Rate Level button: reads levelId, stars, difficulty from input fields
    iget-object v0, p0, Lcom/hieudash/AdminPanel$3;->this$0:Lcom/hieudash/AdminPanel;

    invoke-static {v0}, Lcom/hieudash/AdminPanel;->access$300(Lcom/hieudash/AdminPanel;)Landroid/widget/EditText;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/hieudash/AdminAPI;->safeParseInt(Ljava/lang/String;)I

    move-result v1

    iget-object v0, p0, Lcom/hieudash/AdminPanel$3;->this$0:Lcom/hieudash/AdminPanel;

    invoke-static {v0}, Lcom/hieudash/AdminPanel;->access$400(Lcom/hieudash/AdminPanel;)Landroid/widget/EditText;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/hieudash/AdminAPI;->safeParseInt(Ljava/lang/String;)I

    move-result v2

    new-instance v0, Ljava/lang/Thread;

    new-instance v3, Lcom/hieudash/AdminPanel$RateTask;

    iget-object v0, p0, Lcom/hieudash/AdminPanel$3;->this$0:Lcom/hieudash/AdminPanel;

    invoke-direct {v3, v0, v1, v2}, Lcom/hieudash/AdminPanel$RateTask;-><init>(Lcom/hieudash/AdminPanel;II)V

    new-instance v0, Ljava/lang/Thread;

    invoke-direct {v0, v3}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    return-void
.end method
