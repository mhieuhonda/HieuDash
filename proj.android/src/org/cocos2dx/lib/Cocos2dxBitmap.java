package org.cocos2dx.lib;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Paint;
import android.graphics.Typeface;
import android.util.Log;
import com.flurry.org.codehaus.jackson.impl.JsonWriteContext;
import com.flurry.org.codehaus.jackson.util.MinimalPrettyPrinter;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.util.LinkedList;

/* loaded from: classes.dex */
public class Cocos2dxBitmap {
    private static final int HALIGNCENTER = 3;
    private static final int HALIGNLEFT = 1;
    private static final int HALIGNRIGHT = 2;
    private static final int VALIGNBOTTOM = 2;
    private static final int VALIGNCENTER = 3;
    private static final int VALIGNTOP = 1;
    private static Context context;

    private static c computeTextProperty(String str, Paint paint, int i, int i2) {
        Paint.FontMetricsInt fontMetricsInt = paint.getFontMetricsInt();
        int ceil = (int) Math.ceil(fontMetricsInt.bottom - fontMetricsInt.top);
        String[] splitString = splitString(str, i2, i, paint);
        if (i == 0) {
            int length = splitString.length;
            int i3 = 0;
            int i4 = 0;
            while (i3 < length) {
                String str2 = splitString[i3];
                int ceil2 = (int) Math.ceil(paint.measureText(str2, 0, str2.length()));
                if (ceil2 <= i4) {
                    ceil2 = i4;
                }
                i3++;
                i4 = ceil2;
            }
            i = i4;
        }
        return new c(i, ceil, splitString);
    }

    private static int computeX(Paint paint, String str, int i, int i2) {
        switch (i2 & 15) {
            case 1:
                return 0;
            case 2:
                return i;
            case JsonWriteContext.STATUS_OK_AFTER_SPACE /* 3 */:
                return i / 2;
            default:
                return 0;
        }
    }

    private static int computeY(Paint.FontMetricsInt fontMetricsInt, int i, int i2, int i3) {
        int i4 = -fontMetricsInt.top;
        if (i <= i2) {
            return i4;
        }
        switch ((i3 >> 4) & 15) {
            case 1:
                return -fontMetricsInt.top;
            case 2:
                return (-fontMetricsInt.top) + (i - i2);
            case JsonWriteContext.STATUS_OK_AFTER_SPACE /* 3 */:
                return (-fontMetricsInt.top) + ((i - i2) / 2);
            default:
                return i4;
        }
    }

    /*  JADX ERROR: NullPointerException in pass: LoopRegionVisitor
        java.lang.NullPointerException: Cannot invoke "jadx.core.dex.instructions.args.SSAVar.use(jadx.core.dex.instructions.args.RegisterArg)" because "ssaVar" is null
        	at jadx.core.dex.nodes.InsnNode.rebindArgs(InsnNode.java:489)
        	at jadx.core.dex.nodes.InsnNode.rebindArgs(InsnNode.java:492)
        	at jadx.core.dex.visitors.regions.LoopRegionVisitor.checkArrayForEach(LoopRegionVisitor.java:230)
        	at jadx.core.dex.visitors.regions.LoopRegionVisitor.checkForIndexedLoop(LoopRegionVisitor.java:144)
        	at jadx.core.dex.visitors.regions.LoopRegionVisitor.processLoopRegion(LoopRegionVisitor.java:81)
        	at jadx.core.dex.visitors.regions.LoopRegionVisitor.enterRegion(LoopRegionVisitor.java:65)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:67)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(ArrayList.java:1596)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverse(DepthRegionTraversal.java:19)
        	at jadx.core.dex.visitors.regions.LoopRegionVisitor.visit(LoopRegionVisitor.java:55)
        */
    public static void createTextBitmap(java.lang.String r13, java.lang.String r14, int r15, int r16, int r17, int r18) {
        /*
            java.lang.String r2 = refactorString(r13)
            android.graphics.Paint r4 = newPaint(r14, r15, r16)
            r0 = r17
            r1 = r18
            org.cocos2dx.lib.c r5 = computeTextProperty(r2, r4, r0, r1)
            if (r18 != 0) goto L39
            int r2 = r5.b
        L14:
            int r3 = r5.a
            android.graphics.Bitmap$Config r6 = android.graphics.Bitmap.Config.ARGB_8888
            android.graphics.Bitmap r6 = android.graphics.Bitmap.createBitmap(r3, r2, r6)
            android.graphics.Canvas r7 = new android.graphics.Canvas
            r7.<init>(r6)
            android.graphics.Paint$FontMetricsInt r2 = r4.getFontMetricsInt()
            int r3 = r5.b
            r0 = r18
            r1 = r16
            int r3 = computeY(r2, r0, r3, r1)
            java.lang.String[] r8 = r5.d
            int r9 = r8.length
            r2 = 0
        L33:
            if (r2 < r9) goto L3c
            initNativeObject(r6)
            return
        L39:
            r2 = r18
            goto L14
        L3c:
            r10 = r8[r2]
            int r11 = r5.a
            r0 = r16
            int r11 = computeX(r4, r10, r11, r0)
            float r11 = (float) r11
            float r12 = (float) r3
            r7.drawText(r10, r11, r12, r4)
            int r10 = r5.c
            int r3 = r3 + r10
            int r2 = r2 + 1
            goto L33
        */
        throw new UnsupportedOperationException("Method not decompiled: org.cocos2dx.lib.Cocos2dxBitmap.createTextBitmap(java.lang.String, java.lang.String, int, int, int, int):void");
    }

