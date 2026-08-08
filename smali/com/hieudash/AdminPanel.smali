.class public Lcom/hieudash/AdminPanel;
.super Landroid/app/Dialog;
.source "AdminPanel.java"


# instance fields
.field private mResultText:Landroid/widget/TextView;

.field private mUserIdInput:Landroid/widget/EditText;

.field private mLevelIdInput:Landroid/widget/EditText;

.field private mStarsInput:Landroid/widget/EditText;

.field private mUdid:Ljava/lang/String;

.field private mAccountId:Ljava/lang/String;

.field private mGjp:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    const v0, 0x1030011

    invoke-direct {p0, p1, v0}, Landroid/app/Dialog;-><init>(Landroid/content/Context;I)V

    iput-object p2, p0, Lcom/hieudash/AdminPanel;->mUdid:Ljava/lang/String;

    iput-object p3, p0, Lcom/hieudash/AdminPanel;->mAccountId:Ljava/lang/String;

    iput-object p4, p0, Lcom/hieudash/AdminPanel;->mGjp:Ljava/lang/String;

    return-void
.end method

# Synthetic access method: access$000 - not used, placeholder
.method static synthetic access$000(Lcom/hieudash/AdminPanel;)Landroid/widget/TextView;
    .locals 0

    iget-object p0, p0, Lcom/hieudash/AdminPanel;->mResultText:Landroid/widget/TextView;

    return-object p0
.end method

# access$100 - getUserIdInput
.method static synthetic access$100(Lcom/hieudash/AdminPanel;)Landroid/widget/EditText;
    .locals 0

    iget-object p0, p0, Lcom/hieudash/AdminPanel;->mUserIdInput:Landroid/widget/EditText;

    return-object p0
.end method

# access$200 - getResultText
.method static synthetic access$200(Lcom/hieudash/AdminPanel;)Landroid/widget/TextView;
    .locals 0

    iget-object p0, p0, Lcom/hieudash/AdminPanel;->mResultText:Landroid/widget/TextView;

    return-object p0
.end method

# access$300 - getLevelIdInput
.method static synthetic access$300(Lcom/hieudash/AdminPanel;)Landroid/widget/EditText;
    .locals 0

    iget-object p0, p0, Lcom/hieudash/AdminPanel;->mLevelIdInput:Landroid/widget/EditText;

    return-object p0
.end method

# access$400 - getStarsInput
.method static synthetic access$400(Lcom/hieudash/AdminPanel;)Landroid/widget/EditText;
    .locals 0

    iget-object p0, p0, Lcom/hieudash/AdminPanel;->mStarsInput:Landroid/widget/EditText;

    return-object p0
.end method

