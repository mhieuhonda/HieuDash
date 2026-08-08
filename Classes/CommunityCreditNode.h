
#ifndef COMMUNITYCREDITNODE_H_
#define COMMUNITYCREDITNODE_H_

#include <string>

class CommunityCreditNode {
public:
    virtual ~CommunityCreditNode();

    void init(int, int, int, std::string);
    void create(int, int, int, std::string);

};

#endif // COMMUNITYCREDITNODE_H_
