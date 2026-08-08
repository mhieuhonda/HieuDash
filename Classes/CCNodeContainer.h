
#ifndef CCNODECONTAINER_H_
#define CCNODECONTAINER_H_

class CCNodeContainer : public cocos2d::CCNode {
public:
    virtual ~CCNodeContainer();

    bool init();
    void visit();
    void create();

};

#endif // CCNODECONTAINER_H_