# access$500 - getUdid
.method static synthetic access$500(Lcom/hieudash/AdminPanel;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/hieudash/AdminPanel;->mUdid:Ljava/lang/String;

    return-object p0
.end method

# access$600 - getAccountId
.method static synthetic access$600(Lcom/hieudash/AdminPanel;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/hieudash/AdminPanel;->mAccountId:Ljava/lang/String;

    return-object p0
.end method

# access$700 - getGjp
.method static synthetic access$700(Lcom/hieudash/AdminPanel;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/hieudash/AdminPanel;->mGjp:Ljava/lang/String;

    return-object p0
.end method

# access$800 - updateResultText (runs on UI thread)
.method static synthetic access$800(Lcom/hieudash/AdminPanel;Ljava/lang/String;)V
    .locals 2

    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    new-instance v1, Lcom/hieudash/AdminPanel$UpdateResultRunnable;

    invoke-direct {v1, p0, p1}, Lcom/hieudash/AdminPanel$UpdateResultRunnable;-><init>(Lcom/hieudash/AdminPanel;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 14

    invoke-super {p0, p1}, Landroid/app/Dialog;->onCreate(Landroid/os/Bundle;)V

    # Set window background to transparent
    invoke-virtual {p0}, Lcom/hieudash/AdminPanel;->getWindow()Landroid/view/Window;

    move-result-object v0

    new-instance v1, Landroid/graphics/drawable/ColorDrawable;

    const v2, 0x80000000

    invoke-direct {v1, v2}, Landroid/graphics/drawable/ColorDrawable;-><init>(I)V

    invoke-virtual {v0, v1}, Landroid/view/Window;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    # Create main ScrollView
    new-instance v0, Landroid/widget/ScrollView;

    invoke-virtual {p0}, Lcom/hieudash/AdminPanel;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v0, v2}, Landroid/widget/ScrollView;-><init>(Landroid/content/Context;)V

    # Create main LinearLayout (vertical)
    new-instance v1, Landroid/widget/LinearLayout;

    invoke-virtual {p0}, Lcom/hieudash/AdminPanel;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Landroid/widget/LinearLayout;->setOrientation(I)V

    const/16 v3, 0x10

    invoke-virtual {v1, v3, v3, v3, v3}, Landroid/widget/LinearLayout;->setPadding(IIII)V

    # === TITLE ===
    new-instance v4, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/hieudash/AdminPanel;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v4, v5}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    const-string v5, "=== HieuDash Admin Panel ==="

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const/high16 v5, 0x41800000    # 16.0f

    invoke-virtual {v4, v2, v5}, Landroid/widget/TextView;->setTextSize(IF)V

    const/16 v5, -0x100

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setTextColor(I)V

    const/4 v5, 0x1

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setGravity(I)V

    invoke-virtual {v1, v4}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    # === USER ID INPUT ===
    new-instance v4, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/hieudash/AdminPanel;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v4, v5}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    const-string v5, "User ID:"

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const v5, -0x1000000

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setTextColor(I)V

    invoke-virtual {v1, v4}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    new-instance v4, Landroid/widget/EditText;

    invoke-virtual {p0}, Lcom/hieudash/AdminPanel;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v4, v5}, Landroid/widget/EditText;-><init>(Landroid/content/Context;)V

    iput-object v4, p0, Lcom/hieudash/AdminPanel;->mUserIdInput:Landroid/widget/EditText;

    const-string v5, "Enter User ID"

    invoke-virtual {v4, v5}, Landroid/widget/EditText;->setHint(Ljava/lang/CharSequence;)V

    const/4 v5, 0x2

    invoke-virtual {v4, v5}, Landroid/widget/EditText;->setInputType(I)V

    invoke-virtual {v1, v4}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    # === LEVEL ID INPUT ===
    new-instance v4, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/hieudash/AdminPanel;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v4, v5}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    const-string v5, "Level ID:"

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const v5, -0x1000000

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setTextColor(I)V

    invoke-virtual {v1, v4}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    new-instance v4, Landroid/widget/EditText;

    invoke-virtual {p0}, Lcom/hieudash/AdminPanel;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v4, v5}, Landroid/widget/EditText;-><init>(Landroid/content/Context;)V

    iput-object v4, p0, Lcom/hieudash/AdminPanel;->mLevelIdInput:Landroid/widget/EditText;

    const-string v5, "Enter Level ID"

    invoke-virtual {v4, v5}, Landroid/widget/EditText;->setHint(Ljava/lang/CharSequence;)V

    const/4 v5, 0x2

    invoke-virtual {v4, v5}, Landroid/widget/EditText;->setInputType(I)V

    invoke-virtual {v1, v4}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    # === STARS INPUT ===
    new-instance v4, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/hieudash/AdminPanel;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v4, v5}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    const-string v5, "Stars (for rating):"

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const v5, -0x1000000

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setTextColor(I)V

    invoke-virtual {v1, v4}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    new-instance v4, Landroid/widget/EditText;

    invoke-virtual {p0}, Lcom/hieudash/AdminPanel;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v4, v5}, Landroid/widget/EditText;-><init>(Landroid/content/Context;)V

    iput-object v4, p0, Lcom/hieudash/AdminPanel;->mStarsInput:Landroid/widget/EditText;

    const-string v5, "Enter Stars (1-10)"

    invoke-virtual {v4, v5}, Landroid/widget/EditText;->setHint(Ljava/lang/CharSequence;)V

    const/4 v5, 0x2

    invoke-virtual {v4, v5}, Landroid/widget/EditText;->setInputType(I)V

    invoke-virtual {v1, v4}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    # === SECTION: User Management ===
    new-instance v4, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/hieudash/AdminPanel;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v4, v5}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    const-string v5, "--- User Management ---"

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const v5, -0x10000

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setTextColor(I)V

    invoke-virtual {v1, v4}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    # Ban User Button
    new-instance v4, Landroid/widget/Button;

    invoke-virtual {p0}, Lcom/hieudash/AdminPanel;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v4, v5}, Landroid/widget/Button;-><init>(Landroid/content/Context;)V

    const-string v5, "Ban User"

    invoke-virtual {v4, v5}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    new-instance v5, Lcom/hieudash/AdminPanel$1;

    invoke-direct {v5, p0}, Lcom/hieudash/AdminPanel$1;-><init>(Lcom/hieudash/AdminPanel;)V

    invoke-virtual {v4, v5}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    invoke-virtual {v1, v4}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    # Unban User Button
    new-instance v4, Landroid/widget/Button;

    invoke-virtual {p0}, Lcom/hieudash/AdminPanel;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v4, v5}, Landroid/widget/Button;-><init>(Landroid/content/Context;)V

    const-string v5, "Unban User"

    invoke-virtual {v4, v5}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    new-instance v5, Lcom/hieudash/AdminPanel$2;

    invoke-direct {v5, p0}, Lcom/hieudash/AdminPanel$2;-><init>(Lcom/hieudash/AdminPanel;)V

    invoke-virtual {v4, v5}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    invoke-virtual {v1, v4}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    # View User Info Button
    new-instance v4, Landroid/widget/Button;

    invoke-virtual {p0}, Lcom/hieudash/AdminPanel;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v4, v5}, Landroid/widget/Button;-><init>(Landroid/content/Context;)V

    const-string v5, "View User Info"

    invoke-virtual {v4, v5}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    new-instance v5, Lcom/hieudash/AdminPanel$6;

    invoke-direct {v5, p0}, Lcom/hieudash/AdminPanel$6;-><init>(Lcom/hieudash/AdminPanel;)V

    invoke-virtual {v4, v5}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    invoke-virtual {v1, v4}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    # === SECTION: Level Management ===
    new-instance v4, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/hieudash/AdminPanel;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v4, v5}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    const-string v5, "--- Level Management ---"

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const v5, -0x10000

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setTextColor(I)V

    invoke-virtual {v1, v4}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    # Rate Level Button
    new-instance v4, Landroid/widget/Button;

    invoke-virtual {p0}, Lcom/hieudash/AdminPanel;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v4, v5}, Landroid/widget/Button;-><init>(Landroid/content/Context;)V

    const-string v5, "Rate Level (Admin)"

    invoke-virtual {v4, v5}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    new-instance v5, Lcom/hieudash/AdminPanel$3;

    invoke-direct {v5, p0}, Lcom/hieudash/AdminPanel$3;-><init>(Lcom/hieudash/AdminPanel;)V

    invoke-virtual {v4, v5}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    invoke-virtual {v1, v4}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    # Feature Level Button
    new-instance v4, Landroid/widget/Button;

    invoke-virtual {p0}, Lcom/hieudash/AdminPanel;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v4, v5}, Landroid/widget/Button;-><init>(Landroid/content/Context;)V

    const-string v5, "Feature Level"

    invoke-virtual {v4, v5}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    new-instance v5, Lcom/hieudash/AdminPanel$4;

    invoke-direct {v5, p0}, Lcom/hieudash/AdminPanel$4;-><init>(Lcom/hieudash/AdminPanel;)V

    invoke-virtual {v4, v5}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    invoke-virtual {v1, v4}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    # Delete Level Button
    new-instance v4, Landroid/widget/Button;

    invoke-virtual {p0}, Lcom/hieudash/AdminPanel;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v4, v5}, Landroid/widget/Button;-><init>(Landroid/content/Context;)V

    const-string v5, "Delete Level"

    invoke-virtual {v4, v5}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    new-instance v5, Lcom/hieudash/AdminPanel$5;

    invoke-direct {v5, p0}, Lcom/hieudash/AdminPanel$5;-><init>(Lcom/hieudash/AdminPanel;)V

    invoke-virtual {v4, v5}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    invoke-virtual {v1, v4}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    # === SECTION: Leaderboard ===
    new-instance v4, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/hieudash/AdminPanel;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v4, v5}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    const-string v5, "--- Leaderboard ---"

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const v5, -0x10000

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setTextColor(I)V

    invoke-virtual {v1, v4}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    # View Leaderboard Button
    new-instance v4, Landroid/widget/Button;

    invoke-virtual {p0}, Lcom/hieudash/AdminPanel;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v4, v5}, Landroid/widget/Button;-><init>(Landroid/content/Context;)V

    const-string v5, "View Leaderboard"

    invoke-virtual {v4, v5}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    new-instance v5, Lcom/hieudash/AdminPanel$7;

    invoke-direct {v5, p0}, Lcom/hieudash/AdminPanel$7;-><init>(Lcom/hieudash/AdminPanel;)V

    invoke-virtual {v4, v5}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    invoke-virtual {v1, v4}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    # === SECTION: Account ===
    new-instance v4, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/hieudash/AdminPanel;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v4, v5}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    const-string v5, "--- Account ---"

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const v5, -0x10000

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setTextColor(I)V

    invoke-virtual {v1, v4}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    # Account info label
    new-instance v4, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/hieudash/AdminPanel;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v4, v5}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    new-instance v5, Ljava/lang/StringBuilder;

    const-string v6, "Account ID: "

    invoke-direct {v5, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v6, p0, Lcom/hieudash/AdminPanel;->mAccountId:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const v5, -0x1000000

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setTextColor(I)V

    invoke-virtual {v1, v4}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    # === RESULT TEXT VIEW ===
    new-instance v4, Landroid/widget/TextView;

    invoke-virtual {p0}, Lcom/hieudash/AdminPanel;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v4, v5}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object v4, p0, Lcom/hieudash/AdminPanel;->mResultText:Landroid/widget/TextView;

    const-string v5, "Ready."

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const/high16 v5, 0x41400000    # 12.0f

    const/4 v6, 0x2

    invoke-virtual {v4, v6, v5}, Landroid/widget/TextView;->setTextSize(IF)V

    const v5, -0x1000000

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setTextColor(I)V

    invoke-virtual {v1, v4}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    # === CLOSE BUTTON ===
    new-instance v4, Landroid/widget/Button;

    invoke-virtual {p0}, Lcom/hieudash/AdminPanel;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v4, v5}, Landroid/widget/Button;-><init>(Landroid/content/Context;)V

    const-string v5, "CLOSE ADMIN PANEL"

    invoke-virtual {v4, v5}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    new-instance v5, Lcom/hieudash/AdminPanel$8;

    invoke-direct {v5, p0}, Lcom/hieudash/AdminPanel$8;-><init>(Lcom/hieudash/AdminPanel;)V

    invoke-virtual {v4, v5}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    invoke-virtual {v1, v4}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    # Add linear layout to scroll view
    invoke-virtual {v0, v1}, Landroid/widget/ScrollView;->addView(Landroid/view/View;)V

    # Set content view
    new-instance v4, Landroid/view/ViewGroup$LayoutParams;

    const/4 v5, -0x1

    const/4 v6, -0x2

    invoke-direct {v4, v5, v6}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {p0, v0, v4}, Lcom/hieudash/AdminPanel;->setContentView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    # Set dialog to be cancelable
    const/4 v4, 0x1

    invoke-virtual {p0, v4}, Lcom/hieudash/AdminPanel;->setCancelable(Z)V

    return-void
.end method

# Public static method to show admin panel from an Activity context
.method public static show(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    new-instance v0, Lcom/hieudash/AdminPanel;

    invoke-direct {v0, p0, p1, p2, p3}, Lcom/hieudash/AdminPanel;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0}, Landroid/app/Dialog;->show()V

    return-void
.end method
