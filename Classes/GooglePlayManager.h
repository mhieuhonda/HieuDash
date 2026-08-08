
#ifndef GOOGLEPLAYMANAGER_H_
#define GOOGLEPLAYMANAGER_H_

class GooglePlayManager {
public:
    virtual ~GooglePlayManager();

    void sharedState();
    void googlePlaySignedIn();
    void init();

};

#endif // GOOGLEPLAYMANAGER_H_
