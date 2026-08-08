
#ifndef FILESAVEMANAGER_H_
#define FILESAVEMANAGER_H_

class FileSaveManager : public GManager {
public:
    virtual ~FileSaveManager();

    FileSaveManager* sharedState();
    void getStoreData();
    void loadDataFromFile(char const*);
    bool init();
    void firstLoad();

};

#endif // FILESAVEMANAGER_H_
