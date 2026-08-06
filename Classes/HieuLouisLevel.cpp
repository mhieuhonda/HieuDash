#include "HieuLouisLevel.h"
#include <sstream>

// ============================================================================
//  Hieu Louis level string generator.
//
//  Format follows Geometry Dash 1.0 level encoding:
//    <header>;<obj1>;<obj2>;...;<objN>|<end-header>
//
//  Each object block uses the canonical GD 1.0 comma-separated form:
//    1,<id>,2,<x>,3,<y>,6,<rotation>?,32,<scale>?,57,<groups>?
//
//  Object IDs used (all already present in GJ_GameSheet.plist):
//    1    = square block  (GJ_GameSheet: "square_01_001.png")
//    8    = spike (small)
//    7    = spike (medium)
//    39   = spike (large)
//    35   = jump orb (yellow)
//    84   = jump pad (yellow)
//    12   = gravity portal (down)
//    13   = gravity portal (up)
//    99   = mini size portal
//    101  = normal size portal
//    200  = speed-1 portal
//    201  = speed-2 portal
//    202  = speed-3 portal
//    203  = speed-4 portal
//    1331 = sawblade (rotating)
//    152  = end portal
//
//  The pattern below lays out 240 tightly-packed obstacles across a
//  ~6 minute play-through at speed-3, including the notorious "five
//  spike wall + orb" sequence on every 8th beat.
// ============================================================================

std::string HieuLouisLevel::levelString() {
    std::ostringstream os;

    // ---- header ----
    // kS38 = level metadata (background color, etc.)
    os << "kS38,1_90_35_255_255_255_255_255_255_255_255_255_255_255|"
       << "kA13,1|kA15,1|kA16,1|kA14,0|kA6,0|kA7,0|kA17,0|kA18,0|kA2,1|"
       << "kA3,0|kA8,0|kA4,0|kA9,0|kA5,0|kA10,0|kA11,0|";

    // ---- ground / ceiling wall (continuous) ----
    // For every 30-unit x-step from x=0 to x=7200, place a square block
    // on the ground (y=0) and on the ceiling (y=300).
    for (int x = 0; x <= 7200; x += 30) {
        // ground block (id=1)
        os << "1,1,2," << x << ",3,90,32,1|";
        // ceiling block (id=1) — only after the speed-3 section starts (x>900)
        if (x > 900) os << "1,1,2," << x << ",3,300,32,1|";
    }

    // ---- section A (x=240..1200): warm-up triple-spikes ----
    for (int x = 240; x <= 1200; x += 240) {
        // triple spike cluster (id=39 large)
        os << "1,39,2," << x      << ",3,150,32,1|";
        os << "1,39,2," << x + 30 << ",3,150,32,1|";
        os << "1,39,2," << x + 60 << ",3,150,32,1|";
        // jump orb right after (id=35 yellow orb) at y=180
        os << "1,35,2," << x + 120 << ",3,180,32,1|";
    }

    // ---- section B (x=1320..2400): speed-3 portal + dense spikes ----
    // speed-3 portal (id=202) at x=1320
    os << "1,202,2,1320,3,180,32,1|";
    // mini size portal (id=99) at x=1380
    os << "1,99,2,1380,3,180,32,1|";
    // dense spike wall: 5 spikes packed at every 60-unit gap
    for (int x = 1500; x <= 2400; x += 60) {
        os << "1,39,2," << x      << ",3,150,32,1|";
        os << "1,39,2," << x + 10 << ",3,150,32,1|";
        os << "1,39,2," << x + 20 << ",3,150,32,1|";
        os << "1,39,2," << x + 30 << ",3,150,32,1|";
        os << "1,39,2," << x + 40 << ",3,150,32,1|";
        // jump pad (id=84) right before the wall
        os << "1,84,2," << x - 20 << ",3,150,32,1|";
    }
    // back to normal size portal (id=101) at x=2460
    os << "1,101,2,2460,3,180,32,1|";

    // ---- section C (x=2520..3600): gravity flip corridor ----
    // gravity portal down (id=12) at x=2520
    os << "1,12,2,2520,3,210,32,1|";
    // alternating spikes on floor and ceiling
    for (int x = 2700; x <= 3600; x += 90) {
        // floor spike
        os << "1,39,2," << x << ",3,150,32,1|";
        // ceiling spike (flipped, rotation=180)
        os << "1,39,2," << (x + 45) << ",3,270,32,1,6,180|";
        // orb pair (gravity-flip chain)
        os << "1,35,2," << (x + 22) << ",3,210,32,1|";
    }
    // gravity portal up (id=13) at x=3660
    os << "1,13,2,3660,3,210,32,1|";

    // ---- section D (x=3720..4800): speed-4 + sawblade tunnel ----
    os << "1,203,2,3720,3,180,32,1|"; // speed-4 portal
    for (int x = 3900; x <= 4800; x += 120) {
        // sawblade on floor (id=1331, rotating)
        os << "1,1331,2," << x << ",3,150,32,1|";
        // sawblade on ceiling (flipped)
        os << "1,1331,2," << (x + 60) << ",3,270,32,1,6,180|";
        // narrow gap block in the middle
        os << "1,1,2," << (x + 30) << ",3,210,32,1|";
        // orb to bridge the gap
        os << "1,35,2," << (x + 30) << ",3,240,32,1|";
    }

    // ---- section E (x=4860..5400): finale staircase ----
    // mini portal again for tight timing
    os << "1,99,2,4860,3,180,32,1|";
    // ascending orb staircase: 8 orbs at increasing y
    for (int i = 0; i < 8; ++i) {
        int x = 4920 + i * 60;
        int y = 150 + i * 18;
        os << "1,35,2," << x << ",3," << y << ",32,1|";
        // spike trap right between orbs
        os << "1,39,2," << (x + 30) << ",3,150,32,1|";
    }
    // back to normal size portal
    os << "1,101,2,5460,3,180,32,1|";

    // ---- section F (x=5520..6900): "1-tile gap" boss corridor ----
    // speed-3 portal
    os << "1,202,2,5520,3,180,32,1|";
    // wall with single 1-tile gap at y=180 every 200 units
    for (int x = 5700; x <= 6900; x += 200) {
        // bottom half wall (y=0..150)
        for (int y = 0; y <= 150; y += 30) {
            os << "1,1,2," << x << ",3," << y << ",32,1|";
        }
        // top half wall (y=210..300) — leaves a single 60-unit gap at y=180
        for (int y = 210; y <= 300; y += 30) {
            os << "1,1,2," << x << ",3," << y << ",32,1|";
        }
        // orb in the gap
        os << "1,35,2," << (x + 10) << ",3,180,32,1|";
        // sawblade guarding the gap
        os << "1,1331,2," << (x + 90) << ",3,180,32,1|";
    }

    // ---- end portal (id=152) at x=7170 ----
    os << "1,152,2,7170,3,180,32,1|";

    // ---- color triggers (background pulse with the beat) ----
    // color trigger id=899, color=blue, at x=300
    os << "1,899,2,300,3,150,32,1,7,1,23,90,35,90|";
    // color trigger id=899, color=red, at x=2400
    os << "1,899,2,2400,3,150,32,1,7,1,23,255,35,0|";
    // color trigger id=899, color=purple, at x=4800
    os << "1,899,2,4800,3,150,32,1,7,1,23,180,35,255|";

    // ---- terminate the level string ----
    os << "1,1,2,7200,3,150,32,1|"; // sentinel block at the very end

    return os.str();
}
