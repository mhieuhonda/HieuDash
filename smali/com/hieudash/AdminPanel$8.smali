.class Lcom/hieudash/AdminPanel$8;
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

    iput-object p1, p0, Lcom/hieudash/AdminPanel$8;->this$0:Lcom/hieudash/AdminPanel;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 1

    # Close button - dismiss the dialog
    iget-object v0, p0, Lcom/hieudash/AdminPanel$8;->this$0:Lcom/hieudash/AdminPanel;

    invoke-virtual {v0}, Landroid/app/Dialog;->dismiss()V

    return-void
.end method
