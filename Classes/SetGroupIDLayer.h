
#ifndef SETGROUPIDLAYER_H_
#define SETGROUPIDLAYER_H_

#include "cocos2d.h"
#include <string>

class SetGroupIDLayer {
public:
    virtual ~SetGroupIDLayer();

    void addGroupID(int);
    void onAddGroup(cocos2d::CCObject*);
    void onArrowLeft(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void onArrowRight(cocos2d::CCObject*);
    void onSmoothEase(cocos2d::CCObject*);
    void updateZOrder();
    void onToggleGuide(cocos2d::CCObject*);
    void onZLayerShift(cocos2d::CCObject*);
    void removeGroupID(int);
    void keyBackClicked();
    void onNextGroupID1(cocos2d::CCObject*);
    void createTextInput(cocos2d::CCPoint, int, int, std::string, float, int);
    void onToggleTraceIn(cocos2d::CCObject*);
    void textInputClosed(CCTextInputNode*);
    void onAddGroupParent(cocos2d::CCObject*);
    void onGroupIDOptions(cocos2d::CCObject*);
    void onToggleTraceOut(cocos2d::CCObject*);
    void valuePopupClosed(ConfigureValuePopup*, float);
    void onRemoveFromGroup(cocos2d::CCObject*);
    void updateEditorLabel();
    void updateEditorOrder();
    void updateZOrderLabel();
    void updateEditorLabel2();
    void updateGroupIDLabel();
    void updateOrderChannel();
    void callRemoveFromGroup(float);
    void updateEditorLayerID();
    void updateZLayerButtons();
    void determineStartValues();
    void updateEditorLayerID2();
    void updateGroupIDButtons();
    void onToggleSelectedOrder(cocos2d::CCObject*);
    void onNextFreeEditorLayer1(cocos2d::CCObject*);
    void onNextFreeEditorLayer2(cocos2d::CCObject*);
    void onNextFreeOrderChannel(cocos2d::CCObject*);
    void updateEditorOrderLabel();
    void updateOrderChannelLabel();
    void init(GameObject*, cocos2d::CCArray*);
    void create(GameObject*, cocos2d::CCArray*);
    void onAnim(cocos2d::CCObject*);
    void onCopy(cocos2d::CCObject*);
    void onArrow(int, int);
    void onClose(cocos2d::CCObject*);
    void onExtra(cocos2d::CCObject*);
    void onPaste(cocos2d::CCObject*);
    void onExtra2(cocos2d::CCObject*);
    void onZLayer(cocos2d::CCObject*);

};

#endif // SETGROUPIDLAYER_H_
