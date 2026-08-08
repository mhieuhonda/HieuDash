// ============================================================
// JniHelper.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_JNIHELPER_H_
#define COCOS2D_JNIHELPER_H_

#include "cocos2d.h"

namespace cocos2d {

class JniHelper {
public:
    void getClassID(char const*, _JNIEnv*);
    void getMethodInfo(cocos2d::JniMethodInfo_&, char const*, char const*, char const*);
    void jstring2string(_jstring*);
    void getStaticMethodInfo(cocos2d::JniMethodInfo_&, char const*, char const*, char const*);
    void getPlatformTimestamp();
    void getJavaVM();
    void setJavaVM(_JavaVM*);

};

} // namespace cocos2d

#endif // COCOS2D_JNIHELPER_H_
