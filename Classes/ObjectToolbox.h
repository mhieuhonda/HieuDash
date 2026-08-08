
#ifndef OBJECTTOOLBOX_H_
#define OBJECTTOOLBOX_H_

class ObjectToolbox : public GManager {
public:
    virtual ~ObjectToolbox();

    ObjectToolbox* sharedState();
    void intKeyToFrame(int);
    void gridNodeSizeForKey(int);
    void perspectiveBlockFrame(int);
    bool init();
    void allKeys();

};

#endif // OBJECTTOOLBOX_H_
