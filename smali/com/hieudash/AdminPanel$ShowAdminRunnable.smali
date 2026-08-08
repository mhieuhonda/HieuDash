.class Lcom/hieudash/AdminPanel$ShowAdminRunnable;
.super Ljava/lang/Object;
.source "AdminPanel.java"

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field private final mActivity:Landroid/app/Activity;


# direct methods
.method constructor <init>(Landroid/app/Activity;)V
    .locals 0

    iput-object p1, p0, Lcom/hieudash/AdminPanel$ShowAdminRunnable;->mActivity:Landroid/app/Activity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 5

    # Get credentials from SharedPreferences
    iget-object v0, p0, Lcom/hieudash/AdminPanel$ShowAdminRunnable;->mActivity:Landroid/app/Activity;

    const-string v1, "HieuDashPrefs"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    # Get udid
    const-string v1, "udid"

    const-string v2, ""

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    # Get accountId
    const-string v3, "accountId"

    invoke-interface {v0, v3, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    # Get gjp (hashed password)
    const-string v4, "gjp"

    invoke-interface {v0, v4, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    # Show the admin panel
    iget-object v0, p0, Lcom/hieudash/AdminPanel$ShowAdminRunnable;->mActivity:Landroid/app/Activity;

    invoke-static {v0, v1, v3, v4}, Lcom/hieudash/AdminPanel;->show(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
