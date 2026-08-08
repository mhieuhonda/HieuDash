// ============================================================
// OnlineListDelegate.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef ONLINELISTDELEGATE_H_
#define ONLINELISTDELEGATE_H_

#include "cocos2d.h"
#include <string>

class OnlineListDelegate {
public:
    void setupPageInfo(std::string, char const*);
    void loadListFailed(char const*);
    void loadListFinished(cocos2d::CCArray*, char const*);

};

#endif // ONLINELISTDELEGATE_H_
