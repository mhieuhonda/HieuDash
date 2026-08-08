
#ifndef FMODLEVELVISUALIZER_H_
#define FMODLEVELVISUALIZER_H_

class FMODLevelVisualizer : public cocos2d::CCLayer {
public:
    virtual ~FMODLevelVisualizer();

    void updateVisualizer(float, float, float);
    bool init();
    void create();

};

#endif // FMODLEVELVISUALIZER_H_
