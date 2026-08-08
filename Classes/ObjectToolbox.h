
#ifndef OBJECTTOOLBOX_H_
#define OBJECTTOOLBOX_H_

class ObjectToolbox {
public:
    virtual ~ObjectToolbox();

    void sharedState();
    void intKeyToFrame(int);
    void gridNodeSizeForKey(int);
    void perspectiveBlockFrame(int);
    void init();
    void allKeys();

};

#endif // OBJECTTOOLBOX_H_
