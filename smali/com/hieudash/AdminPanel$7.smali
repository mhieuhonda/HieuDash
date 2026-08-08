.class Lcom/hieudash/AdminPanel$7;
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

    iput-object p1, p0, Lcom/hieudash/AdminPanel$7;->this$0:Lcom/hieudash/AdminPanel;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 3

    # Leaderboard / Update Score button - fetch leaderboard type 0 (top 100)
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/hieudash/AdminPanel$LeaderboardTask;

    iget-object v2, p0, Lcom/hieudash/AdminPanel$7;->this$0:Lcom/hieudash/AdminPanel;

    invoke-direct {v1, v2}, Lcom/hieudash/AdminPanel$LeaderboardTask;-><init>(Lcom/hieudash/AdminPanel;)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    return-void
.end method
