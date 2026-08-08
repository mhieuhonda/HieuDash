
#ifndef GMANAGER_H_
#define GMANAGER_H_

#include <string>

class GManager {
public:
    virtual ~GManager();

    void dataLoaded(DS_Dictionary*);
    void tryLoadData(DS_Dictionary*, std::string const&);
    void encodeDataTo(DS_Dictionary*);
    std::string getSaveString();
    void loadFromString(std::string&);
    void loadDataFromFile(std::string const&);
    std::string getCompressedSaveString();
    void loadFromCompressedString(std::string&);
    bool init();
    void load();
    void save();
    void setup();
    void saveData(DS_Dictionary*, std::string);
    void saveGMTo(std::string);
    void firstLoad();

protected:
    std::string m_compressedSaveString;
    std::string m_saveString;

};

#endif // GMANAGER_H_
