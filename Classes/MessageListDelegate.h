
#ifndef MESSAGELISTDELEGATE_H_
#define MESSAGELISTDELEGATE_H_

#include "cocos2d.h"
#include <string>

class MessageListDelegate {
public:
    void setupPageInfo(std::string, char const*);
    void loadMessagesFailed(char const*, GJErrorCode);
    void forceReloadMessages(bool);
    void loadMessagesFinished(cocos2d::CCArray*, char const*);

};

#endif // MESSAGELISTDELEGATE_H_
