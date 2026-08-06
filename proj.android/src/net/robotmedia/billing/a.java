// Stub for net.robotmedia.billing.a
// The real class manages in-app billing requests. This stub provides
// the static methods referenced by BillingRobTopActivity as no-ops.
package net.robotmedia.billing;

import android.app.Activity;
import java.util.ArrayList;
import java.util.List;
import net.robotmedia.billing.a.c;
import net.robotmedia.billing.a.d;

public final class a {
    private a() {}

    public static void a(Activity activity, String itemId, boolean consumable, Object extra) {
        // no-op stub
    }

    public static List<c> c(Activity activity) {
        return new ArrayList<c>();
    }

    public static void c(Activity activity, c transaction) {
        // no-op stub
    }
}
