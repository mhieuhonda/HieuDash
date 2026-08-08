.class Lcom/hieudash/AdminPanel$BanTask;
.super Ljava/lang/Object;
.source "AdminPanel.java"

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic this$0:Lcom/hieudash/AdminPanel;

.field private val$userId:I


# direct methods
.method constructor <init>(Lcom/hieudash/AdminPanel;I)V
    .locals 0

    iput-object p1, p0, Lcom/hieudash/AdminPanel$BanTask;->this$0:Lcom/hieudash/AdminPanel;

    iput p2, p0, Lcom/hieudash/AdminPanel$BanTask;->val$userId:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    iget v0, p0, Lcom/hieudash/AdminPanel$BanTask;->val$userId:I

    iget-object v1, p0, Lcom/hieudash/AdminPanel$BanTask;->this$0:Lcom/hieudash/AdminPanel;

    invoke-static {v1}, Lcom/hieudash/AdminPanel;->access$500(Lcom/hieudash/AdminPanel;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/hieudash/AdminPanel$BanTask;->this$0:Lcom/hieudash/AdminPanel;

    invoke-static {v2}, Lcom/hieudash/AdminPanel;->access$600(Lcom/hieudash/AdminPanel;)Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/hieudash/AdminPanel$BanTask;->this$0:Lcom/hieudash/AdminPanel;

    invoke-static {v3}, Lcom/hieudash/AdminPanel;->access$700(Lcom/hieudash/AdminPanel;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v1, v2, v3}, Lcom/hieudash/AdminAPI;->banUser(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/hieudash/AdminPanel$BanTask;->this$0:Lcom/hieudash/AdminPanel;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "Ban Result: "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/hieudash/AdminPanel;->access$800(Lcom/hieudash/AdminPanel;Ljava/lang/String;)V

    return-void
.end method
