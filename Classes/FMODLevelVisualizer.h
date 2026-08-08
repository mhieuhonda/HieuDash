
#ifndef FMODLEVELVISUALIZER_H_
#define FMODLEVELVISUALIZER_H_

class FMODLevelVisualizer {
public:
    virtual ~FMODLevelVisualizer();

    void updateVisualizer(float, float, float);
    void init();
    void create();

};

#endif // FMODLEVELVISUALIZER_H_
