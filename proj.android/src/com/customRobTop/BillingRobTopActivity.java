package com.customRobTop;

import android.os.Bundle;
import android.util.Log;
import java.util.Iterator;
import java.util.List;
import net.robotmedia.billing.a;
import net.robotmedia.billing.a.c;
import net.robotmedia.billing.a.d;
import net.robotmedia.billing.helper.AbstractBillingActivity;
import net.robotmedia.billing.k;

/* loaded from: classes.dex */
public class BillingRobTopActivity extends AbstractBillingActivity {
    private static BillingRobTopActivity me = null;
    private static boolean billingSupported_ = false;
    public static boolean transactionsRestored_ = false;

    public static boolean isBillingSupported() {
        return billingSupported_;
    }

    public static void purchaseItem(String str) {
        Log.i("IAP", "IAP Purchase item: " + str);
        a.a(me, str, true, null);
    }

    public static void restorePurchases() {
        me.doRestoreCheck();
    }

    private void updateOwnedItems() {
        List<c> c = a.c(this);
        Log.i("IAP", "IAP Update owned items");
        for (c cVar : c) {
            Log.i("IAP", "IAP: " + cVar.e);
            if (cVar.f == d.PURCHASED) {
                JniToCpp.itemPurchased(cVar.e);
            } else if (cVar.f == d.REFUNDED) {
                JniToCpp.itemRefunded(cVar.e);
            }
        }
        Iterator it = c.iterator();
        while (it.hasNext()) {
            a.c(this, (c) it.next());
        }
    }

    @Override // net.robotmedia.billing.c
    public byte[] getObfuscationSalt() {
        return new byte[]{40, -92, -112, -31, 52, -43, 122, -120, -112, -86, -87, 75, 123, 105, 2, 71, 55, 108, 50, -112};
    }

    @Override // net.robotmedia.billing.c
    public String getPublicKey() {
        return "MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAj5ns81HIg1bXgBl4/ftMRD75LqUaM9TsYUBA3edPPPqNgu1YPDUSjnSQlVndpQRCBWUjQ7teuTjzK+VZTZErLu4uaoaWSplbJ7dAu+TyVJRI81K/RvwM/uFU4chgk628GpnoGqh7eNTG29Ol1FO/Q1KoQA1SXuJbwvdkiSxry4pTPgpdnGaOfs3DyBADe2jLKvRD6zS4o0NaM1w/NLEl5GytayK25oLM6s0gdbpqc8voX8bo8GDHTJwiLlnP6paRe2KkY1tFdifP4bzoEVR7i3v0zxq40Zku5W3tZJepGIg0tJVzvy9eRgxSpGycNdRITRoHLvpvyd1O7PvFajl4fQIDAQAB";
    }

    @Override // net.robotmedia.billing.helper.AbstractBillingActivity
    public void onBillingChecked(boolean z) {
        if (z) {
            Log.i("IAP", "IAP Billing Supported!");
        } else {
            Log.i("IAP", "IAP Billing NOT Supported!");
        }
        billingSupported_ = z;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // net.robotmedia.billing.helper.AbstractBillingActivity, android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        me = this;
    }

    @Override // net.robotmedia.billing.helper.AbstractBillingActivity
    public void onPurchaseStateChanged(String str, d dVar) {
        Log.i("IAP", "IAP onPurchaseStateChanged() itemId: " + str);
        updateOwnedItems();
    }

    @Override // net.robotmedia.billing.helper.AbstractBillingActivity
    public void onRequestPurchaseResponse(String str, k kVar) {
        Log.i("IAP", "IAP onRequestPurchaseResponse(): " + str);
        JniToCpp.hideLoadingCircle();
    }

    @Override // net.robotmedia.billing.helper.AbstractBillingActivity
    public void onSubscriptionChecked(boolean z) {
        Log.i("IAP", "IAP onSubscriptionChecked(): " + z);
    }
}
