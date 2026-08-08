
#ifndef CCNODECONTAINER_H_
#define CCNODECONTAINER_H_

class CCNodeContainer {
public:
    virtual ~CCNodeContainer();

    void init();
    void visit();
    void create();

};

#endif // CCNODECONTAINER_H_
