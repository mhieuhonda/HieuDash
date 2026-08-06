// Stub for com.flurry.android.FlurryAgent
// Provides no-op implementations so the original Java sources compile
// without the proprietary Flurry analytics SDK.
package com.flurry.android;

import android.content.Context;

public final class FlurryAgent {
    private FlurryAgent() {}

    public static void onStartSession(Context context, String apiKey) {
        // no-op stub
    }

    public static void onEndSession(Context context) {
        // no-op stub
    }

    public static void logEvent(String eventId) {
        // no-op stub
    }

    public static void logEvent(String eventId, boolean timed) {
        // no-op stub
    }

    public static void endTimedEvent(String eventId) {
        // no-op stub
    }
}
