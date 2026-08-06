// Stub for net.robotmedia.billing.helper.AbstractBillingActivity
// Minimal Activity subclass that implements net.robotmedia.billing.c.
package net.robotmedia.billing.helper;

import android.app.Activity;
import android.os.Bundle;
import net.robotmedia.billing.c;
import net.robotmedia.billing.k;
import net.robotmedia.billing.a.d;

public abstract class AbstractBillingActivity extends Activity implements c {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
    }

    public abstract void onBillingChecked(boolean supported);

    public abstract void onPurchaseStateChanged(String itemId, d state);

    public abstract void onRequestPurchaseResponse(String itemId, k response);

    public abstract void onSubscriptionChecked(boolean supported);
}
