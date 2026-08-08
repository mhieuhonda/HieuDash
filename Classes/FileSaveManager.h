
#ifndef FILESAVEMANAGER_H_
#define FILESAVEMANAGER_H_

class FileSaveManager {
public:
    virtual ~FileSaveManager();

    void sharedState();
    void getStoreData();
    void loadDataFromFile(char const*);
    void init();
    void firstLoad();

};

#endif // FILESAVEMANAGER_H_
