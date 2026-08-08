.class public Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;
.super Landroid/opengl/GLSurfaceView;
.source "Cocos2dxGLSurfaceView.java"


# static fields
.field private static final HANDLER_CLOSE_IME_KEYBOARD:I = 0x3

.field private static final HANDLER_OPEN_IME_KEYBOARD:I = 0x2

.field private static final TAG:Ljava/lang/String; = "Cocos2dxGLSurfaceView"

.field private static mCocos2dxGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

.field private static sCocos2dxTextInputWraper:Lorg/cocos2dx/lib/Cocos2dxTextInputWraper;

.field private static sHandler:Landroid/os/Handler;


# instance fields
.field private mCocos2dxEditText:Lorg/cocos2dx/lib/Cocos2dxEditText;

.field private mCocos2dxRenderer:Lorg/cocos2dx/lib/Cocos2dxRenderer;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0, p1}, Landroid/opengl/GLSurfaceView;-><init>(Landroid/content/Context;)V

    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->initView()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Landroid/opengl/GLSurfaceView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->initView()V

    return-void
.end method

.method static synthetic access$000(Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;)Lorg/cocos2dx/lib/Cocos2dxEditText;
    .locals 0

    iget-object p0, p0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->mCocos2dxEditText:Lorg/cocos2dx/lib/Cocos2dxEditText;

    return-object p0
.end method

.method static synthetic access$100()Lorg/cocos2dx/lib/Cocos2dxTextInputWraper;
    .locals 1

    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->sCocos2dxTextInputWraper:Lorg/cocos2dx/lib/Cocos2dxTextInputWraper;

    return-object v0
.end method

.method static synthetic access$200()Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;
    .locals 1

    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->mCocos2dxGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    return-object v0
.end method

.method static synthetic access$300(Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;)Lorg/cocos2dx/lib/Cocos2dxRenderer;
    .locals 0

    iget-object p0, p0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->mCocos2dxRenderer:Lorg/cocos2dx/lib/Cocos2dxRenderer;

    return-object p0
.end method

.method public static closeIMEKeyboard()V
    .locals 2

    new-instance v0, Landroid/os/Message;

    invoke-direct {v0}, Landroid/os/Message;-><init>()V

    const/4 v1, 0x3

    iput v1, v0, Landroid/os/Message;->what:I

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->sHandler:Landroid/os/Handler;

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method private static dumpMotionEvent(Landroid/view/MotionEvent;)V
    .locals 10

    const-string v8, "8?"

    const-string v9, "9?"

    const-string v0, "DOWN"

    const-string v1, "UP"

    const-string v2, "MOVE"

    const-string v3, "CANCEL"

    const-string v4, "OUTSIDE"

    const-string v5, "POINTER_DOWN"

    const-string v6, "POINTER_UP"

    const-string v7, "7?"

    filled-new-array/range {v0 .. v9}, [Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "event ACTION_"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Landroid/view/MotionEvent;->getAction()I

    move-result v2

    and-int/lit16 v3, v2, 0xff

    aget-object v0, v0, v3

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v0, 0x5

    const-string v4, "(pid "

    if-eq v3, v0, :cond_0

    const/4 v0, 0x6

    if-ne v3, v0, :cond_1

    :cond_0
    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    shr-int/lit8 v0, v2, 0x8

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, ")"

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1
    const-string v0, "["

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v0, 0x0

    :cond_2
    :goto_0
    invoke-virtual {p0}, Landroid/view/MotionEvent;->getPointerCount()I

    move-result v2

    if-ge v0, v2, :cond_3

    const-string v2, "#"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v0}, Landroid/view/MotionEvent;->getPointerId(I)I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ")="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v0}, Landroid/view/MotionEvent;->getX(I)F

    move-result v2

    float-to-int v2, v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ","

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v0}, Landroid/view/MotionEvent;->getY(I)F

    move-result v2

    float-to-int v2, v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    add-int/lit8 v0, v0, 0x1

    invoke-virtual {p0}, Landroid/view/MotionEvent;->getPointerCount()I

    move-result v2

    if-ge v0, v2, :cond_2

    const-string v2, ";"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    :cond_3
    const-string p0, "]"

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object p0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->TAG:Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method private getContentText()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->mCocos2dxRenderer:Lorg/cocos2dx/lib/Cocos2dxRenderer;

    invoke-virtual {v0}, Lorg/cocos2dx/lib/Cocos2dxRenderer;->getContentText()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getInstance()Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;
    .locals 1

    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->mCocos2dxGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    return-object v0
.end method

.method public static openIMEKeyboard()V
    .locals 2

    new-instance v0, Landroid/os/Message;

    invoke-direct {v0}, Landroid/os/Message;-><init>()V

    const/4 v1, 0x2

    iput v1, v0, Landroid/os/Message;->what:I

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->mCocos2dxGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    invoke-direct {v1}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->getContentText()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->sHandler:Landroid/os/Handler;

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method public static queueAccelerometer(FFFJ)V
    .locals 7

    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->mCocos2dxGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    new-instance v1, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$2;

    move v2, p0

    move v3, p1

    move v4, p2

    move-wide v5, p3

    invoke-direct/range {v1 .. v6}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$2;-><init>(FFFJ)V

    invoke-virtual {v0, v1}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->queueEvent(Ljava/lang/Runnable;)V

    return-void