    private static LinkedList divideStringWithMaxWidth(Paint paint, String str, int i) {
        int i2;
        int length = str.length();
        LinkedList linkedList = new LinkedList();
        int i3 = 1;
        int i4 = 0;
        while (i3 <= length) {
            int ceil = (int) Math.ceil(paint.measureText(str, i4, i3));
            if (ceil >= i) {
                int lastIndexOf = str.substring(0, i3).lastIndexOf(MinimalPrettyPrinter.DEFAULT_ROOT_VALUE_SEPARATOR);
                if (lastIndexOf != -1 && lastIndexOf > i4) {
                    linkedList.add(str.substring(i4, lastIndexOf));
                } else if (ceil > i) {
                    linkedList.add(str.substring(i4, i3 - 1));
                    lastIndexOf = i3 - 1;
                } else {
                    linkedList.add(str.substring(i4, i3));
                    lastIndexOf = i3;
                }
                while (true) {
                    i3 = lastIndexOf + 1;
                    if (str.indexOf(lastIndexOf) != 32) {
                        break;
                    }
                    lastIndexOf = i3;
                }
                i2 = i3;
            } else {
                i2 = i4;
            }
            i3++;
            i4 = i2;
        }
        if (i4 < length) {
            linkedList.add(str.substring(i4));
        }
        return linkedList;
    }

    private static byte[] getPixels(Bitmap bitmap) {
        if (bitmap == null) {
            return null;
        }
        byte[] bArr = new byte[bitmap.getWidth() * bitmap.getHeight() * 4];
        ByteBuffer wrap = ByteBuffer.wrap(bArr);
        wrap.order(ByteOrder.nativeOrder());
        bitmap.copyPixelsToBuffer(wrap);
        return bArr;
    }

    private static void initNativeObject(Bitmap bitmap) {
        byte[] pixels = getPixels(bitmap);
        if (pixels == null) {
            return;
        }
        nativeInitBitmapDC(bitmap.getWidth(), bitmap.getHeight(), pixels);
    }

    private static native void nativeInitBitmapDC(int i, int i2, byte[] bArr);

    private static Paint newPaint(String str, int i, int i2) {
        Paint paint = new Paint();
        paint.setColor(-1);
        paint.setTextSize(i);
        paint.setAntiAlias(true);
        if (str.endsWith(".ttf")) {
            try {
                paint.setTypeface(r.get(context, str));
            } catch (Exception e) {
                Log.e("Cocos2dxBitmap", "error to create ttf type face: " + str);
                paint.setTypeface(Typeface.create(str, 0));
            }
        } else {
            paint.setTypeface(Typeface.create(str, 0));
        }
        switch (i2 & 15) {
            case 1:
                paint.setTextAlign(Paint.Align.LEFT);
                return paint;
            case 2:
                paint.setTextAlign(Paint.Align.RIGHT);
                return paint;
            case JsonWriteContext.STATUS_OK_AFTER_SPACE /* 3 */:
                paint.setTextAlign(Paint.Align.CENTER);
                return paint;
            default:
                paint.setTextAlign(Paint.Align.LEFT);
                return paint;
        }
    }

    private static String refactorString(String str) {
        if (str.compareTo("") == 0) {
            return MinimalPrettyPrinter.DEFAULT_ROOT_VALUE_SEPARATOR;
        }
        StringBuilder sb = new StringBuilder(str);
        int i = 0;
        for (int indexOf = sb.indexOf("\n"); indexOf != -1; indexOf = sb.indexOf("\n", i)) {
            if (indexOf == 0 || sb.charAt(indexOf - 1) == '\n') {
                sb.insert(i, MinimalPrettyPrinter.DEFAULT_ROOT_VALUE_SEPARATOR);
                i = indexOf + 2;
            } else {
                i = indexOf + 1;
            }
            if (i > sb.length() || indexOf == sb.length()) {
                break;
            }
        }
        return sb.toString();
    }

    public static void setContext(Context context2) {
        context = context2;
    }

    private static String[] splitString(String str, int i, int i2, Paint paint) {
        int i3 = 0;
        String[] split = str.split("\\n");
        Paint.FontMetricsInt fontMetricsInt = paint.getFontMetricsInt();
        int ceil = i / ((int) Math.ceil(fontMetricsInt.bottom - fontMetricsInt.top));
        if (i2 == 0) {
            if (i == 0 || split.length <= ceil) {
                return split;
            }
            LinkedList linkedList = new LinkedList();
            while (i3 < ceil) {
                linkedList.add(split[i3]);
                i3++;
            }
            String[] strArr = new String[linkedList.size()];
            linkedList.toArray(strArr);
            return strArr;
        }
        LinkedList linkedList2 = new LinkedList();
        int length = split.length;
        while (i3 < length) {
            String str2 = split[i3];
            if (((int) Math.ceil(paint.measureText(str2))) > i2) {
                linkedList2.addAll(divideStringWithMaxWidth(paint, str2, i2));
            } else {
                linkedList2.add(str2);
            }
            if (ceil > 0 && linkedList2.size() >= ceil) {
                break;
            }
            i3++;
        }
        if (ceil > 0 && linkedList2.size() > ceil) {
            while (linkedList2.size() > ceil) {
                linkedList2.removeLast();
            }
        }
        String[] strArr2 = new String[linkedList2.size()];
        linkedList2.toArray(strArr2);
        return strArr2;
    }
}
