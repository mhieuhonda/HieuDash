
#ifndef GOOGLEPLAYMANAGER_H_
#define GOOGLEPLAYMANAGER_H_

class GooglePlayManager : public GManager {
public:
    virtual ~GooglePlayManager();

    GooglePlayManager* sharedState();
    void googlePlaySignedIn();
    bool init();

};

#endif // GOOGLEPLAYMANAGER_H_
