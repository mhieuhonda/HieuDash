
#ifndef INHERITANCENODE_H_
#define INHERITANCENODE_H_

class InheritanceNode {
public:
    virtual ~InheritanceNode();

    void init(int, InheritanceNode*);
    void create(int, InheritanceNode*);

};

#endif // INHERITANCENODE_H_
