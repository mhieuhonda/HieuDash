#ifndef HIEUDASH_GJUSERMESSAGE_H_
#define HIEUDASH_GJUSERMESSAGE_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// User messaging data

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GJUserMessage : public cocos2d::CCObject {
public:
    GJUserMessage();

    int m_nMessageID;
    int m_nSenderID;
    int m_nRecipientID;
    std::string m_sSenderName;
    std::string m_sRecipientName;
    std::string m_sSubject;
    std::string m_sBody;
    int m_nAge;
    bool m_bIsRead;
    bool m_bIsSender;
    int m_nSenderIcon;
    int m_nSenderIconType;
    int m_nSenderColor1;
    int m_nSenderColor2;

    static GJUserMessage* create();
    bool init();
    int getMessageID();
    std::string getSubject();
    bool isRead();

    ~GJUserMessage();
};

#endif // HIEUDASH_GJUSERMESSAGE_H_
