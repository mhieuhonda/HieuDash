#ifndef HIEUDASH_APP_MACROS_H_
#define HIEUDASH_APP_MACROS_H_

#include "cocos2d.h"
#include "HieuDashEnums.h"

// Standard cocos2d-x 2.2.3 app macros (from the create_project template).

#define DESIGN_RESOLUTION_480X320    0
#define DESIGN_RESOLUTION_1024X768   1
#define DESIGN_RESOLUTION_2048X1536  2

// Geometry Dash 1.0 shipped at 1024x768 landscape on iPad-class devices
// and 800x480 on phones; we use 1024x768 as the design resolution.
#define TARGET_DESIGN_RESOLUTION_SIZE   DESIGN_RESOLUTION_1024X768

typedef struct tagResource {
    cocos2d::CCSize size;
    char directory[32];
} Resource;

namespace { Resource cResourceSize[] = {
    { cocos2d::CCSizeMake(480, 320),   "iphone"     },
    { cocos2d::CCSizeMake(1024, 768),  "ipad"       },
    { cocos2d::CCSizeMake(2048, 1536), "ipadhd"     }
};

} // anonymous namespace

#define cResource       cResourceSize[TARGET_DESIGN_RESOLUTION_SIZE]

#endif  // _APP_MACROS_H_
