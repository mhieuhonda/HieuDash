
#ifndef LOADINGLAYER_H_
#define LOADINGLAYER_H_

#include <string>

class LoadingLayer {
public:
    virtual ~LoadingLayer();

    void loadAssets();
    void updateProgress(int);
    void loadingFinished();
    void getLoadingString();
    void init(bool);
    void scene(bool);
    void create(bool);

protected:
    std::string m_loadingString;

};

#endif // LOADINGLAYER_H_
