.class Lcom/hieudash/AdminPanel$UpdateResultRunnable;
.super Ljava/lang/Object;
.source "AdminPanel.java"

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic this$0:Lcom/hieudash/AdminPanel;

.field private val$text:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/hieudash/AdminPanel;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/hieudash/AdminPanel$UpdateResultRunnable;->this$0:Lcom/hieudash/AdminPanel;

    iput-object p2, p0, Lcom/hieudash/AdminPanel$UpdateResultRunnable;->val$text:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    iget-object v0, p0, Lcom/hieudash/AdminPanel$UpdateResultRunnable;->this$0:Lcom/hieudash/AdminPanel;

    iget-object v1, p0, Lcom/hieudash/AdminPanel$UpdateResultRunnable;->val$text:Ljava/lang/String;

    invoke-static {v0}, Lcom/hieudash/AdminPanel;->access$200(Lcom/hieudash/AdminPanel;)Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method
