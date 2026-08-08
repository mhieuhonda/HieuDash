
#ifndef SHARECOMMENTLAYER_H_
#define SHARECOMMENTLAYER_H_

#include "cocos2d.h"
#include <string>

class ShareCommentLayer {
public:
    virtual ~ShareCommentLayer();

    void textChanged(CCTextInputNode*);
    void onClosePopup(UploadActionPopup*);
    void keyBackClicked();
    void updateDescText(std::string);
    void textInputClosed(CCTextInputNode*);
    void textInputOpened(CCTextInputNode*);
    void updatePercentLabel();
    void uploadActionFailed(int, int);
    void updateCharCountLabel();
    void uploadActionFinished(int, int);
    void registerWithTouchDispatcher();
    void init(std::string, int, CommentType, int, std::string);
    void create(std::string, int, CommentType, int, std::string);
    void onClear(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);
    void onShare(cocos2d::CCObject*);
    void onPercent(cocos2d::CCObject*);

};

#endif // SHARECOMMENTLAYER_H_
