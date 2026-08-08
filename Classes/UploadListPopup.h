// ============================================================
// UploadListPopup.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef UPLOADLISTPOPUP_H_
#define UPLOADLISTPOPUP_H_

#include "cocos2d.h"

class UploadListPopup {
public:
    virtual ~UploadListPopup();
    virtual ~UploadListPopup();
    virtual ~UploadListPopup();

    void keyBackClicked();
    void onReturnToList(cocos2d::CCObject*);
    void listUploadFailed(GJLevelList*, int);
    void listUploadFinished(GJLevelList*);
    void init(GJLevelList*);
    void show();
    void create(GJLevelList*);
    void onBack(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);

};

#endif // UPLOADLISTPOPUP_H_
