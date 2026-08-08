
#ifndef LOADINGCIRCLESPRITE_H_
#define LOADINGCIRCLESPRITE_H_

class LoadingCircleSprite {
public:
    virtual ~LoadingCircleSprite();

    void hideCircle();
    void fadeInCircle(bool, float, float);
    void init(float);
    void create(float);

};

#endif // LOADINGCIRCLESPRITE_H_
