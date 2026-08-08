
#ifndef CCCONTENTMANAGER_H_
#define CCCONTENTMANAGER_H_

class CCContentManager : public GManager {
public:
    virtual ~CCContentManager();

    void clearCache();
    void sharedManager();
    bool init();
    void addDict(char const*, bool);
    void addDictDS(char const*);

};

#endif // CCCONTENTMANAGER_H_
