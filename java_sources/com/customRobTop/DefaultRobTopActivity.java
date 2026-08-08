package com.customRobTop;

import android.app.Activity;
import android.os.Bundle;
import android.util.Log;

/* loaded from: classes.dex */
public class DefaultRobTopActivity extends Activity {
    private static DefaultRobTopActivity me;

    public static boolean isBillingSupported() {
        return false;
    }

    public static void purchaseItem(String str) {
        Log.i("IAP", "IAP Purchase item: " + str);
    }

    public static void restorePurchases() {
    }

    public void doRestoreCheck() {
    }

    public String getPublicKey() {
        return "";
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        me = this;
    }

    public void updateOwnedItems() {
    }
}