.end method


# virtual methods
.method public deleteBackward()V
    .locals 1

    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$13;

    invoke-direct {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$13;-><init>(Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;)V

    invoke-virtual {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->queueEvent(Ljava/lang/Runnable;)V

    return-void
.end method

.method public getCocos2dxEditText()Lorg/cocos2dx/lib/Cocos2dxEditText;
    .locals 1

    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->mCocos2dxEditText:Lorg/cocos2dx/lib/Cocos2dxEditText;

    return-object v0
.end method

.method protected initView()V
    .locals 1

    const/4 v0, 0x2

    invoke-virtual {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->setEGLContextClientVersion(I)V

    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->setFocusableInTouchMode(Z)V

    invoke-virtual {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->setPreserveEGLContextOnPause(Z)V

    sput-object p0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->mCocos2dxGLSurfaceView:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxTextInputWraper;

    invoke-direct {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxTextInputWraper;-><init>(Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;)V

    sput-object v0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->sCocos2dxTextInputWraper:Lorg/cocos2dx/lib/Cocos2dxTextInputWraper;

    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$1;

    invoke-direct {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$1;-><init>(Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;)V

    sput-object v0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->sHandler:Landroid/os/Handler;

    return-void
.end method

.method public insertText(Ljava/lang/String;)V
    .locals 1

    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$12;

    invoke-direct {v0, p0, p1}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$12;-><init>(Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->queueEvent(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onKeyDown(ILandroid/view/KeyEvent;)Z
    .locals 1

    const/4 v0, 0x4

    if-eq p1, v0, :cond_0

    const/16 v0, 0x52

    if-eq p1, v0, :cond_0

    invoke-super {p0, p1, p2}, Landroid/opengl/GLSurfaceView;->onKeyDown(ILandroid/view/KeyEvent;)Z

    move-result p1

    return p1

    :cond_0
    invoke-virtual {p2}, Landroid/view/KeyEvent;->getRepeatCount()I

    move-result p2

    const/4 v0, 0x1

    if-eqz p2, :cond_1

    return v0

    :cond_1
    sget-boolean p2, Lcom/customRobTop/BaseRobTopActivity;->blockBackButton_:Z

    if-eqz p2, :cond_2

    return v0

    :cond_2
    new-instance p2, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$11;

    invoke-direct {p2, p0, p1}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$11;-><init>(Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;I)V

    invoke-virtual {p0, p2}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->queueEvent(Ljava/lang/Runnable;)V

    return v0
.end method

.method public onPause()V
    .locals 1

    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$4;

    invoke-direct {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$4;-><init>(Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;)V

    invoke-virtual {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->queueEvent(Ljava/lang/Runnable;)V

    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->setRenderMode(I)V

    return-void
.end method

.method public onResume()V
    .locals 1

    invoke-super {p0}, Landroid/opengl/GLSurfaceView;->onResume()V

    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->setRenderMode(I)V

    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$3;

    invoke-direct {v0, p0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$3;-><init>(Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;)V

    invoke-virtual {p0, v0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->queueEvent(Ljava/lang/Runnable;)V

    return-void
.end method

.method protected onSizeChanged(IIII)V
    .locals 0

    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->isInEditMode()Z

    move-result p3

    if-nez p3, :cond_0

    iget-object p3, p0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->mCocos2dxRenderer:Lorg/cocos2dx/lib/Cocos2dxRenderer;

    invoke-virtual {p3, p1, p2}, Lorg/cocos2dx/lib/Cocos2dxRenderer;->setScreenWidthAndHeight(II)V

    :cond_0
    return-void
.end method

.method public onTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 14

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getPointerCount()I

    move-result v0

    new-array v3, v0, [I

    new-array v4, v0, [F

    new-array v5, v0, [F

    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x22

    if-lt v1, v2, :cond_0

    invoke-static {p1}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$$ExternalSyntheticApiModelOutline0;->m(Landroid/view/MotionEvent;)J

    move-result-wide v1

    long-to-double v1, v1

    const-wide v6, 0x41cdcd6500000000L    # 1.0E9

    goto :goto_0

    :cond_0
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getEventTime()J

    move-result-wide v1

    long-to-double v1, v1

    const-wide v6, 0x408f400000000000L    # 1000.0

    :goto_0
    div-double/2addr v1, v6

    move-wide v11, v1

    const/4 v1, 0x0

    move v2, v1

    :goto_1
    if-ge v2, v0, :cond_1

    invoke-virtual {p1, v2}, Landroid/view/MotionEvent;->getPointerId(I)I

    move-result v6

    aput v6, v3, v2

    invoke-virtual {p1, v2}, Landroid/view/MotionEvent;->getX(I)F

    move-result v6

    aput v6, v4, v2

    invoke-virtual {p1, v2}, Landroid/view/MotionEvent;->getY(I)F

    move-result v6

    aput v6, v5, v2

    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    :cond_1
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getAction()I

    move-result v0

    and-int/lit16 v0, v0, 0xff

    const/4 v13, 0x1

    if-eqz v0, :cond_7

    if-eq v0, v13, :cond_6

    const/4 v1, 0x2

    if-eq v0, v1, :cond_5

    const/4 v1, 0x3

    if-eq v0, v1, :cond_4

    const/4 v1, 0x5

    if-eq v0, v1, :cond_3

    const/4 v1, 0x6

    if-eq v0, v1, :cond_2

    move-object v7, p0

    goto/16 :goto_2

    :cond_2
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getAction()I

    move-result v0

    shr-int/lit8 v0, v0, 0x8

    invoke-virtual {p1, v0}, Landroid/view/MotionEvent;->getPointerId(I)I

    move-result v8

    invoke-virtual {p1, v0}, Landroid/view/MotionEvent;->getX(I)F

    move-result v9

    invoke-virtual {p1, v0}, Landroid/view/MotionEvent;->getY(I)F

    move-result v10

    new-instance v6, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$8;

    move-object v7, p0

    invoke-direct/range {v6 .. v12}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$8;-><init>(Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;IFFD)V

    invoke-virtual {p0, v6}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->queueEvent(Ljava/lang/Runnable;)V

    goto :goto_2

    :cond_3
    move-object v7, p0

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getAction()I

    move-result v0

    shr-int/lit8 v0, v0, 0x8

    invoke-virtual {p1, v0}, Landroid/view/MotionEvent;->getPointerId(I)I

    move-result v8

    invoke-virtual {p1, v0}, Landroid/view/MotionEvent;->getX(I)F

    move-result v9

    invoke-virtual {p1, v0}, Landroid/view/MotionEvent;->getY(I)F

    move-result v10

    new-instance v6, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$5;

    invoke-direct/range {v6 .. v12}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$5;-><init>(Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;IFFD)V

    invoke-virtual {p0, v6}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->queueEvent(Ljava/lang/Runnable;)V

    goto :goto_2

    :cond_4
    move-object v7, p0

    new-instance v1, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$10;

    move-object v2, v7

    move-wide v6, v11

    invoke-direct/range {v1 .. v7}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$10;-><init>(Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;[I[F[FD)V

    move-object v7, v2

    invoke-virtual {p0, v1}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->queueEvent(Ljava/lang/Runnable;)V

    goto :goto_2

    :cond_5
    move-object v7, p0

    new-instance v1, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$7;

    move-object v2, v7

    move-wide v6, v11

    invoke-direct/range {v1 .. v7}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$7;-><init>(Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;[I[F[FD)V

    move-object v7, v2

    invoke-virtual {p0, v1}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->queueEvent(Ljava/lang/Runnable;)V

    goto :goto_2

    :cond_6
    move-object v7, p0

    invoke-virtual {p1, v1}, Landroid/view/MotionEvent;->getPointerId(I)I

    move-result v8

    aget v9, v4, v1

    aget v10, v5, v1

    new-instance v6, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$9;

    invoke-direct/range {v6 .. v12}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$9;-><init>(Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;IFFD)V

    invoke-virtual {p0, v6}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->queueEvent(Ljava/lang/Runnable;)V

    goto :goto_2

    :cond_7
    move-object v7, p0

    invoke-virtual {p1, v1}, Landroid/view/MotionEvent;->getPointerId(I)I

    move-result v8

    aget v9, v4, v1

    aget v10, v5, v1

    new-instance v6, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$6;

    invoke-direct/range {v6 .. v12}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$6;-><init>(Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;IFFD)V

    invoke-virtual {p0, v6}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->queueEvent(Ljava/lang/Runnable;)V

    :goto_2
    return v13
.end method

.method public setCocos2dxEditText(Lorg/cocos2dx/lib/Cocos2dxEditText;)V
    .locals 1

    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->mCocos2dxEditText:Lorg/cocos2dx/lib/Cocos2dxEditText;

    if-eqz p1, :cond_0

    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->sCocos2dxTextInputWraper:Lorg/cocos2dx/lib/Cocos2dxTextInputWraper;

    if-eqz v0, :cond_0

    invoke-virtual {p1, v0}, Lorg/cocos2dx/lib/Cocos2dxEditText;->setOnEditorActionListener(Landroid/widget/TextView$OnEditorActionListener;)V

    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->mCocos2dxEditText:Lorg/cocos2dx/lib/Cocos2dxEditText;

    invoke-virtual {p1, p0}, Lorg/cocos2dx/lib/Cocos2dxEditText;->setCocos2dxGLSurfaceView(Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;)V

    invoke-virtual {p0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->requestFocus()Z

    :cond_0
    return-void
.end method

.method public setCocos2dxRenderer(Lorg/cocos2dx/lib/Cocos2dxRenderer;)V
    .locals 0

    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->mCocos2dxRenderer:Lorg/cocos2dx/lib/Cocos2dxRenderer;

    invoke-virtual {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->setRenderer(Landroid/opengl/GLSurfaceView$Renderer;)V

    return-void
.end method
