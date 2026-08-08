
#ifndef CCMOVECNODE_H_
#define CCMOVECNODE_H_

class CCMoveCNode : public cocos2d::CCNode {
public:
    virtual ~CCMoveCNode();

    bool init();
    void reset();
    void create();

};

#endif // CCMOVECNODE_H_
