// ============================================================
// GManager.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef GMANAGER_H_
#define GMANAGER_H_

#include <string>

class GManager {
public:
    virtual ~GManager();
    virtual ~GManager();
    virtual ~GManager();

    void dataLoaded(DS_Dictionary*);
    void tryLoadData(DS_Dictionary*, std::string const&);
    void encodeDataTo(DS_Dictionary*);
    void getSaveString();
    void loadFromString(std::string&);
    void loadDataFromFile(std::string const&);
    void getCompressedSaveString();
    void loadFromCompressedString(std::string&);
    void init();
    void load();
    void save();
    void setup();
    void saveData(DS_Dictionary*, std::string);
    void saveGMTo(std::string);
    void firstLoad();

};

#endif // GMANAGER_H_
