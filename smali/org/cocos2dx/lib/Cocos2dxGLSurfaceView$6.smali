.class Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$6;
.super Ljava/lang/Object;
.source "Cocos2dxGLSurfaceView.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->onTouchEvent(Landroid/view/MotionEvent;)Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

.field final synthetic val$idDown:I

.field final synthetic val$timestampSeconds:D

.field final synthetic val$xDown:F

.field final synthetic val$yDown:F


# direct methods
.method constructor <init>(Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;IFFD)V
    .locals 0
    .annotation system Ldalvik/annotation/MethodParameters;
        accessFlags = {
            0x8010,
            0x1010,
            0x1010,
            0x1010,
            0x1010
        }
        names = {
            null,
            null,
            null,
            null,
            null
        }
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$6;->this$0:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    iput p2, p0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$6;->val$idDown:I

    iput p3, p0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$6;->val$xDown:F

    iput p4, p0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$6;->val$yDown:F

    iput-wide p5, p0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$6;->val$timestampSeconds:D

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 7

    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$6;->this$0:Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;

    invoke-static {v0}, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;->access$300(Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;)Lorg/cocos2dx/lib/Cocos2dxRenderer;

    move-result-object v1

    iget v2, p0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$6;->val$idDown:I

    iget v3, p0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$6;->val$xDown:F

    iget v4, p0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$6;->val$yDown:F

    iget-wide v5, p0, Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView$6;->val$timestampSeconds:D

    invoke-virtual/range {v1 .. v6}, Lorg/cocos2dx/lib/Cocos2dxRenderer;->handleActionDown(IFFD)V

    return-void
.end method
